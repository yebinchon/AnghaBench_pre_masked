
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 char* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;
 char* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 char* VAR_28 ;
 char* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 char* VAR_37 ;
 char* VAR_38 ;
 scalar_t__ FUNC_0 (char*,int) ;
 char*** VAR_39 ;
 char** VAR_40 ;
 int FUNC_1 (char**,char**,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char**) ;
 char** VAR_41 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,char*,...) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ,int) ;
 int VAR_42 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(char *VAR_43)
{
 char **VAR_44, ***VAR_45, *VAR_46, *VAR_47;
 int VAR_48;

 VAR_47 = FUNC_9("REMOTE");
 if (VAR_47 != ((void*)0)) {
  if (*VAR_47 != '/')

   FUNC_4(VAR_47);
  else {
   VAR_41[1] = VAR_47;
   VAR_41[2] = VAR_37;
  }
 }

 if ((VAR_48 = FUNC_1(&VAR_46, VAR_41, VAR_43)) < 0) {
  if ((VAR_10 != ((void*)0)) ||
      (VAR_43[0] == '/' && FUNC_0(VAR_10 = VAR_43, VAR_30 | VAR_36) == 0)) {
   VAR_4 = VAR_10;
   VAR_20 = VAR_43;
   VAR_21 = 1;
   VAR_9 = 0;
   if (!VAR_2)
    VAR_2 = VAR_6;
   VAR_16 = VAR_7;
   return;
  }
  switch (VAR_48) {
  case -1:
   FUNC_8(VAR_42, "%s: unknown host %s\n", VAR_38,
       VAR_43);
   break;
  case -2:
   FUNC_8(VAR_42,
       "%s: can't open host description file\n",
       VAR_38);
   break;
  case -3:
   FUNC_8(VAR_42,
       "%s: possible reference loop in host description file\n", VAR_38);
   break;
  }
  FUNC_7(3);
 }

 for (VAR_44 = VAR_40, VAR_45 = VAR_39; *VAR_44 != ((void*)0); VAR_44++, VAR_45++)
  if (**VAR_45 == ((void*)0))
   FUNC_5(VAR_46, *VAR_44, *VAR_45);
 if (!VAR_2 && (FUNC_3(VAR_46, "br", &VAR_2) == -1))
  VAR_2 = VAR_6;
 if (!VAR_22 && (FUNC_3(VAR_46, "ld", &VAR_22) == -1))
  VAR_22 = VAR_34;
 if (FUNC_3(VAR_46, "fs", &VAR_16) == -1)
  VAR_16 = VAR_7;
 if (VAR_9 < 0)
  VAR_9 = 0;
 else
  VAR_9 = FUNC_2("du");
 if (VAR_10 == VAR_23) {
  FUNC_8(VAR_42, "%s: missing device spec\n", VAR_43);
  FUNC_7(3);
 }
 if (VAR_9 && VAR_4 == VAR_23)
  VAR_4 = VAR_10;
 if (VAR_9 && VAR_24 == VAR_23) {
  FUNC_8(VAR_42, "%s: missing phone number\n", VAR_43);
  FUNC_7(3);
 }
 if (VAR_9 && VAR_0 == VAR_23) {
  FUNC_8(VAR_42, "%s: missing acu type\n", VAR_43);
  FUNC_7(3);
 }

 VAR_19 = FUNC_2("hd");





 if (!VAR_21)
  VAR_21 = (VAR_4 == VAR_23) || (VAR_9 && FUNC_6(VAR_10, VAR_4));
 VAR_20 = VAR_43;



 if (FUNC_2("ra"))
  FUNC_10(FUNC_11(VAR_26), 1);
 if (FUNC_2("ec"))
  FUNC_10(FUNC_11(VAR_11), 1);
 if (FUNC_2("be"))
  FUNC_10(FUNC_11(VAR_1), 1);
 if (FUNC_2("nb"))
  FUNC_10(FUNC_11(VAR_1), 0);
 if (FUNC_2("sc"))
  FUNC_10(FUNC_11(VAR_31), 1);
 if (FUNC_2("tb"))
  FUNC_10(FUNC_11(VAR_32), 1);
 if (FUNC_2("vb"))
  FUNC_10(FUNC_11(VAR_35), 1);
 if (FUNC_2("nv"))
  FUNC_10(FUNC_11(VAR_35), 0);
 if (FUNC_2("ta"))
  FUNC_10(FUNC_11(VAR_33), 1);
 if (FUNC_2("nt"))
  FUNC_10(FUNC_11(VAR_33), 0);
 if (FUNC_2("rw"))
  FUNC_10(FUNC_11(VAR_27), 1);
 if (FUNC_2("hd"))
  FUNC_10(FUNC_11(VAR_17), 1);
 if (FUNC_2("dc"))
  FUNC_10(FUNC_11(VAR_5), 1);
 if (FUNC_2("hf"))
  FUNC_10(FUNC_11(VAR_18), 1);
 if (VAR_29 == VAR_23)
  VAR_29 = (char *)"tip.record";
 if (VAR_14 == VAR_23)
  VAR_14 = (char *)"\t\n\b\f";
 if (VAR_12 != VAR_23)
  FUNC_12("es", VAR_12);
 if (VAR_15 != VAR_23)
  FUNC_12("fo", VAR_15);
 if (VAR_25 != VAR_23)
  FUNC_12("pr", VAR_25);
 if (VAR_28 != VAR_23)
  FUNC_12("rc", VAR_28);
 if (FUNC_3(VAR_46, "dl", &VAR_8) == -1)
  VAR_8 = 0;
 if (FUNC_3(VAR_46, "cl", &VAR_3) == -1)
  VAR_3 = 0;
 if (FUNC_3(VAR_46, "et", &VAR_13) == -1)
  VAR_13 = 10;
}
