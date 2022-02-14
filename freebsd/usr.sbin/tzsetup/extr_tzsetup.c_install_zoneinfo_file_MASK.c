
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int title ;
struct stat {int st_mode; } ;
typedef int ssize_t ;
typedef int prompt ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char const*,int,int) ;
 char* VAR_14 ;
 int FUNC_7 (int,char*,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (char*,int,char*,...) ;
 int VAR_16 ;
 char* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_18)
{
 char VAR_19[1024];
 char VAR_20[64], VAR_21[VAR_9];
 struct stat VAR_22;
 ssize_t VAR_23;
 int VAR_24, VAR_25, VAR_26;

 if (FUNC_5(VAR_14, &VAR_22) < 0) {

  VAR_26 = 1;
 } else if (FUNC_0(VAR_22.st_mode))
  VAR_26 = 0;
 else
  VAR_26 = 1;
 if (VAR_15) {
  if (VAR_26) {
   VAR_24 = FUNC_6(VAR_18, VAR_6, 0);
   if (VAR_24 < 0) {
    FUNC_8(VAR_20, sizeof(VAR_20), "Error");
    FUNC_8(VAR_21, sizeof(VAR_21),
        "Could not open %s: %s", VAR_18,
        FUNC_9(VAR_13));





     FUNC_4(VAR_16, "%s\n", VAR_21);
    return (VAR_0 | VAR_2);
   }

   if (FUNC_11(VAR_14) < 0 && VAR_13 != VAR_3) {
    FUNC_8(VAR_21, sizeof(VAR_21),
        "Could not delete %s: %s",
        VAR_14, FUNC_9(VAR_13));






     FUNC_4(VAR_16, "%s\n", VAR_21);
    return (VAR_0 | VAR_2);
   }

   VAR_25 = FUNC_6(VAR_14, VAR_4 | VAR_5 | VAR_7,
       VAR_12 | VAR_10 | VAR_11);
   if (VAR_25 < 0) {
    FUNC_8(VAR_20, sizeof(VAR_20), "Error");
    FUNC_8(VAR_21, sizeof(VAR_21),
        "Could not open %s: %s",
        VAR_14, FUNC_9(VAR_13));





     FUNC_4(VAR_16, "%s\n", VAR_21);
    return (VAR_0 | VAR_2);
   }

   while ((VAR_23 = FUNC_7(VAR_24, VAR_19, sizeof(VAR_19))) > 0)
    if ((VAR_23 = FUNC_12(VAR_25, VAR_19, VAR_23)) < 0)
     break;

   if (VAR_23 == -1) {
    FUNC_8(VAR_20, sizeof(VAR_20), "Error");
    FUNC_8(VAR_21, sizeof(VAR_21),
        "Error copying %s to %s %s", VAR_18,
        VAR_14, FUNC_9(VAR_13));





     FUNC_4(VAR_16, "%s\n", VAR_21);

    FUNC_11(VAR_14);
    return (VAR_0 | VAR_2);
   }
   FUNC_2(VAR_24);
   FUNC_2(VAR_25);
  } else {
   if (FUNC_1(VAR_18, VAR_8) != 0) {
    FUNC_8(VAR_20, sizeof(VAR_20), "Error");
    FUNC_8(VAR_21, sizeof(VAR_21),
        "Cannot access %s: %s", VAR_18,
        FUNC_9(VAR_13));





     FUNC_4(VAR_16, "%s\n", VAR_21);
    return (VAR_0 | VAR_2);
   }
   if (FUNC_11(VAR_14) < 0 && VAR_13 != VAR_3) {
    FUNC_8(VAR_21, sizeof(VAR_21),
        "Could not delete %s: %s",
        VAR_14, FUNC_9(VAR_13));






     FUNC_4(VAR_16, "%s\n", VAR_21);
    return (VAR_0 | VAR_2);
   }
   if (FUNC_10(VAR_18, VAR_14) < 0) {
    FUNC_8(VAR_20, sizeof(VAR_20), "Error");
    FUNC_8(VAR_21, sizeof(VAR_21),
        "Cannot create symbolic link %s to %s: %s",
        VAR_14, VAR_18,
        FUNC_9(VAR_13));





     FUNC_4(VAR_16, "%s\n", VAR_21);
    return (VAR_0 | VAR_2);
   }
  }
 }

 return (VAR_1);
}
