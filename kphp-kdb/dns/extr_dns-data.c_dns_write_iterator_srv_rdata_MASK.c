
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* wptr; } ;
typedef TYPE_1__ dns_write_iterator_t ;
struct TYPE_9__ {int target_len; int target; int port; int weight; int priority; } ;
typedef TYPE_2__ dns_srv_t ;
struct TYPE_10__ {TYPE_1__ Out; } ;
typedef TYPE_3__ dns_response_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 unsigned short FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (dns_response_t *VAR_0, dns_srv_t *VAR_1, unsigned short *VAR_2) {
  dns_write_iterator_t *VAR_3 = &VAR_0->Out;
  if (FUNC_1 (VAR_3, VAR_1->priority) < 0) { return -1; }
  if (FUNC_1 (VAR_3, VAR_1->weight) < 0) { return -1; }
  if (FUNC_1 (VAR_3, VAR_1->port) < 0) { return -1; }
  if (FUNC_0 (VAR_3, VAR_1->target, VAR_1->target_len) < 0) { return -1; }
  *VAR_2 = FUNC_2 ((VAR_3->wptr - (unsigned char *) VAR_2) - 2);
  return 0;
}
