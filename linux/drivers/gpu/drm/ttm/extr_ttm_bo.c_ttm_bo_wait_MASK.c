
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resv; } ;
struct ttm_buffer_object {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int) ;
 long FUNC_2 (int ,int,int,long) ;

int FUNC_3(struct ttm_buffer_object *VAR_2,
  bool VAR_3, bool VAR_4)
{
 long VAR_5 = 15 * VAR_1;

 if (VAR_4) {
  if (FUNC_1(VAR_2->base.resv, 1))
   return 0;
  else
   return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2->base.resv, 1,
            VAR_3, VAR_5);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 == 0)
  return -VAR_0;

 FUNC_0(VAR_2->base.resv, ((void*)0));
 return 0;
}
