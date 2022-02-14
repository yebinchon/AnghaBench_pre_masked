
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MD_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int,int,int ) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(void)
{
  MD_CTX VAR_1;
  int VAR_2;
  unsigned char VAR_3[16], VAR_4[16];

  FUNC_1 (&VAR_1);
  while ((VAR_2 = FUNC_4 (VAR_3, 1, 16, VAR_0)))
    FUNC_3(&VAR_1, VAR_3, VAR_2);
  FUNC_0(VAR_4, &VAR_1);

  FUNC_2(VAR_4);
  FUNC_5("\n");
}
