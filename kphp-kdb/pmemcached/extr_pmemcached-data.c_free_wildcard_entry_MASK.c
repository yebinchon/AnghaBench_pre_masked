
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wildcard_entry {int key_len; int data_len; struct wildcard_entry* data; struct wildcard_entry* key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wildcard_entry*) ;
 int FUNC_1 (struct wildcard_entry*,int) ;

void FUNC_2 (struct wildcard_entry *VAR_2) {
  FUNC_0 (VAR_2);
  FUNC_1 (VAR_2->key, VAR_2->key_len);
  FUNC_1 (VAR_2->data, VAR_2->data_len);
  VAR_1 -= VAR_2->key_len + VAR_2->data_len + sizeof (struct wildcard_entry);
  FUNC_1 (VAR_2, sizeof (struct wildcard_entry));
  VAR_0 --;
}
