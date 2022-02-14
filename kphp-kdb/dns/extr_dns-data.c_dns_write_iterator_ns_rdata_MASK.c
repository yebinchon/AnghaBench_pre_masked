
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* wptr; } ;
typedef TYPE_1__ dns_write_iterator_t ;
struct TYPE_9__ {TYPE_1__ Out; } ;
typedef TYPE_2__ dns_response_t ;
struct TYPE_10__ {int addrs_nsd; int nsdname_len; int nsdname; } ;
typedef TYPE_3__ dns_nameserver_en_t ;


 int FUNC_0 (TYPE_2__*,int ,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 unsigned short FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (dns_response_t *VAR_0, dns_nameserver_en_t *VAR_1, unsigned short *VAR_2) {

  dns_write_iterator_t *VAR_3 = &VAR_0->Out;
  if (FUNC_1 (VAR_3, VAR_1->nsdname, VAR_1->nsdname_len) < 0) { return -1; }
  *VAR_2 = FUNC_2 ((VAR_3->wptr - (unsigned char *) VAR_2) - 2);
  FUNC_0 (VAR_0, VAR_1->nsdname, VAR_1->nsdname_len, &VAR_1->addrs_nsd);
  return 0;
}
