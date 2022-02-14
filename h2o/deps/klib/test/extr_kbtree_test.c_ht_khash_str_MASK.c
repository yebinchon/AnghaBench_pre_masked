
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_3 ;
 char** VAR_4 ;

void FUNC_8()
{
 int VAR_5;
 char **VAR_6 = VAR_4;
 FUNC_6(VAR_3) *VAR_2;

 VAR_2 = FUNC_3(VAR_3, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (FUNC_2(VAR_3, VAR_2, VAR_6[VAR_5]) == 0) FUNC_4(VAR_3, VAR_2, VAR_6[VAR_5]);
  else FUNC_1(VAR_3, VAR_2, VAR_6[VAR_5]);
 }
 FUNC_7("[ht_khash_int] size: %d\n", FUNC_5(VAR_2));
 FUNC_0(VAR_2);
}
