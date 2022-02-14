
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ modem_ready; } ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_7 (DSL_DEV_Device_t * VAR_7)
{
 u32 VAR_8 = 0;

 FUNC_2 (VAR_7);

 FUNC_4 ((u32) VAR_2, &VAR_8);
 FUNC_5 ((u32) VAR_2,
  VAR_8 | VAR_4 | VAR_3);


 FUNC_6 (VAR_7, (u32) VAR_6, VAR_5);
 FUNC_6 (VAR_7, (u32) VAR_6, 0);

 FUNC_3 (VAR_7);

 FUNC_1 (VAR_7);







 FUNC_0(VAR_7)->modem_ready = 0;

 return VAR_1;
}
