
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dummy; } ;
struct cipher_test_suite {unsigned int count; int * vecs; } ;
struct cipher_test_sglists {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char const*,int,int *,unsigned int,struct skcipher_request*,struct cipher_test_sglists*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1,
    const struct cipher_test_suite *VAR_2,
    struct skcipher_request *VAR_3,
    struct cipher_test_sglists *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_2->vecs[VAR_5], VAR_5, VAR_3,
     VAR_4);
  if (VAR_6)
   return VAR_6;
  FUNC_0();
 }
 return 0;
}
