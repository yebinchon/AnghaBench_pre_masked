
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (char const*) ;
 void* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const**,char const*,char const*) ;
 int FUNC_5 (char const*,char const*,void*) ;
 scalar_t__ FUNC_6 (char const*,char const*,void*) ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,int *) ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char const*) ;
 int FUNC_13 (int ,...) ;

__attribute__((used)) static int FUNC_14(const char *VAR_11, const char *VAR_12, void *VAR_13)
{
 if (!FUNC_9(VAR_11, "blame.showroot")) {
  VAR_10 = FUNC_3(VAR_11, VAR_12);
  return 0;
 }
 if (!FUNC_9(VAR_11, "blame.blankboundary")) {
  VAR_4 = FUNC_3(VAR_11, VAR_12);
  return 0;
 }
 if (!FUNC_9(VAR_11, "blame.showemail")) {
  int *VAR_14 = VAR_13;
  if (FUNC_3(VAR_11, VAR_12))
   *VAR_14 |= VAR_2;
  else
   *VAR_14 &= ~VAR_2;
  return 0;
 }
 if (!FUNC_9(VAR_11, "blame.date")) {
  if (!VAR_12)
   return FUNC_2(VAR_11);
  FUNC_8(VAR_12, &VAR_3);
  return 0;
 }
 if (!FUNC_9(VAR_11, "blame.ignorerevsfile")) {
  const char *VAR_15;
  int VAR_16;

  VAR_16 = FUNC_4(&VAR_15, VAR_11, VAR_12);
  if (VAR_16)
   return VAR_16;
  FUNC_10(&VAR_6, VAR_15);
  return 0;
 }
 if (!FUNC_9(VAR_11, "blame.markunblamablelines")) {
  VAR_8 = FUNC_3(VAR_11, VAR_12);
  return 0;
 }
 if (!FUNC_9(VAR_11, "blame.markignoredlines")) {
  VAR_7 = FUNC_3(VAR_11, VAR_12);
  return 0;
 }
 if (!FUNC_9(VAR_11, "color.blame.repeatedlines")) {
  if (FUNC_1(VAR_12, FUNC_11(VAR_12), VAR_9))
   FUNC_13(FUNC_0("invalid color '%s' in color.blame.repeatedLines"),
    VAR_12);
  return 0;
 }
 if (!FUNC_9(VAR_11, "color.blame.highlightrecent")) {
  FUNC_7(VAR_12);
  return 0;
 }

 if (!FUNC_9(VAR_11, "blame.coloring")) {
  if (!FUNC_9(VAR_12, "repeatedLines")) {
   VAR_5 |= VAR_0;
  } else if (!FUNC_9(VAR_12, "highlightRecent")) {
   VAR_5 |= VAR_1;
  } else if (!FUNC_9(VAR_12, "none")) {
   VAR_5 &= ~(VAR_0 |
         VAR_1);
  } else {
   FUNC_13(FUNC_0("invalid value for blame.coloring"));
   return 0;
  }
 }

 if (FUNC_6(VAR_11, VAR_12, VAR_13) < 0)
  return -1;
 if (FUNC_12(VAR_11, VAR_12) < 0)
  return -1;

 return FUNC_5(VAR_11, VAR_12, VAR_13);
}
