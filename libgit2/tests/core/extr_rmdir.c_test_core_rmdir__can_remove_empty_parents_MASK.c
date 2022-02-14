
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 char* VAR_4 ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 git_buf VAR_5 = VAR_0;

 FUNC_2(
  FUNC_5(&VAR_5, VAR_4, "/one/two_two/three/file.txt"));
 FUNC_1(FUNC_3(&VAR_5), "dummy");
 FUNC_0(FUNC_9(FUNC_3(&VAR_5)));

 FUNC_2(FUNC_7("one/two_two/three/file.txt", VAR_4,
  VAR_3 | VAR_2));

 FUNC_0(!FUNC_8(FUNC_3(&VAR_5)));

 FUNC_6(&VAR_5, '/');
 FUNC_0(!FUNC_8(FUNC_3(&VAR_5)));

 FUNC_6(&VAR_5, '/');
 FUNC_0(!FUNC_8(FUNC_3(&VAR_5)));

 FUNC_6(&VAR_5, '/');
 FUNC_0(FUNC_8(FUNC_3(&VAR_5)));

 FUNC_0(FUNC_8(VAR_4) == 1);

 FUNC_4(&VAR_5);

 FUNC_2(FUNC_7(VAR_4, ((void*)0), VAR_1));
}
