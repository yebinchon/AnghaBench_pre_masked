
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(u64 VAR_1)
{
 enum page_cache_mode VAR_2;
 char VAR_3[33];
 int VAR_4;

 VAR_3[32] = 0;
 for (VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
  VAR_2 = FUNC_0((VAR_1 >> (VAR_4 * 8)) & 7,
        VAR_3 + 4 * VAR_4);
  FUNC_2(VAR_4, VAR_2);
 }
 FUNC_1("x86/PAT: Configuration [0-7]: %s\n", VAR_3);

 VAR_0 = 1;
}
