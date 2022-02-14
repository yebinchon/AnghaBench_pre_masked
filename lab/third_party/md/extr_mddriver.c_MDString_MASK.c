
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,unsigned int) ;
 int FUNC_4 (char*,...) ;
 unsigned int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6 (char *VAR_1)
{
  MD_CTX VAR_2;
  unsigned char VAR_3[16];
  unsigned int VAR_4 = FUNC_5(VAR_1);

  FUNC_1(&VAR_2);
  FUNC_3(&VAR_2, (unsigned char*)VAR_1, VAR_4);
  FUNC_0(VAR_3, &VAR_2);

  FUNC_4("MD%d (\"%s\") = ", VAR_0, VAR_1);
  FUNC_2(VAR_3);
  FUNC_4("\n");
}
