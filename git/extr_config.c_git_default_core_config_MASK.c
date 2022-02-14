
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hexsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 char VAR_21 ;
 int FUNC_1 (char const*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int FUNC_2 (int ,...) ;
 int VAR_29 ;
 int FUNC_3 (int ,...) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_4 () ;
 int VAR_32 ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (int *,char const*,char const*) ;
 void* FUNC_9 (char const*,char const*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 void* VAR_44 ;
 int VAR_45 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*,char const*,void*) ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_12 (char const*,char const*) ;
 int FUNC_13 (char const*,char*) ;
 int FUNC_14 (char const*,char*) ;
 TYPE_1__* VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 void* FUNC_15 (char const*) ;
 int VAR_57 ;
 int VAR_58 ;

__attribute__((used)) static int FUNC_16(const char *VAR_59, const char *VAR_60, void *VAR_61)
{

 if (!FUNC_14(VAR_59, "core.filemode")) {
  VAR_54 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }
 if (!FUNC_14(VAR_59, "core.trustctime")) {
  VAR_53 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }
 if (!FUNC_14(VAR_59, "core.checkstat")) {
  if (!FUNC_13(VAR_60, "default"))
   VAR_20 = 1;
  else if (!FUNC_13(VAR_60, "minimal"))
   VAR_20 = 0;
 }

 if (!FUNC_14(VAR_59, "core.quotepath")) {
  VAR_50 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.symlinks")) {
  VAR_35 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.ignorecase")) {
  VAR_36 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.attributesfile"))
  return FUNC_7(&VAR_32, VAR_59, VAR_60);

 if (!FUNC_14(VAR_59, "core.hookspath"))
  return FUNC_7(&VAR_33, VAR_59, VAR_60);

 if (!FUNC_14(VAR_59, "core.bare")) {
  VAR_37 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.ignorestat")) {
  VAR_15 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.prefersymlinkrefs")) {
  VAR_47 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.logallrefupdates")) {
  if (VAR_60 && !FUNC_13(VAR_60, "always"))
   VAR_38 = VAR_7;
  else if (FUNC_5(VAR_59, VAR_60))
   VAR_38 = VAR_9;
  else
   VAR_38 = VAR_8;
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.warnambiguousrefs")) {
  VAR_55 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.abbrev")) {
  if (!VAR_60)
   return FUNC_1(VAR_59);
  if (!FUNC_13(VAR_60, "auto"))
   VAR_27 = -1;
  else {
   int VAR_62 = FUNC_6(VAR_59, VAR_60);
   if (VAR_62 < VAR_39 || VAR_62 > VAR_52->hexsz)
    return FUNC_3(FUNC_0("abbrev length out of range: %d"), VAR_62);
   VAR_27 = VAR_62;
  }
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.disambiguate"))
  return FUNC_12(VAR_59, VAR_60);

 if (!FUNC_14(VAR_59, "core.loosecompression")) {
  int VAR_63 = FUNC_6(VAR_59, VAR_60);
  if (VAR_63 == -1)
   VAR_63 = VAR_13;
  else if (VAR_63 < 0 || VAR_63 > VAR_12)
   FUNC_2(FUNC_0("bad zlib compression level %d"), VAR_63);
  VAR_57 = VAR_63;
  VAR_58 = 1;
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.compression")) {
  int VAR_64 = FUNC_6(VAR_59, VAR_60);
  if (VAR_64 == -1)
   VAR_64 = VAR_13;
  else if (VAR_64 < 0 || VAR_64 > VAR_12)
   FUNC_2(FUNC_0("bad zlib compression level %d"), VAR_64);
  VAR_23 = VAR_64;
  VAR_24 = 1;
  if (!VAR_58)
   VAR_57 = VAR_64;
  if (!VAR_43)
   VAR_42 = VAR_64;
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.packedgitwindowsize")) {
  int VAR_65 = FUNC_4() * 2;
  VAR_45 = FUNC_9(VAR_59, VAR_60);


  VAR_45 /= VAR_65;
  if (VAR_45 < 1)
   VAR_45 = 1;
  VAR_45 *= VAR_65;
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.bigfilethreshold")) {
  VAR_18 = FUNC_9(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.packedgitlimit")) {
  VAR_44 = FUNC_9(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.deltabasecachelimit")) {
  VAR_28 = FUNC_9(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.autocrlf")) {
  if (VAR_60 && !FUNC_13(VAR_60, "input")) {
   VAR_17 = VAR_0;
   return 0;
  }
  VAR_17 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.safecrlf")) {
  int VAR_66;
  if (VAR_60 && !FUNC_13(VAR_60, "warn")) {
   VAR_34 = VAR_2;
   return 0;
  }
  VAR_66 = FUNC_5(VAR_59, VAR_60);
  VAR_34 = VAR_66 ?
   VAR_1 : 0;
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.eol")) {
  if (VAR_60 && !FUNC_13(VAR_60, "lf"))
   VAR_25 = VAR_4;
  else if (VAR_60 && !FUNC_13(VAR_60, "crlf"))
   VAR_25 = VAR_3;
  else if (VAR_60 && !FUNC_13(VAR_60, "native"))
   VAR_25 = VAR_5;
  else
   VAR_25 = VAR_6;
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.checkroundtripencoding")) {
  VAR_19 = FUNC_15(VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.notesref")) {
  VAR_40 = FUNC_15(VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.editor"))
  return FUNC_8(&VAR_29, VAR_59, VAR_60);

 if (!FUNC_14(VAR_59, "core.commentchar")) {
  if (!VAR_60)
   return FUNC_1(VAR_59);
  else if (!FUNC_13(VAR_60, "auto"))
   VAR_16 = 1;
  else if (VAR_60[0] && !VAR_60[1]) {
   VAR_21 = VAR_60[0];
   VAR_16 = 0;
  } else
   return FUNC_3(FUNC_0("core.commentChar should only be one character"));
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.askpass"))
  return FUNC_8(&VAR_14, VAR_59, VAR_60);

 if (!FUNC_14(VAR_59, "core.excludesfile"))
  return FUNC_7(&VAR_30, VAR_59, VAR_60);

 if (!FUNC_14(VAR_59, "core.whitespace")) {
  if (!VAR_60)
   return FUNC_1(VAR_59);
  VAR_56 = FUNC_10(VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.fsyncobjectfiles")) {
  VAR_31 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.preloadindex")) {
  VAR_26 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.createobject")) {
  if (!FUNC_14(VAR_60, "rename"))
   VAR_41 = VAR_11;
  else if (!FUNC_14(VAR_60, "link"))
   VAR_41 = VAR_10;
  else
   FUNC_2(FUNC_0("invalid mode for object creation: %s"), VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.sparsecheckout")) {
  VAR_22 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.precomposeunicode")) {
  VAR_46 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.protecthfs")) {
  VAR_48 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.protectntfs")) {
  VAR_49 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }

 if (!FUNC_14(VAR_59, "core.usereplacerefs")) {
  VAR_51 = FUNC_5(VAR_59, VAR_60);
  return 0;
 }


 return FUNC_11(VAR_59, VAR_60, VAR_61);
}
