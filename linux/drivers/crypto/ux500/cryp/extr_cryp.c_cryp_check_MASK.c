
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryp_device_data {TYPE_1__* base; } ;
struct TYPE_2__ {int pcellId3; int pcellId2; int pcellId1; int pcellId0; int periphId3; int periphId1; int periphId0; int periphId2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct cryp_device_data *VAR_10)
{
 int VAR_11 = 0;

 if (((void*)0) == VAR_10)
  return -VAR_8;

 VAR_11 = FUNC_0(&VAR_10->base->periphId2);

 if (VAR_11 != VAR_6)
  return -VAR_9;


 if ((VAR_4 ==
  FUNC_0(&VAR_10->base->periphId0))
     && (VAR_5 ==
      FUNC_0(&VAR_10->base->periphId1))
     && (VAR_7 ==
      FUNC_0(&VAR_10->base->periphId3))
     && (VAR_0 ==
      FUNC_0(&VAR_10->base->pcellId0))
     && (VAR_1 ==
      FUNC_0(&VAR_10->base->pcellId1))
     && (VAR_2 ==
      FUNC_0(&VAR_10->base->pcellId2))
     && (VAR_3 ==
      FUNC_0(&VAR_10->base->pcellId3))) {
  return 0;
 }

 return -VAR_9;
}
