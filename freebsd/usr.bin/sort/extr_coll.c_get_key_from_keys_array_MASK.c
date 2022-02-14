
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keys_array {scalar_t__ key; } ;
struct key_value {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 () ;

struct key_value *
FUNC_1(struct keys_array *VAR_0, size_t VAR_1)
{

 return ((struct key_value *)((caddr_t)VAR_0->key +
     VAR_1 * (sizeof(struct key_value) + FUNC_0())));
}
