
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int SHA_CTX ;


 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int VAR_0 ;
 char FUNC_7 (char) ;

void
FUNC_8(char *VAR_1, int VAR_2,
                              char *VAR_3, char *VAR_4,
                              char *VAR_5, char *VAR_6,
                              char *VAR_7)
{
  SHA_CTX VAR_8;
  char VAR_9[16];
  char VAR_10[16];
  char VAR_11[8];
  u_char VAR_12[VAR_0];
  int VAR_13;




  char VAR_14[39] =
         {0x4D, 0x61, 0x67, 0x69, 0x63, 0x20, 0x73, 0x65, 0x72, 0x76,
          0x65, 0x72, 0x20, 0x74, 0x6F, 0x20, 0x63, 0x6C, 0x69, 0x65,
          0x6E, 0x74, 0x20, 0x73, 0x69, 0x67, 0x6E, 0x69, 0x6E, 0x67,
          0x20, 0x63, 0x6F, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x74};


  char VAR_15[41] =
         {0x50, 0x61, 0x64, 0x20, 0x74, 0x6F, 0x20, 0x6D, 0x61, 0x6B,
          0x65, 0x20, 0x69, 0x74, 0x20, 0x64, 0x6F, 0x20, 0x6D, 0x6F,
          0x72, 0x65, 0x20, 0x74, 0x68, 0x61, 0x6E, 0x20, 0x6F, 0x6E,
          0x65, 0x20, 0x69, 0x74, 0x65, 0x72, 0x61, 0x74, 0x69, 0x6F,
          0x6E};



  FUNC_2(VAR_1, VAR_2, VAR_9);



  FUNC_1(VAR_9, VAR_10);

  FUNC_5(&VAR_8);
  FUNC_6(&VAR_8, VAR_10, 16);
  FUNC_6(&VAR_8, VAR_3, 24);
  FUNC_6(&VAR_8, VAR_14, 39);
  FUNC_4(VAR_12, &VAR_8);
  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_11);
  FUNC_5(&VAR_8);
  FUNC_6(&VAR_8, VAR_12, 20);
  FUNC_6(&VAR_8, VAR_11, 8);
  FUNC_6(&VAR_8, VAR_15, 41);
  VAR_7[0] = 'S';
  VAR_7[1] = '=';
  FUNC_3(&VAR_8, VAR_7 + 2);
  for (VAR_13=2; VAR_13<42; VAR_13++)
    VAR_7[VAR_13] = FUNC_7(VAR_7[VAR_13]);

}
