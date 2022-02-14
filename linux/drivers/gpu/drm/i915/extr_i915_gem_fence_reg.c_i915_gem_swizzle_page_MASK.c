
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_1)
{
 char VAR_2[64];
 char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 128) {
  FUNC_2(VAR_2, &VAR_3[VAR_4], 64);
  FUNC_2(&VAR_3[VAR_4], &VAR_3[VAR_4 + 64], 64);
  FUNC_2(&VAR_3[VAR_4 + 64], VAR_2, 64);
 }

 FUNC_1(VAR_1);
}
