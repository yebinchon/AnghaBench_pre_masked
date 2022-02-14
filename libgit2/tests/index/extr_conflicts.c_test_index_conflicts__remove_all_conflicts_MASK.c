
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*) ;
 size_t FUNC_4 (int ) ;
 int * FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

void FUNC_7(void)
{
 size_t VAR_1;
 const git_index_entry *VAR_2;

 FUNC_0(FUNC_4(VAR_0) == 8);

 FUNC_1(1, FUNC_6(VAR_0));

 FUNC_2(VAR_0);

 FUNC_1(0, FUNC_6(VAR_0));

 FUNC_0(FUNC_4(VAR_0) == 2);

 for (VAR_1 = 0; VAR_1 < FUNC_4(VAR_0); VAR_1++) {
  FUNC_0(VAR_2 = FUNC_5(VAR_0, VAR_1));
  FUNC_0(!FUNC_3(VAR_2));
 }
}
