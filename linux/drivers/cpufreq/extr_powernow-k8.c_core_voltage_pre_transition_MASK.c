
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct powernow_k8_data {scalar_t__ rvo; scalar_t__ currfid; scalar_t__ currvid; int vidmvs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct powernow_k8_data*,int,int) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct powernow_k8_data*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct powernow_k8_data *VAR_2,
  u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_2->rvo;
 u32 VAR_6 = VAR_2->currfid;
 u32 VAR_7, VAR_8, VAR_9 = 1;

 FUNC_1("ph1 (cpu%d): start, currfid 0x%x, currvid 0x%x, reqvid 0x%x, rvo 0x%x\n",
  FUNC_5(),
  VAR_2->currfid, VAR_2->currvid, VAR_3, VAR_2->rvo);

 if ((VAR_6 < VAR_0) && (VAR_4 < VAR_0))
  VAR_9 = 2;
 VAR_5 *= VAR_9;
 FUNC_4(VAR_1, VAR_8, VAR_7);
 VAR_7 = 0x1f & (VAR_7 >> 16);
 FUNC_1("ph1 maxvid=0x%x\n", VAR_7);
 if (VAR_3 < VAR_7)
  VAR_3 = VAR_7;

 while (VAR_2->currvid > VAR_3) {
  FUNC_1("ph1: curr 0x%x, req vid 0x%x\n",
   VAR_2->currvid, VAR_3);
  if (FUNC_0(VAR_2, VAR_3, VAR_2->vidmvs))
   return 1;
 }

 while ((VAR_5 > 0) &&
   ((VAR_9 * VAR_2->rvo + VAR_2->currvid) > VAR_3)) {
  if (VAR_2->currvid == VAR_7) {
   VAR_5 = 0;
  } else {
   FUNC_1("ph1: changing vid for rvo, req 0x%x\n",
    VAR_2->currvid - 1);
   if (FUNC_0(VAR_2, VAR_2->currvid-1, 1))
    return 1;
   VAR_5--;
  }
 }

 if (FUNC_3(VAR_2))
  return 1;

 if (VAR_6 != VAR_2->currfid) {
  FUNC_2("ph1 err, currfid changed 0x%x\n", VAR_2->currfid);
  return 1;
 }

 FUNC_1("ph1 complete, currfid 0x%x, currvid 0x%x\n",
  VAR_2->currfid, VAR_2->currvid);

 return 0;
}
