
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int push_buf; } ;
struct TYPE_3__ {int entries; } ;
struct st_brotli_context_t {TYPE_2__ super; TYPE_1__ bufs; int state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct st_brotli_context_t*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct st_brotli_context_t *VAR_1 = VAR_0;

    FUNC_0(VAR_1->state);
    FUNC_2(VAR_1, 0);
    FUNC_1(VAR_1->bufs.entries);
    FUNC_1(VAR_1->super.push_buf);
}
