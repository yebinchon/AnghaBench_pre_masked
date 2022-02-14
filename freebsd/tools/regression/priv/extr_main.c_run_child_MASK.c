
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int (* t_test_func ) (int,int,struct test*) ;int t_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,struct test*) ;

__attribute__((used)) static void
FUNC_4(struct test *VAR_2, int VAR_3, int VAR_4)
{

 FUNC_2(VAR_2->t_name);
 if (VAR_4)
  FUNC_0(VAR_2->t_name);
 if (!VAR_3)
  FUNC_1(VAR_2->t_name, VAR_1, VAR_0);
 VAR_2->t_test_func(VAR_3, VAR_4, VAR_2);
}
