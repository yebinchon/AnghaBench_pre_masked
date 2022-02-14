
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 (char*,char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char*,int,char*,char const*,char const*) ;
 size_t FUNC_7 (char const*) ;
 char const* VAR_10 ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int
FUNC_9(const char *VAR_12, int VAR_13, struct stat *VAR_14)
{
 char VAR_15[VAR_1];
 int VAR_16 = 0;
 int VAR_17;

 if (VAR_13) {
  if (VAR_8) {
   if ((size_t)FUNC_6(VAR_15, VAR_1, "%s%s",
       VAR_12, VAR_10) != FUNC_7(VAR_12) + FUNC_7(VAR_10)) {
    VAR_16 = VAR_9;




    VAR_9 = VAR_16;
    FUNC_2(VAR_0, "%s: backup filename too long",
        VAR_12);
   }
   (void)FUNC_6(VAR_15, VAR_1, "%s%s",
       VAR_12, VAR_10);
   if (VAR_11)
    (void)FUNC_4("install: %s -> %s\n",
        VAR_12, VAR_15);
   if (FUNC_5(VAR_12, VAR_15) < 0) {
    VAR_16 = VAR_9;




    VAR_9 = VAR_16;
    FUNC_1(VAR_0, "rename: %s to %s", VAR_12, VAR_15);
   }
  } else
   if (FUNC_8(VAR_12) < 0)
    VAR_16 = VAR_9;
 }

 VAR_17 = FUNC_3(VAR_12, VAR_3 | VAR_4 | VAR_5, VAR_6 | VAR_7);
 if (VAR_17 < 0 && VAR_16 != 0)
  VAR_9 = VAR_16;
 return VAR_17;
}
