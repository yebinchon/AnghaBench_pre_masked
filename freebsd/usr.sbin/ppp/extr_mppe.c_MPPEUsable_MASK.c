
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ recvkeylen; scalar_t__ sendkeylen; } ;
struct TYPE_5__ {scalar_t__* file; } ;
struct radius {TYPE_2__ mppe; TYPE_1__ cfg; } ;
struct lcp {scalar_t__ want_auth; int want_authtype; scalar_t__ his_auth; int his_authtype; } ;
struct fsm {TYPE_3__* link; TYPE_4__* bundle; } ;
struct TYPE_8__ {struct radius radius; } ;
struct TYPE_7__ {struct lcp lcp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct fsm *VAR_2)
{
  int VAR_3;

  struct radius *VAR_4 = &VAR_2->bundle->radius;





  if (*VAR_4->cfg.file) {
    VAR_3 = VAR_4->mppe.sendkeylen && VAR_4->mppe.recvkeylen;
    if (!VAR_3)
      FUNC_0(VAR_0, "MPPE: Not permitted by RADIUS server\n");
  } else

  {
    struct lcp *VAR_5 = &VAR_2->link->lcp;
    VAR_3 = (VAR_5->want_auth == VAR_1 && VAR_5->want_authtype == 0x81) ||
         (VAR_5->his_auth == VAR_1 && VAR_5->his_authtype == 0x81);
    if (!VAR_3)
      FUNC_0(VAR_0, "MPPE: Not usable without CHAP81\n");
  }

  return VAR_3;
}
