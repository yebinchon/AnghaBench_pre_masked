
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct key_blob {unsigned int keylen; int key; int keybuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct key_blob *VAR_2,
      const u8 *VAR_3,
      unsigned int VAR_4)
{
 if (VAR_4 <= sizeof(VAR_2->keybuf))
  VAR_2->key = VAR_2->keybuf;
 else {
  VAR_2->key = FUNC_0(VAR_4, VAR_1);
  if (!VAR_2->key)
   return -VAR_0;
 }
 FUNC_1(VAR_2->key, VAR_3, VAR_4);
 VAR_2->keylen = VAR_4;

 return 0;
}
