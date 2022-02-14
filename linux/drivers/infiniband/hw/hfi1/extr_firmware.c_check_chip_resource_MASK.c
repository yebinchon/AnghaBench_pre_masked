
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*,char const*,int ,int) ;
 int FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (int ,int) ;

bool FUNC_3(struct hfi1_devdata *VAR_2, u32 VAR_3,
    const char *VAR_4)
{
 u64 VAR_5, VAR_6;

 if (VAR_3 & VAR_1)
  VAR_6 = FUNC_2(VAR_2->hfi1_id, VAR_3);
 else
  VAR_6 = VAR_3;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if ((VAR_5 & VAR_6) == 0) {
  if (VAR_4)
   FUNC_0(VAR_2,
        "%s: id %d, resource 0x%x, not acquired!\n",
        VAR_4, VAR_2->hfi1_id, VAR_3);
  return 0;
 }
 return 1;
}
