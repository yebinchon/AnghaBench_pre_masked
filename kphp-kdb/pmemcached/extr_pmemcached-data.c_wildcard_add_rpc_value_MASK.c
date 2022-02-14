
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wildcard_entry {int key_len; int data_len; scalar_t__ flags; void* data; void* key; } ;
struct data {int data_len; } ;
typedef int hash_entry_t ;


 int FUNC_0 () ;
 int FUNC_1 (void*,char const*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct wildcard_entry*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 struct data FUNC_5 (char const*,int) ;
 int VAR_3 ;
 void* FUNC_6 (int) ;

void FUNC_7 (const char *VAR_4, int VAR_5, const char *VAR_6, int VAR_7) {
  while (VAR_2 + VAR_7 + VAR_5 + sizeof (struct wildcard_entry) > VAR_0) {
    FUNC_4 ();
  }
  struct data VAR_8 = FUNC_5 (VAR_4, VAR_5);
  if (VAR_8.data_len != -1) {
    return;
  }
  struct wildcard_entry *VAR_9 = FUNC_6 (sizeof (struct wildcard_entry));
  FUNC_3 (VAR_9);
  VAR_9->key_len = VAR_5;
  VAR_9->key = FUNC_6 (VAR_5);
  FUNC_1 (VAR_9->key, VAR_4, VAR_5);
  VAR_9->data_len = VAR_7;
  VAR_9->data = FUNC_6 (VAR_7);
  FUNC_1 (VAR_9->data, VAR_6, VAR_7);
  VAR_9->flags = 0;
  VAR_3 = FUNC_2 (VAR_3, (hash_entry_t *)VAR_9, FUNC_0 ());
  VAR_2 += VAR_7 + VAR_5 + sizeof (struct wildcard_entry);
  VAR_1 ++;
}
