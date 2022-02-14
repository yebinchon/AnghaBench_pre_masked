
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_3__ {int seek_req; int continue_read_thread; int seek_flags; void* seek_rel; void* seek_pos; } ;
typedef TYPE_1__ VideoState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(VideoState *VAR_1, int64_t VAR_2, int64_t VAR_3, int VAR_4)
{
    if (!VAR_1->seek_req) {
        VAR_1->seek_pos = VAR_2;
        VAR_1->seek_rel = VAR_3;
        VAR_1->seek_flags &= ~VAR_0;
        if (VAR_4)
            VAR_1->seek_flags |= VAR_0;
        VAR_1->seek_req = 1;
        FUNC_0(VAR_1->continue_read_thread);
    }
}
