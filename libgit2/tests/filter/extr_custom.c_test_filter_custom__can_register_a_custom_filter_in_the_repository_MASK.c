
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filter_list ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,char*,int ,int ) ;

void FUNC_6(void)
{
 git_filter_list *VAR_2;

 FUNC_2(FUNC_5(
  &VAR_2, VAR_1, ((void*)0), "herofile", VAR_0, 0));

 FUNC_1(3, FUNC_4(VAR_2));
 FUNC_3(VAR_2);

 FUNC_2(FUNC_5(
  &VAR_2, VAR_1, ((void*)0), "herocorp", VAR_0, 0));

 {
  size_t VAR_3 = FUNC_4(VAR_2);
  FUNC_0(VAR_3 == 2 || VAR_3 == 3);
 }
 FUNC_3(VAR_2);

 FUNC_2(FUNC_5(
  &VAR_2, VAR_1, ((void*)0), "hero.bin", VAR_0, 0));

 FUNC_1(2, FUNC_4(VAR_2));
 FUNC_3(VAR_2);

 FUNC_2(FUNC_5(
  &VAR_2, VAR_1, ((void*)0), "heroflip", VAR_0, 0));

 FUNC_1(1, FUNC_4(VAR_2));
 FUNC_3(VAR_2);

 FUNC_2(FUNC_5(
  &VAR_2, VAR_1, ((void*)0), "doesntapplytome.bin",
  VAR_0, 0));

 FUNC_1(0, FUNC_4(VAR_2));
 FUNC_3(VAR_2);
}
