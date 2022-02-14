
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct powernow_k8_data {scalar_t__ currfid; scalar_t__ currvid; } ;


 scalar_t__ FUNC_0 (struct powernow_k8_data*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct powernow_k8_data*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct powernow_k8_data*,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct powernow_k8_data*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct powernow_k8_data *VAR_0,
  u32 VAR_1, u32 VAR_2)
{
 if (FUNC_2(VAR_0, VAR_2, VAR_1))
  return 1;

 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 if (FUNC_1(VAR_0, VAR_2))
  return 1;

 if (FUNC_5(VAR_0))
  return 1;

 if ((VAR_1 != VAR_0->currfid) || (VAR_2 != VAR_0->currvid)) {
  FUNC_4("failed (cpu%d): req 0x%x 0x%x, curr 0x%x 0x%x\n",
    FUNC_6(),
    VAR_1, VAR_2, VAR_0->currfid, VAR_0->currvid);
  return 1;
 }

 FUNC_3("transitioned (cpu%d): new fid 0x%x, vid 0x%x\n",
  FUNC_6(), VAR_0->currfid, VAR_0->currvid);

 return 0;
}
