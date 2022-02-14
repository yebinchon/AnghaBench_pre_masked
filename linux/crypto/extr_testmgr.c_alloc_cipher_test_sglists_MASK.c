
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_test_sglists {int src; int dst; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cipher_test_sglists*) ;
 struct cipher_test_sglists* FUNC_3 (int,int ) ;

__attribute__((used)) static struct cipher_test_sglists *FUNC_4(void)
{
 struct cipher_test_sglists *VAR_1;

 VAR_1 = FUNC_3(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_1(&VAR_1->src) != 0)
  goto fail_kfree;
 if (FUNC_1(&VAR_1->dst) != 0)
  goto fail_destroy_src;

 return VAR_1;

fail_destroy_src:
 FUNC_0(&VAR_1->src);
fail_kfree:
 FUNC_2(VAR_1);
 return ((void*)0);
}
