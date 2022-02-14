
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypt_config {int dummy; } ;


 int FUNC_0 (struct crypt_config*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct scatterlist *FUNC_2(struct crypt_config *VAR_0,
          struct scatterlist *VAR_1)
{
 if (FUNC_1(FUNC_0(VAR_0)))
  return &VAR_1[2];

 return VAR_1;
}
