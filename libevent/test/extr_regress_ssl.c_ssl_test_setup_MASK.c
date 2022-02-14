
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testcase_t {int dummy; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct testcase_t const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void *
FUNC_5(const struct testcase_t *VAR_3)
{
 FUNC_2();

 VAR_2 = FUNC_4();
 FUNC_0(VAR_2);

 VAR_1 = FUNC_3(VAR_2);
 FUNC_0(VAR_1);

 VAR_0 = 0;

 return FUNC_1(VAR_3);
}
