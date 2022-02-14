
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct powernow_k8_data {int currvid; int plllock; int currfid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct powernow_k8_data*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct powernow_k8_data*) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct powernow_k8_data *VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = VAR_6->currvid;
 u32 VAR_10 = 0;

 if ((VAR_7 & VAR_0) || (VAR_6->currvid & VAR_1)) {
  FUNC_2("internal error - overflow on fid write\n");
  return 1;
 }

 VAR_8 = VAR_7;
 VAR_8 |= (VAR_6->currvid << VAR_3);
 VAR_8 |= VAR_2;

 FUNC_1("writing fid 0x%x, lo 0x%x, hi 0x%x\n",
  VAR_7, VAR_8, VAR_6->plllock * VAR_5);

 do {
  FUNC_4(VAR_4, VAR_8, VAR_6->plllock * VAR_5);
  if (VAR_10++ > 100) {
   FUNC_2("Hardware error - pending bit very stuck - no further pstate changes possible\n");
   return 1;
  }
 } while (FUNC_3(VAR_6));

 FUNC_0(VAR_6);

 if (VAR_9 != VAR_6->currvid) {
  FUNC_2("vid change on fid trans, old 0x%x, new 0x%x\n",
         VAR_9, VAR_6->currvid);
  return 1;
 }

 if (VAR_7 != VAR_6->currfid) {
  FUNC_2("fid trans failed, fid 0x%x, curr 0x%x\n", VAR_7,
   VAR_6->currfid);
  return 1;
 }

 return 0;
}
