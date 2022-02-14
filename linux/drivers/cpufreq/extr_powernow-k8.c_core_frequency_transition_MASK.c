
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct powernow_k8_data {int currvid; int currfid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ FUNC_3 (struct powernow_k8_data*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct powernow_k8_data*,int) ;

__attribute__((used)) static int FUNC_6(struct powernow_k8_data *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 u32 VAR_6, VAR_7 = VAR_1->currvid;

 if (VAR_1->currfid == VAR_2) {
  FUNC_2("ph2 null fid transition 0x%x\n", VAR_1->currfid);
  return 0;
 }

 FUNC_1("ph2 (cpu%d): starting, currfid 0x%x, currvid 0x%x, reqfid 0x%x\n",
  FUNC_4(),
  VAR_1->currfid, VAR_1->currvid, VAR_2);

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_0(VAR_1->currfid);
 VAR_5 = VAR_4 > VAR_3 ? VAR_4 - VAR_3
     : VAR_3 - VAR_4;

 if ((VAR_2 <= VAR_0) && (VAR_1->currfid <= VAR_0))
  VAR_5 = 0;

 while (VAR_5 > 2) {
  (VAR_1->currfid & 1) ? (VAR_6 = 1) : (VAR_6 = 2);

  if (VAR_2 > VAR_1->currfid) {
   if (VAR_1->currfid > VAR_0) {
    if (FUNC_5(VAR_1,
      VAR_1->currfid + VAR_6))
     return 1;
   } else {
    if (FUNC_5
        (VAR_1,
         2 + FUNC_0(VAR_1->currfid)))
     return 1;
   }
  } else {
   if (FUNC_5(VAR_1, VAR_1->currfid - VAR_6))
    return 1;
  }

  VAR_4 = FUNC_0(VAR_1->currfid);
  VAR_5 = VAR_4 > VAR_3 ? VAR_4 - VAR_3
      : VAR_3 - VAR_4;
 }

 if (FUNC_5(VAR_1, VAR_2))
  return 1;

 if (FUNC_3(VAR_1))
  return 1;

 if (VAR_1->currfid != VAR_2) {
  FUNC_2("ph2: mismatch, failed fid transition, curr 0x%x, req 0x%x\n",
   VAR_1->currfid, VAR_2);
  return 1;
 }

 if (VAR_7 != VAR_1->currvid) {
  FUNC_2("ph2: vid changed, save 0x%x, curr 0x%x\n",
   VAR_7, VAR_1->currvid);
  return 1;
 }

 FUNC_1("ph2 complete, currfid 0x%x, currvid 0x%x\n",
  VAR_1->currfid, VAR_1->currvid);

 return 0;
}
