
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entropy_store {int dummy; } ;


 scalar_t__ FUNC_0 (struct entropy_store*) ;
 int FUNC_1 (struct entropy_store*,size_t) ;
 int FUNC_2 (char const*,size_t) ;
 scalar_t__ VAR_0 ;
 struct entropy_store VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct entropy_store*,char const*,size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(const char *VAR_4, size_t VAR_5,
    size_t VAR_6)
{
 struct entropy_store *VAR_7 = &VAR_1;

 if (FUNC_5(VAR_0 == 0)) {
  FUNC_2(VAR_4, VAR_5);
  return;
 }





 FUNC_6(VAR_2,
   FUNC_3() ||
   FUNC_0(&VAR_1) <= VAR_3);
 FUNC_4(VAR_7, VAR_4, VAR_5);
 FUNC_1(VAR_7, VAR_6);
}
