
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dc_shutdown; int dc8051_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hfi1_devdata *VAR_1)
{
 FUNC_1(&VAR_1->dc8051_lock);

 if (VAR_1->dc_shutdown)
  return;

 VAR_1->dc_shutdown = 1;

 FUNC_0(VAR_1, 1);





 FUNC_2(VAR_1, VAR_0, 0x1);
}
