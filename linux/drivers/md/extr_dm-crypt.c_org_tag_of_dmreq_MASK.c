
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
struct dm_crypt_request {int dummy; } ;
struct crypt_config {int iv_size; } ;


 int * FUNC_0 (struct crypt_config*,struct dm_crypt_request*) ;

__attribute__((used)) static unsigned int *FUNC_1(struct crypt_config *VAR_0,
         struct dm_crypt_request *VAR_1)
{
 u8 *VAR_2 = FUNC_0(VAR_0, VAR_1) + VAR_0->iv_size +
    VAR_0->iv_size + sizeof(uint64_t);
 return (unsigned int*)VAR_2;
}
