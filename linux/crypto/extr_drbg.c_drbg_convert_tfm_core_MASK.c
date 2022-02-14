
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cra_name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static inline void FUNC_3(const char *VAR_1,
      int *VAR_2, bool *VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5 = 0;
 int VAR_6 = 0;

 *VAR_3 = 1;

 if (!FUNC_1(VAR_1, "drbg_nopr_", 10)) {
  VAR_5 = 10;
  *VAR_3 = 0;
 } else if (!FUNC_1(VAR_1, "drbg_pr_", 8)) {
  VAR_5 = 8;
 } else {
  return;
 }


 VAR_6 = FUNC_2(VAR_1) - VAR_5;
 for (VAR_4 = 0; FUNC_0(VAR_0) > VAR_4; VAR_4++) {
  if (!FUNC_1(VAR_1 + VAR_5, VAR_0[VAR_4].cra_name,
       VAR_6)) {
   *VAR_2 = VAR_4;
   return;
  }
 }
}
