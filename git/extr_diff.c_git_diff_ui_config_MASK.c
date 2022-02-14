
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (char const*,char const*,void*) ;
 void* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 void* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (char const*,char const*,void*) ;
 int FUNC_9 (int *,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;
 unsigned int FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (int *,char const*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (int ,char const*) ;
 int VAR_16 ;

int FUNC_17(const char *VAR_17, const char *VAR_18, void *VAR_19)
{
 if (!FUNC_15(VAR_17, "diff.color") || !FUNC_15(VAR_17, "color.diff")) {
  VAR_13 = FUNC_3(VAR_17, VAR_18);
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.colormoved")) {
  int VAR_20 = FUNC_11(VAR_18);
  if (VAR_20 < 0)
   return -1;
  VAR_4 = VAR_20;
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.colormovedws")) {
  unsigned VAR_21 = FUNC_12(VAR_18);
  if (VAR_21 & VAR_0)
   return -1;
  VAR_5 = VAR_21;
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.context")) {
  VAR_6 = FUNC_4(VAR_17, VAR_18);
  if (VAR_6 < 0)
   return -1;
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.interhunkcontext")) {
  VAR_8 = FUNC_4(VAR_17, VAR_18);
  if (VAR_8 < 0)
   return -1;
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.renames")) {
  VAR_7 = FUNC_6(VAR_17, VAR_18);
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.autorefreshindex")) {
  VAR_3 = FUNC_2(VAR_17, VAR_18);
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.mnemonicprefix")) {
  VAR_9 = FUNC_2(VAR_17, VAR_18);
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.noprefix")) {
  VAR_10 = FUNC_2(VAR_17, VAR_18);
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.statgraphwidth")) {
  VAR_12 = FUNC_4(VAR_17, VAR_18);
  return 0;
 }
 if (!FUNC_15(VAR_17, "diff.external"))
  return FUNC_7(&VAR_15, VAR_17, VAR_18);
 if (!FUNC_15(VAR_17, "diff.wordregex"))
  return FUNC_7(&VAR_14, VAR_17, VAR_18);
 if (!FUNC_15(VAR_17, "diff.orderfile"))
  return FUNC_5(&VAR_11, VAR_17, VAR_18);

 if (!FUNC_15(VAR_17, "diff.ignoresubmodules"))
  FUNC_9(&VAR_1, VAR_18);

 if (!FUNC_15(VAR_17, "diff.submodule")) {
  if (FUNC_13(&VAR_1, VAR_18))
   FUNC_16(FUNC_0("Unknown value for 'diff.submodule' config variable: '%s'"),
    VAR_18);
  return 0;
 }

 if (!FUNC_15(VAR_17, "diff.algorithm")) {
  VAR_2 = FUNC_10(VAR_18);
  if (VAR_2 < 0)
   return -1;
  return 0;
 }

 if (!FUNC_15(VAR_17, "diff.wserrorhighlight")) {
  int VAR_22 = FUNC_14(VAR_18);
  if (VAR_22 < 0)
   return -1;
  VAR_16 = VAR_22;
  return 0;
 }

 if (FUNC_1(VAR_17, VAR_18, VAR_19) < 0)
  return -1;

 return FUNC_8(VAR_17, VAR_18, VAR_19);
}
