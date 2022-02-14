
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keylist {scalar_t__ keys_p; scalar_t__ inline_keys; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct keylist *VAR_0)
{
 if (VAR_0->keys_p != VAR_0->inline_keys)
  FUNC_0(VAR_0->keys_p);
}
