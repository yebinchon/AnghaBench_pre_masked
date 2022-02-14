
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_type; int data_len; scalar_t__ flag_has_ttl; int* data; } ;
typedef TYPE_1__ dns_trie_record_t ;


 size_t* VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1 (int VAR_5) {
  if (VAR_0 == ((void*)0)) {
    return -1;
  }
  dns_trie_record_t *VAR_6 = (dns_trie_record_t *) (&VAR_2[VAR_5]);
  switch (VAR_6->data_type) {
    case 131:
    case 130:
    case 128:
    case 129:
      break;
    default:
      return -1;
  }
  unsigned int VAR_7 = VAR_6->data_type, VAR_8 = VAR_6->data_type;
  int VAR_9 = VAR_6->data_len;
  if (VAR_6->flag_has_ttl) {
    VAR_9 += 4;
  }
  int VAR_10;
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    VAR_7 = (257 * VAR_7 + VAR_6->data[VAR_10]) % VAR_3;
    VAR_8 = (3 * VAR_8 + VAR_6->data[VAR_10]) % (VAR_3 - 1);
  }
  VAR_8++;
  while (VAR_0[VAR_7] >= 0) {
    dns_trie_record_t *VAR_11 = (dns_trie_record_t *) (&VAR_2[VAR_0[VAR_7]]);
    if (VAR_11->data_type == VAR_6->data_type && VAR_11->data_len == VAR_6->data_len && VAR_11->flag_has_ttl == VAR_6->flag_has_ttl && !FUNC_0 (VAR_11->data, VAR_6->data, VAR_9)) {
      return VAR_0[VAR_7];
    }
    VAR_7 += VAR_8;
    if (VAR_7 >= VAR_3) {
      VAR_7 -= VAR_3;
    }
  }
  if (VAR_4 >= VAR_1) {
    return -1;
  }
  VAR_4++;
  VAR_0[VAR_7] = VAR_5;
  return -1;
}
