
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int streamId; int cmdType; } ;
struct vmw_escape_video_flush {TYPE_1__ flush; int escape; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct vmw_escape_video_flush *VAR_1,
         uint32_t VAR_2)
{
 FUNC_0(&VAR_1->escape, sizeof(VAR_1->flush));
 VAR_1->flush.cmdType = VAR_0;
 VAR_1->flush.streamId = VAR_2;
}
