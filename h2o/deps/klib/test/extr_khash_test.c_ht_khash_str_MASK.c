
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int,char*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int VAR_2 ;
 char** VAR_3 ;

void FUNC_7()
{
 int VAR_4, VAR_5;
 char **VAR_6 = VAR_3;
 FUNC_5(VAR_2) *VAR_1;
 unsigned VAR_7;

 VAR_1 = FUNC_2(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  VAR_7 = FUNC_3(VAR_2, VAR_1, VAR_6[VAR_4], &VAR_5);
  if (!VAR_5) FUNC_0(VAR_2, VAR_1, VAR_7);
 }
 FUNC_6("[ht_khash_int] size: %u\n", FUNC_4(VAR_1));
 FUNC_1(VAR_2, VAR_1);
}
