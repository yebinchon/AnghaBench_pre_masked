
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int key_len; int key; int hash_entry; } ;


 int FUNC_0 (int ,int ) ;

inline void FUNC_1 ( struct entry *VAR_0) {
  VAR_0->hash_entry = FUNC_0 (VAR_0->key, VAR_0->key_len);
}
