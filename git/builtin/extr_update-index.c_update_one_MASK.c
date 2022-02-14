
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 scalar_t__ FUNC_3 (char const*,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (char const*,struct stat*,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*) ;
 int VAR_9 ;
 int FUNC_7 (char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(const char *VAR_10)
{
 int VAR_11 = 0;
 struct stat VAR_12;

 if (VAR_8 || VAR_7 || VAR_5 ||
     VAR_6)
  VAR_12.st_mode = 0;
 else if (FUNC_2(VAR_10, &VAR_12) < 0) {
  VAR_12.st_mode = 0;
  VAR_11 = VAR_4;
 }

 if (!FUNC_7(VAR_10, VAR_12.st_mode)) {
  FUNC_1(VAR_9, "Ignoring path %s\n", VAR_10);
  return;
 }
 if (VAR_8) {
  if (FUNC_3(VAR_10, VAR_2, VAR_8 == VAR_3))
   FUNC_0("Unable to mark file %s", VAR_10);
  return;
 }
 if (VAR_7) {
  if (FUNC_3(VAR_10, VAR_1, VAR_7 == VAR_3))
   FUNC_0("Unable to mark file %s", VAR_10);
  return;
 }
 if (VAR_6) {
  if (FUNC_3(VAR_10, VAR_0, VAR_6 == VAR_3))
   FUNC_0("Unable to mark file %s", VAR_10);
  return;
 }

 if (VAR_5) {
  if (FUNC_5(VAR_10))
   FUNC_0("git update-index: unable to remove %s", VAR_10);
  FUNC_6("remove '%s'", VAR_10);
  return;
 }
 if (FUNC_4(VAR_10, &VAR_12, VAR_11))
  FUNC_0("Unable to process path %s", VAR_10);
 FUNC_6("add '%s'", VAR_10);
}
