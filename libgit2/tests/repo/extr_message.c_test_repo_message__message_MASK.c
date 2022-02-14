
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 git_buf VAR_3 = VAR_0, VAR_4 = VAR_0;
 const char VAR_5[] = "Test\n\nThis is a test of the emergency broadcast system\n";

 FUNC_3(FUNC_6(&VAR_3, FUNC_8(VAR_2), "MERGE_MSG"));
 FUNC_2(FUNC_4(&VAR_3), VAR_5);

 FUNC_3(FUNC_7(&VAR_4, VAR_2));
 FUNC_1(VAR_5, FUNC_4(&VAR_4));
 FUNC_5(&VAR_4);

 FUNC_3(FUNC_9(FUNC_4(&VAR_3)));
 FUNC_0(VAR_1, FUNC_7(&VAR_4, VAR_2));
 FUNC_5(&VAR_3);
}
