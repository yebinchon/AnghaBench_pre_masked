
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,int,int) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 git_filebuf VAR_1 = VAR_0;
 char VAR_2[] = "test";
 unsigned char VAR_3[4096 * 4];

 FUNC_6(VAR_3, 0xfe, sizeof(VAR_3));

 FUNC_1(FUNC_4(&VAR_1, VAR_2, 0, 0666));
 FUNC_1(FUNC_5(&VAR_1, VAR_3, sizeof(VAR_3)));
 FUNC_1(FUNC_3(&VAR_1));

 FUNC_0((char *)VAR_3, sizeof(VAR_3), VAR_2);

 FUNC_2(FUNC_7(VAR_2));
}
