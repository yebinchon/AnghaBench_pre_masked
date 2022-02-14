
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ CMV_RxMsg; } ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_4 (DSL_DEV_Device_t * VAR_4, u32 VAR_5, u32 * VAR_6,
         u32 VAR_7)
{
 u32 *VAR_8 = VAR_6;
 u32 VAR_9;

 if (VAR_5 & 3)
  return VAR_0;


 FUNC_2 (VAR_4, (u32) VAR_2, VAR_5);


 while (VAR_7--) {
  FUNC_1 (VAR_4, (u32) VAR_3, &VAR_9);
  if (VAR_6 == (u32 *) FUNC_0(VAR_4)->CMV_RxMsg)
   FUNC_3 (VAR_9);
  *VAR_8 = VAR_9;
  VAR_8++;
 }

 return VAR_1;

}
