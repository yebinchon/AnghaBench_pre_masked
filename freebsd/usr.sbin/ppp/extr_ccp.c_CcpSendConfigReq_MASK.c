
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct fsm {int reqid; TYPE_2__* link; int bundle; } ;
struct TYPE_11__ {int id; int len; } ;
struct TYPE_13__ {TYPE_3__ hdr; } ;
struct ccp_opt {int algorithm; struct ccp_opt* next; TYPE_5__ val; } ;
struct TYPE_12__ {int algorithm; struct ccp_opt* opt; } ;
struct TYPE_14__ {int * neg; } ;
struct ccp {scalar_t__ his_reject; int my_proto; TYPE_4__ out; TYPE_6__ cfg; } ;
struct TYPE_9__ {int (* OptInit ) (int ,TYPE_5__*,TYPE_6__*) ;} ;
struct TYPE_15__ {size_t Neg; int id; TYPE_1__ o; scalar_t__ (* Usable ) (struct fsm*) ;} ;
struct TYPE_10__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct ccp*,int) ;
 TYPE_8__** VAR_4 ;
 struct ccp* FUNC_2 (struct fsm*) ;
 int FUNC_3 (struct fsm*,int ,int ,int *,int,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,TYPE_5__*,int) ;
 scalar_t__ FUNC_7 (struct fsm*) ;
 int FUNC_8 (int ,TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_9(struct fsm *VAR_5)
{

  struct ccp *VAR_6 = FUNC_2(VAR_5);
  struct ccp_opt **VAR_7;
  u_char *VAR_8, VAR_9[100];
  unsigned VAR_10;
  int VAR_11;

  VAR_8 = VAR_9;
  VAR_7 = &VAR_6->out.opt;
  VAR_11 = VAR_6->his_reject == 0 && VAR_6->out.opt == ((void*)0);
  VAR_6->my_proto = -1;
  VAR_6->out.algorithm = -1;
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
    if (FUNC_0(VAR_6->cfg.neg[VAR_4[VAR_10]->Neg]) &&
        !FUNC_1(VAR_6, VAR_4[VAR_10]->id) &&
        (*VAR_4[VAR_10]->Usable)(VAR_5)) {

      if (!VAR_11)
        for (VAR_7 = &VAR_6->out.opt; *VAR_7 != ((void*)0); VAR_7 = &(*VAR_7)->next)
          if ((*VAR_7)->val.hdr.id == VAR_4[VAR_10]->id && (*VAR_7)->algorithm == (int)VAR_10)
            break;

      if (VAR_11 || *VAR_7 == ((void*)0)) {
        if ((*VAR_7 = (struct ccp_opt *)FUNC_5(sizeof(struct ccp_opt))) == ((void*)0)) {
   FUNC_4(VAR_1, "%s: Not enough memory for CCP REQ !\n",
       VAR_5->link->name);
   break;
 }
        (*VAR_7)->val.hdr.id = VAR_4[VAR_10]->id;
        (*VAR_7)->val.hdr.len = 2;
        (*VAR_7)->next = ((void*)0);
        (*VAR_7)->algorithm = VAR_10;
        (*VAR_4[VAR_10]->o.OptInit)(VAR_5->bundle, &(*VAR_7)->val, &VAR_6->cfg);
      }

      if (VAR_8 + (*VAR_7)->val.hdr.len > VAR_9 + sizeof VAR_9) {
        FUNC_4(VAR_1, "%s: CCP REQ buffer overrun !\n", VAR_5->link->name);
        break;
      }
      FUNC_6(VAR_8, &(*VAR_7)->val, (*VAR_7)->val.hdr.len);
      VAR_8 += (*VAR_7)->val.hdr.len;

      VAR_6->my_proto = (*VAR_7)->val.hdr.id;
      VAR_6->out.algorithm = VAR_10;

      if (VAR_11)
        VAR_7 = &(*VAR_7)->next;
    }

  FUNC_3(VAR_5, VAR_0, VAR_5->reqid, VAR_9, VAR_8 - VAR_9, VAR_2);
}
