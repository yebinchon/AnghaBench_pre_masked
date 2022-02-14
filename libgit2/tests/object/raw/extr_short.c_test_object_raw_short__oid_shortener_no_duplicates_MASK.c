
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid_shorten ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

void FUNC_4(void)
{
 git_oid_shorten *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(0);
 FUNC_0(VAR_1 != ((void*)0));

 FUNC_1(VAR_1, "22596363b3de40b06f981fb85d82312e8c0ed511");
 FUNC_1(VAR_1, "ce08fe4884650f067bd5703b6a59a8b3b3c99a09");
 FUNC_1(VAR_1, "16a0123456789abcdef4b775213c23a8bd74f5e0");
 VAR_2 = FUNC_1(VAR_1, "ce08fe4884650f067bd5703b6a59a8b3b3c99a09");

 FUNC_0(VAR_2 == VAR_0 + 1);

 FUNC_2(VAR_1);
}
