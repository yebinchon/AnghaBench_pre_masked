
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_config {int key_size; int key_extra_size; int tfms_count; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(struct crypt_config *VAR_0)
{
 return (VAR_0->key_size - VAR_0->key_extra_size) >> FUNC_0(VAR_0->tfms_count);
}
