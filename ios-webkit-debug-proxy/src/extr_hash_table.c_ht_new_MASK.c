
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ht_struct {int dummy; } ;
typedef TYPE_1__* ht_t ;
typedef int ht_entry_t ;
typedef enum ht_key_type { ____Placeholder_ht_key_type } ht_key_type ;
struct TYPE_4__ {int on_cmp; int on_hash; int num_buckets; int * buckets; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

ht_t FUNC_3(enum ht_key_type VAR_4) {
  ht_t VAR_5 = (ht_t)FUNC_1(sizeof(struct ht_struct));
  if (VAR_5) {
    FUNC_2(VAR_5, 0, sizeof(struct ht_struct));
    VAR_5->num_buckets = VAR_1;
    VAR_5->buckets = (ht_entry_t *)FUNC_0(VAR_5->num_buckets,
        sizeof(ht_entry_t));
    if (VAR_4 == VAR_0) {
      VAR_5->on_hash = VAR_3;
      VAR_5->on_cmp = VAR_2;
    }
  }
  return VAR_5;
}
