
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_blob {int keylen; int * key; int * keybuf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct key_blob *VAR_0)
{
 if (VAR_0->key && VAR_0->key != VAR_0->keybuf
     && VAR_0->keylen > sizeof(VAR_0->keybuf)) {
  FUNC_0(VAR_0->key);
  VAR_0->key = ((void*)0);
 }
}
