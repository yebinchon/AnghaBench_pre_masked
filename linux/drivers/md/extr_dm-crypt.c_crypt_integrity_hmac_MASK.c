
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_config {scalar_t__ key_mac_size; } ;


 scalar_t__ FUNC_0 (struct crypt_config*) ;

__attribute__((used)) static bool FUNC_1(struct crypt_config *VAR_0)
{
 return FUNC_0(VAR_0) && VAR_0->key_mac_size;
}
