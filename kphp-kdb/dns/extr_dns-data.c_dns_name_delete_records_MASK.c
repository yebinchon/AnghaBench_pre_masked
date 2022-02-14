
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_type; } ;
typedef TYPE_1__ dns_trie_record_t ;
struct TYPE_6__ {size_t record_off; int next; } ;
struct TYPE_5__ {int first_record_id; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_1 (int VAR_5, int VAR_6) {
  FUNC_0 (VAR_5 >= 0);

  int *VAR_7 = &VAR_3[VAR_5].first_record_id;
  while (*VAR_7 >= 0) {
    dns_trie_record_t *VAR_8 = (dns_trie_record_t *) (&VAR_4[VAR_0[*VAR_7].record_off]);
    if (VAR_8->data_type == VAR_6) {
      int *VAR_9 = VAR_7, VAR_10 = 0;
      do {
        VAR_7 = &VAR_0[*VAR_7].next;
        VAR_10++;
      } while (*VAR_7 >= 0 && ((dns_trie_record_t *) (&VAR_4[VAR_0[*VAR_7].record_off]))->data_type == VAR_6);
      int VAR_11 = *VAR_9;
      *VAR_9 = *VAR_7;
      *VAR_7 = VAR_1;
      VAR_1 = VAR_11;
      VAR_2 += VAR_10;
      break;
    }
    VAR_7 = &VAR_0[*VAR_7].next;
  }
  return 0;
}
