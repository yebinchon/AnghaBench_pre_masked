
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MD_CTX ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (unsigned char*,int,int,int *) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(char *VAR_1)
{
  FILE *VAR_2;
  MD_CTX VAR_3;
  int VAR_4;
  unsigned char VAR_5[1024], VAR_6[16];

  if ((VAR_2 = FUNC_5 (VAR_1, "rb")) == ((void*)0)) {
    FUNC_7("%s can't be opened\n", VAR_1);
  } else {
    FUNC_1(&VAR_3);
    while ((VAR_4 = FUNC_6 (VAR_5, 1, 1024, VAR_2)))
      FUNC_3(&VAR_3, VAR_5, VAR_4);
    FUNC_0(VAR_6, &VAR_3);

    FUNC_4(VAR_2);

    FUNC_7("MD%d (%s) = ", VAR_0, VAR_1);
    FUNC_2(VAR_6);
    FUNC_7("\n");
  }
}
