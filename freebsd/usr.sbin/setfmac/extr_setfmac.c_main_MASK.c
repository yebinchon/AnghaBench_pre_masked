
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct label_specs {int dummy; } ;
struct TYPE_5__ {int fts_info; char* fts_path; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct label_specs*,char*) ;
 int FUNC_1 (struct label_specs*,int ,int) ;
 int FUNC_2 (struct label_specs*,TYPE_1__*,int,int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char**,int,int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*,int ) ;
 int FUNC_11 (int,char**,char*) ;
 struct label_specs* FUNC_12 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (struct label_specs*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,char*) ;

int
FUNC_17(int VAR_7, char **VAR_8)
{
 FTSENT *VAR_9;
 FTS *VAR_10;
 struct label_specs *VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16;
 int VAR_17, VAR_18;
 char *VAR_19;

 VAR_19 = FUNC_3(VAR_8[0]);
 if (VAR_19 == ((void*)0))
  FUNC_4(1, "basename");
 VAR_18 = FUNC_14(VAR_19, "setfmac") == 0;
 VAR_16 = VAR_18 ? VAR_0 : VAR_1;
 VAR_11 = FUNC_12();
 while ((VAR_17 = FUNC_11(VAR_7, VAR_8, VAR_18 ? "Rhq" : "ef:qs:vx")) !=
     -1) {
  switch (VAR_17) {
  case 'R':
   VAR_15 = 1;
   break;
  case 'e':
   VAR_12 = 1;
   break;
  case 'f':
   FUNC_1(VAR_11, VAR_4, 0);
   break;
  case 'h':
   VAR_16 = VAR_1;
   break;
  case 'q':
   VAR_6 = 1;
   break;
  case 's':
   FUNC_1(VAR_11, VAR_4, 1);
   break;
  case 'v':
   VAR_14++;
   break;
  case 'x':
   VAR_13 = VAR_3;
   break;
  default:
   FUNC_15(VAR_18);
  }
 }
 VAR_7 -= VAR_5;
 VAR_8 += VAR_5;

 if (VAR_18) {
  if (VAR_7 <= 1)
   FUNC_15(VAR_18);
  FUNC_0(VAR_11, *VAR_8);
  VAR_7--;
  VAR_8++;
 } else {
  if (VAR_7 == 0 || FUNC_13(VAR_11))
   FUNC_15(VAR_18);
 }
 VAR_10 = FUNC_8(VAR_8, VAR_16 | VAR_13, ((void*)0));
 if (VAR_10 == ((void*)0))
  FUNC_4(1, "cannot traverse filesystem%s", VAR_7 ? "s" : "");
 while ((VAR_9 = FUNC_9(VAR_10)) != ((void*)0)) {
  switch (VAR_9->fts_info) {
  case 134:
   break;
  case 138:
  case 137:

   if (VAR_18 && !VAR_15)
    FUNC_10(VAR_10, VAR_9, VAR_2);
  case 136:
  case 132:
  case 130:
  case 129:
  case 128:
   if (FUNC_2(VAR_11, VAR_9, VAR_16, VAR_14)) {
    if (VAR_12) {
     FUNC_5(1, "labeling not supported in %s",
         VAR_9->fts_path);
    }
    if (!VAR_6)
     FUNC_16("labeling not supported in %s",
         VAR_9->fts_path);
    FUNC_10(VAR_10, VAR_9, VAR_2);
   }
   break;
  case 135:
  case 133:
  case 131:
   FUNC_4(1, "traversing %s", VAR_9->fts_path);
  default:
   FUNC_5(1, "CANNOT HAPPEN (%d) traversing %s",
       VAR_9->fts_info, VAR_9->fts_path);
  }
 }
 FUNC_7(VAR_10);
 FUNC_6(0);
}
