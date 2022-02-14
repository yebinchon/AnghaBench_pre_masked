
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int use_default_notes; int extra_notes_refs; } ;
struct rev_info {int show_notes; TYPE_1__ notes_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char const*) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (int ) ;
 void* VAR_14 ;
 int FUNC_4 (struct strbuf*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int *) ;
 int * VAR_18 ;
 char const* FUNC_6 (int ) ;
 void* FUNC_7 (char const*,char const*) ;
 int FUNC_8 (int *,char const*,char const*) ;
 int FUNC_9 (int *,char const*,char const*) ;
 int FUNC_10 (char const*,char const*,void*) ;
 int FUNC_11 (char const*) ;
 char const* VAR_19 ;
 void* VAR_20 ;
 int FUNC_12 (char const*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_13 (struct strbuf*,char const*) ;
 char const* FUNC_14 (struct strbuf*,int *) ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (int *,char const*) ;
 int VAR_23 ;
 void* FUNC_18 (char const*) ;

__attribute__((used)) static int FUNC_19(const char *VAR_24, const char *VAR_25, void *VAR_26)
{
 struct rev_info *VAR_27 = VAR_26;

 if (!FUNC_16(VAR_24, "format.headers")) {
  if (!VAR_25)
   FUNC_3(FUNC_0("format.headers without value"));
  FUNC_1(VAR_25);
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.suffix"))
  return FUNC_9(&VAR_17, VAR_24, VAR_25);
 if (!FUNC_16(VAR_24, "format.to")) {
  if (!VAR_25)
   return FUNC_2(VAR_24);
  FUNC_17(&VAR_16, VAR_25);
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.cc")) {
  if (!VAR_25)
   return FUNC_2(VAR_24);
  FUNC_17(&VAR_15, VAR_25);
  return 0;
 }
 if (!FUNC_16(VAR_24, "diff.color") || !FUNC_16(VAR_24, "color.diff") ||
     !FUNC_16(VAR_24, "color.ui") || !FUNC_16(VAR_24, "diff.submodule")) {
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.numbered")) {
  if (VAR_25 && !FUNC_15(VAR_25, "auto")) {
   VAR_8 = 1;
   return 0;
  }
  VAR_20 = FUNC_7(VAR_24, VAR_25);
  VAR_8 = VAR_8 && VAR_20;
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.attach")) {
  if (VAR_25 && *VAR_25)
   VAR_13 = FUNC_18(VAR_25);
  else
   VAR_13 = FUNC_18(VAR_19);
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.thread")) {
  if (VAR_25 && !FUNC_15(VAR_25, "deep")) {
   VAR_23 = VAR_5;
   return 0;
  }
  if (VAR_25 && !FUNC_15(VAR_25, "shallow")) {
   VAR_23 = VAR_6;
   return 0;
  }
  VAR_23 = FUNC_7(VAR_24, VAR_25) ? VAR_6 : VAR_7;
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.signoff")) {
  VAR_14 = FUNC_7(VAR_24, VAR_25);
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.signature"))
  return FUNC_9(&VAR_21, VAR_24, VAR_25);
 if (!FUNC_16(VAR_24, "format.signaturefile"))
  return FUNC_8(&VAR_22, VAR_24, VAR_25);
 if (!FUNC_16(VAR_24, "format.coverletter")) {
  if (VAR_25 && !FUNC_15(VAR_25, "auto")) {
   VAR_10 = VAR_0;
   return 0;
  }
  VAR_10 = FUNC_7(VAR_24, VAR_25) ? VAR_2 : VAR_1;
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.outputdirectory"))
  return FUNC_9(&VAR_11, VAR_24, VAR_25);
 if (!FUNC_16(VAR_24, "format.useautobase")) {
  VAR_9 = FUNC_7(VAR_24, VAR_25);
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.from")) {
  int VAR_28 = FUNC_11(VAR_25);
  FUNC_5(VAR_18);
  if (VAR_28 < 0)
   VAR_18 = FUNC_18(VAR_25);
  else if (VAR_28)
   VAR_18 = FUNC_18(FUNC_6(VAR_3));
  else
   VAR_18 = ((void*)0);
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.notes")) {
  struct strbuf VAR_29 = VAR_4;
  int VAR_30 = FUNC_11(VAR_25);
  if (!VAR_30)
   return 0;
  VAR_27->show_notes = 1;
  if (VAR_30 < 0) {
   FUNC_13(&VAR_29, VAR_25);
   FUNC_4(&VAR_29);
   FUNC_17(&VAR_27->notes_opt.extra_notes_refs,
     FUNC_14(&VAR_29, ((void*)0)));
  } else {
   VAR_27->notes_opt.use_default_notes = 1;
  }
  return 0;
 }
 if (!FUNC_16(VAR_24, "format.coverfromdescription")) {
  VAR_12 = FUNC_12(VAR_25);
  return 0;
 }

 return FUNC_10(VAR_24, VAR_25, VAR_26);
}
