
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MD5_CTX ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char**,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (char**,int,int,int *) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, uint8_t *VAR_2)
{
 FILE *VAR_3;
 MD5_CTX VAR_4;
 char VAR_5[VAR_0];
 size_t VAR_6;

 FUNC_1(&VAR_4);

 VAR_3 = FUNC_5(VAR_1, "r+b");
 if (!VAR_3) {
  return -1;
 }
 while (!FUNC_4(VAR_3)) {
  VAR_6 = FUNC_6(&VAR_5, 1, VAR_0, VAR_3);
  FUNC_2(&VAR_4, &VAR_5, VAR_6);
 }
 FUNC_3(VAR_3);

 FUNC_0(VAR_2, &VAR_4);

 return 0;
}
