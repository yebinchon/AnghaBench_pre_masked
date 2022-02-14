
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ttl; } ;
typedef TYPE_1__ dns_zone_t ;
struct TYPE_6__ {scalar_t__ data_len; scalar_t__ data; int flag_has_ttl; } ;
typedef TYPE_2__ dns_trie_record_t ;


 int FUNC_0 (unsigned int*,scalar_t__,int) ;

__attribute__((used)) static unsigned int FUNC_1 (dns_trie_record_t *VAR_0, dns_zone_t *VAR_1) {
  if (!VAR_0->flag_has_ttl) {
    return VAR_1->ttl;
  }
  unsigned int VAR_2;
  FUNC_0 (&VAR_2, VAR_0->data + VAR_0->data_len, 4);
  return VAR_2;
}
