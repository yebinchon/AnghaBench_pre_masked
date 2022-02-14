
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct powernow_k8_data {int currvid; int currfid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct powernow_k8_data *VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 VAR_7 = 0;

 do {
  if (VAR_7++ > 10000) {
   FUNC_0("detected change pending stuck\n");
   return 1;
  }
  FUNC_1(VAR_0, VAR_5, VAR_6);
 } while (VAR_5 & VAR_2);

 VAR_4->currvid = VAR_6 & VAR_1;
 VAR_4->currfid = VAR_5 & VAR_3;

 return 0;
}
