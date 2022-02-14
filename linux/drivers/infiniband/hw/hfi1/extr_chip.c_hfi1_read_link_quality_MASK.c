
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hfi1_devdata {TYPE_1__* pport; } ;
struct TYPE_2__ {int host_link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ,int*) ;

void FUNC_1(struct hfi1_devdata *VAR_5, u8 *VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 *VAR_6 = 0;
 if (VAR_5->pport->host_link_state & VAR_1) {
  VAR_8 = FUNC_0(VAR_5, VAR_2, VAR_0,
           &VAR_7);
  if (VAR_8 == 0)
   *VAR_6 = (VAR_7 >> VAR_4)
      & VAR_3;
 }
}
