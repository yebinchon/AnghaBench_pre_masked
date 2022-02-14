
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_test_sglists {int dst; int src; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cipher_test_sglists*) ;

__attribute__((used)) static void FUNC_2(struct cipher_test_sglists *VAR_0)
{
 if (VAR_0) {
  FUNC_0(&VAR_0->src);
  FUNC_0(&VAR_0->dst);
  FUNC_1(VAR_0);
 }
}
