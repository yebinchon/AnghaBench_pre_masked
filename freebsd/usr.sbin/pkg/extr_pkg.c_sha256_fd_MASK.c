
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA256_CTX ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 (int *) ;
 size_t FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (unsigned char*,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(int VAR_3, char VAR_4[VAR_2 * 2 + 1])
{
 int VAR_5;
 FILE *VAR_6;
 char VAR_7[VAR_0];
 unsigned char VAR_8[VAR_2];
 size_t VAR_9;
 int VAR_10;
 SHA256_CTX VAR_11;

 VAR_5 = -1;
 VAR_6 = ((void*)0);
 VAR_9 = 0;
 VAR_10 = 1;

 VAR_4[0] = '\0';


 if ((VAR_5 = FUNC_4(VAR_3)) == -1) {
  FUNC_11("dup");
  goto cleanup;
 }

 if ((VAR_6 = FUNC_6(VAR_5, "rb")) == ((void*)0)) {
  FUNC_11("fdopen");
  goto cleanup;
 }

 FUNC_1(&VAR_11);

 while ((VAR_9 = FUNC_8(VAR_7, 1, VAR_0, VAR_6)) > 0)
  FUNC_2(&VAR_11, VAR_7, VAR_9);

 if (FUNC_7(VAR_6) != 0) {
  FUNC_11("fread");
  goto cleanup;
 }

 FUNC_0(VAR_8, &VAR_11);
 FUNC_10(VAR_8, VAR_4);
 VAR_10 = 0;

cleanup:
 if (VAR_6 != ((void*)0))
  FUNC_5(VAR_6);
 else if (VAR_5 != -1)
  FUNC_3(VAR_5);
 (void)FUNC_9(VAR_3, 0, VAR_1);

 return (VAR_10);
}
