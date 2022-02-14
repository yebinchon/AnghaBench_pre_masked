
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,char const*,void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (char const*,char const*,void*) ;
 int FUNC_5 (char const*,char const*,int *) ;
 int FUNC_6 (char const*) ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 char* VAR_12 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*) ;
 void* VAR_13 ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_14, const char *VAR_15, void *VAR_16)
{
 int VAR_17;

 if (VAR_3 && FUNC_7(VAR_14, "branch.") &&
  FUNC_7(VAR_14 + 7, VAR_3) &&
  !FUNC_8(VAR_14 + 7 + FUNC_9(VAR_3), ".mergeoptions")) {
  FUNC_1(VAR_4);
  VAR_4 = FUNC_10(VAR_15);
  return 0;
 }

 if (!FUNC_8(VAR_14, "merge.diffstat") || !FUNC_8(VAR_14, "merge.stat"))
  VAR_11 = FUNC_2(VAR_14, VAR_15);
 else if (!FUNC_8(VAR_14, "merge.verifysignatures"))
  VAR_13 = FUNC_2(VAR_14, VAR_15);
 else if (!FUNC_8(VAR_14, "pull.twohead"))
  return FUNC_3(&VAR_10, VAR_14, VAR_15);
 else if (!FUNC_8(VAR_14, "pull.octopus"))
  return FUNC_3(&VAR_9, VAR_14, VAR_15);
 else if (!FUNC_8(VAR_14, "commit.cleanup"))
  return FUNC_3(&VAR_5, VAR_14, VAR_15);
 else if (!FUNC_8(VAR_14, "merge.renormalize"))
  VAR_8 = FUNC_2(VAR_14, VAR_15);
 else if (!FUNC_8(VAR_14, "merge.ff")) {
  int VAR_18 = FUNC_6(VAR_15);
  if (0 <= VAR_18) {
   VAR_7 = VAR_18 ? VAR_0 : VAR_1;
  } else if (VAR_15 && !FUNC_8(VAR_15, "only")) {
   VAR_7 = VAR_2;
  }
  return 0;
 } else if (!FUNC_8(VAR_14, "merge.defaulttoupstream")) {
  VAR_6 = FUNC_2(VAR_14, VAR_15);
  return 0;
 } else if (!FUNC_8(VAR_14, "commit.gpgsign")) {
  VAR_12 = FUNC_2(VAR_14, VAR_15) ? "" : ((void*)0);
  return 0;
 }

 VAR_17 = FUNC_0(VAR_14, VAR_15, VAR_16);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_5(VAR_14, VAR_15, ((void*)0));
 if (VAR_17)
  return VAR_17;
 return FUNC_4(VAR_14, VAR_15, VAR_16);
}
