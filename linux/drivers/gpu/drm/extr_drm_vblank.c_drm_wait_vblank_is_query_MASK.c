
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; scalar_t__ sequence; } ;
union drm_wait_vblank {TYPE_1__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(union drm_wait_vblank *VAR_4)
{
 if (VAR_4->request.sequence)
  return 0;

 return VAR_2 ==
  (VAR_4->request.type & (VAR_3 |
       VAR_0 |
       VAR_1));
}
