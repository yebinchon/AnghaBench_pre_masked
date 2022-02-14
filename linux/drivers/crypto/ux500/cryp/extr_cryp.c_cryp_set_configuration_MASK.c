
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cryp_device_data {TYPE_1__* base; } ;
struct cryp_config {int keysize; int algodir; int algomode; } ;
struct TYPE_2__ {int cr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cryp_device_data*) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(struct cryp_device_data *VAR_12,
      struct cryp_config *VAR_13,
      u32 *VAR_14)
{
 u32 VAR_15;

 if (((void*)0) == VAR_12 || ((void*)0) == VAR_13)
  return -VAR_10;

 *VAR_14 |= (VAR_13->keysize << VAR_8);


 if ((VAR_0 == VAR_13->algodir) &&
     ((VAR_3 == VAR_13->algomode) ||
      (VAR_2 == VAR_13->algomode))) {
  VAR_15 = *VAR_14;
  VAR_15 |= ((VAR_1 << VAR_5) |
          (VAR_3 << VAR_6) |
          (VAR_4 << VAR_7) |
          (VAR_11 << VAR_9));

  FUNC_1(VAR_15, &VAR_12->base->cr);
  FUNC_0(VAR_12);
 }

 *VAR_14 |=
  ((VAR_13->algomode << VAR_6) |
   (VAR_13->algodir << VAR_5));

 return 0;
}
