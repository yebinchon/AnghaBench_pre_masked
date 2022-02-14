
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, int VAR_4)
{
 const char *VAR_5;

 if (FUNC_3(VAR_3, "date-format=", &VAR_5)) {
  FUNC_0(VAR_5);
 } else if (FUNC_3(VAR_3, "import-marks=", &VAR_5)) {
  FUNC_2(VAR_5, VAR_4, 0);
 } else if (FUNC_3(VAR_3, "import-marks-if-exists=", &VAR_5)) {
  FUNC_2(VAR_5, VAR_4, 1);
 } else if (FUNC_3(VAR_3, "export-marks=", &VAR_5)) {
  FUNC_1(VAR_5);
 } else if (!FUNC_4(VAR_3, "alias")) {
  ;
 } else if (!FUNC_4(VAR_3, "get-mark")) {
  ;
 } else if (!FUNC_4(VAR_3, "cat-blob")) {
  ;
 } else if (!FUNC_4(VAR_3, "relative-marks")) {
  VAR_1 = 1;
 } else if (!FUNC_4(VAR_3, "no-relative-marks")) {
  VAR_1 = 0;
 } else if (!FUNC_4(VAR_3, "done")) {
  VAR_2 = 1;
 } else if (!FUNC_4(VAR_3, "force")) {
  VAR_0 = 1;
 } else if (!FUNC_4(VAR_3, "notes") || !FUNC_4(VAR_3, "ls")) {
  ;
 } else {
  return 0;
 }

 return 1;
}
