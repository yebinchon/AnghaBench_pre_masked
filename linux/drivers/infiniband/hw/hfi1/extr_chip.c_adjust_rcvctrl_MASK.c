
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int rcvctrl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_1, u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_1->rcvctrl_lock, VAR_5);
 VAR_4 = FUNC_0(VAR_1, VAR_0);
 VAR_4 |= VAR_2;
 VAR_4 &= ~VAR_3;
 FUNC_3(VAR_1, VAR_0, VAR_4);
 FUNC_2(&VAR_1->rcvctrl_lock, VAR_5);
}
