
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error_if_no_space; } ;
struct pool {TYPE_1__ pf; } ;
typedef enum pool_mode { ____Placeholder_pool_mode } pool_mode ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;





 int FUNC_1 (struct pool*) ;

__attribute__((used)) static blk_status_t FUNC_2(struct pool *VAR_2)
{
 enum pool_mode VAR_3 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 128:

  FUNC_0("bio unserviceable, yet pool is in PM_WRITE mode");
  return VAR_0;

 case 131:
  return VAR_2->pf.error_if_no_space ? VAR_1 : 0;

 case 130:
 case 129:
 case 132:
  return VAR_0;
 default:

  FUNC_0("bio unserviceable, yet pool has an unknown mode");
  return VAR_0;
 }
}
