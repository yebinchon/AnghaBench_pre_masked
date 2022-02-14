
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {scalar_t__ key_len; scalar_t__ data_len; int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,struct index_entry*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4 (struct index_entry* VAR_8) {
  if (VAR_7 >= 3) {
    FUNC_2 (VAR_6, "Data from index_entry\n");
  }
  if (VAR_4 == 0) {
    FUNC_1 (VAR_8->data, VAR_8->key_len);
  }
  FUNC_0 (VAR_4 + sizeof (struct index_entry) + VAR_8->key_len + VAR_8->data_len + 1 < VAR_1);
  FUNC_3 (VAR_2 + VAR_4, VAR_8, sizeof(struct index_entry) + VAR_8->key_len + VAR_8->data_len + 1);
  VAR_4 += sizeof(struct index_entry) + VAR_8->key_len + VAR_8->data_len + 1;
  FUNC_0 (VAR_3 < VAR_0 - 1);
  VAR_5[++VAR_3] = VAR_4;
}
