
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 int VAR_9, VAR_10 = 0;




 FUNC_4(VAR_0, VAR_1);

 if (VAR_6 < 3)
  FUNC_6("git merge-index [-o] [-q] <merge-program> (-a | [--] [<filename>...])");

 FUNC_3();

 VAR_9 = 1;
 if (!FUNC_5(VAR_7[VAR_9], "-o")) {
  VAR_3 = 1;
  VAR_9++;
 }
 if (!FUNC_5(VAR_7[VAR_9], "-q")) {
  VAR_5 = 1;
  VAR_9++;
 }
 VAR_4 = VAR_7[VAR_9++];
 for (; VAR_9 < VAR_6; VAR_9++) {
  const char *VAR_11 = VAR_7[VAR_9];
  if (!VAR_10 && *VAR_11 == '-') {
   if (!FUNC_5(VAR_11, "--")) {
    VAR_10 = 1;
    continue;
   }
   if (!FUNC_5(VAR_11, "-a")) {
    FUNC_1();
    continue;
   }
   FUNC_0("git merge-index: unknown option %s", VAR_11);
  }
  FUNC_2(VAR_11);
 }
 if (VAR_2 && !VAR_5)
  FUNC_0("merge program failed");
 return VAR_2;
}
