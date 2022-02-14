
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,char*,int) ;
 int * VAR_2 ;
 scalar_t__ FUNC_9 (int *,int *,char) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (int,int *) ;
 char* FUNC_12 (char*,char const*,int,int) ;

__attribute__((used)) static int FUNC_13(const char *VAR_3, const char *VAR_4, int VAR_5,
        int VAR_6, int VAR_7)
{
 int VAR_8 = -1;
 int VAR_9;

 FILE *VAR_10 = !FUNC_10(VAR_3, "-") ? VAR_2 : FUNC_5(VAR_3, "r");
 int VAR_11 = 0;

 if (!VAR_10) {
  FUNC_2("cannot open mbox %s", VAR_3);
  goto out;
 }

 do {
  VAR_9 = FUNC_4(VAR_10);
  if (VAR_9 == VAR_0) {
   if (VAR_10 == VAR_2)

    VAR_8 = VAR_7;
   else {
    FUNC_3(VAR_10);
    FUNC_1(FUNC_0("empty mbox: '%s'"), VAR_3);
   }
   goto out;
  }
 } while (FUNC_7(VAR_9));
 FUNC_11(VAR_9, VAR_10);

 if (FUNC_9(&VAR_1, VAR_10, '\n')) {

  if (VAR_10 != VAR_2) {
   FUNC_1("cannot read mbox %s", VAR_3);
   goto out;
  }
  VAR_11 = 1;
 }

 while (!VAR_11) {
  char *VAR_12 = FUNC_12("%s/%0*d", VAR_4, VAR_6, ++VAR_7);
  VAR_11 = FUNC_8(VAR_10, VAR_12, VAR_5);
  FUNC_6(VAR_12);
 }

 if (VAR_10 != VAR_2)
  FUNC_3(VAR_10);

 VAR_8 = VAR_7;
out:
 return VAR_8;
}
