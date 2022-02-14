
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_pportdata {int host_link_state; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int *) ;

int FUNC_3(struct hfi1_devdata *VAR_4, u32 VAR_5, u64 *VAR_6)
{
 struct hfi1_pportdata *VAR_7 = VAR_4->pport;


 if (VAR_7->host_link_state & VAR_3)
  return FUNC_2(VAR_4, VAR_5, VAR_6);

 if (VAR_7->host_link_state & (VAR_2 | VAR_1)) {
  if (FUNC_1(VAR_5, VAR_6))
   return -VAR_0;
  return 0;
 }


 *VAR_6 = FUNC_0(VAR_4, VAR_5);
 return 0;
}
