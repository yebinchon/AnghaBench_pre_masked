
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkey_protkey {int dummy; } ;
struct key_blob {int keylen; int key; } ;


 int FUNC_0 (int ,int ,struct pkey_protkey*) ;

__attribute__((used)) static inline int FUNC_1(struct key_blob *VAR_0,
         struct pkey_protkey *VAR_1)
{
 int VAR_2, VAR_3;


 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0->key, VAR_0->keylen, VAR_1);
  if (VAR_3 == 0)
   break;
 }

 return VAR_3;
}
