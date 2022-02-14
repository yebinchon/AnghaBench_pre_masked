
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct powernow_k8_data {scalar_t__ currfid; scalar_t__ currvid; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct powernow_k8_data*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct powernow_k8_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct powernow_k8_data *VAR_0,
  u32 VAR_1)
{
 u32 VAR_2 = VAR_0->currfid;
 u32 VAR_3 = VAR_1;

 FUNC_0("ph3 (cpu%d): starting, currfid 0x%x, currvid 0x%x\n",
  FUNC_3(),
  VAR_0->currfid, VAR_0->currvid);

 if (VAR_1 != VAR_0->currvid) {
  if (FUNC_4(VAR_0, VAR_1))
   return 1;

  if (VAR_2 != VAR_0->currfid) {
   FUNC_1("ph3: bad fid change, save 0x%x, curr 0x%x\n",
    VAR_2, VAR_0->currfid);
   return 1;
  }

  if (VAR_0->currvid != VAR_1) {
   FUNC_1("ph3: failed vid transition\n, req 0x%x, curr 0x%x",
    VAR_1, VAR_0->currvid);
   return 1;
  }
 }

 if (FUNC_2(VAR_0))
  return 1;

 if (VAR_3 != VAR_0->currvid) {
  FUNC_0("ph3 failed, currvid 0x%x\n", VAR_0->currvid);
  return 1;
 }

 if (VAR_2 != VAR_0->currfid) {
  FUNC_0("ph3 failed, currfid changed 0x%x\n",
   VAR_0->currfid);
  return 1;
 }

 FUNC_0("ph3 complete, currfid 0x%x, currvid 0x%x\n",
  VAR_0->currfid, VAR_0->currvid);

 return 0;
}
