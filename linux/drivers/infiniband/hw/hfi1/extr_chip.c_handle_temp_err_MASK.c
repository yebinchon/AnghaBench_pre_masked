
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {scalar_t__ link_enabled; scalar_t__ driver_link_ready; } ;
struct hfi1_devdata {int flags; struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*,char*) ;
 int FUNC_2 (struct hfi1_devdata*,int) ;
 int FUNC_3 (struct hfi1_pportdata*,int) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_5)
{
 struct hfi1_pportdata *VAR_6 = &VAR_5->pport[0];





 FUNC_1(VAR_5,
       "Critical temperature reached! Forcing device into freeze mode!\n");
 VAR_5->flags |= VAR_2;
 FUNC_3(VAR_6, VAR_1 | VAR_0);
 VAR_6->driver_link_ready = 0;
 VAR_6->link_enabled = 0;
 FUNC_2(VAR_5, (VAR_3 << 8) |
    VAR_4);




 FUNC_0(VAR_5);
}
