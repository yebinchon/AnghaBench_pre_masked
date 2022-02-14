
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ng_tee_stats {int left2right; int right2left; int left; int right; } ;
struct TYPE_11__ {int typecookie; int const cmd; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
typedef TYPE_7__* sc_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
typedef TYPE_8__* hi_p ;
struct TYPE_18__ {TYPE_6__* dest; } ;
struct TYPE_15__ {int hook; int stats; } ;
struct TYPE_14__ {int hook; int stats; } ;
struct TYPE_13__ {int stats; } ;
struct TYPE_12__ {int stats; } ;
struct TYPE_17__ {TYPE_5__ right; TYPE_4__ left; TYPE_3__ left2right; TYPE_2__ right2left; } ;
struct TYPE_16__ {int hook; } ;
typedef struct ng_mesg* NGI_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ng_mesg*) ;





 int FUNC_1 (struct ng_mesg*) ;
 int FUNC_2 (int,struct ng_mesg*,int ) ;
 TYPE_8__* FUNC_3 (int ) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_7__* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int
FUNC_9(node_p VAR_3, item_p VAR_4, hook_p VAR_5)
{
 const sc_p VAR_6 = FUNC_5(VAR_3);
 struct ng_mesg *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 struct ng_mesg *VAR_9;

 FUNC_0(VAR_4, VAR_9);
 switch (VAR_9->header.typecookie) {
 case 130:
  switch (VAR_9->header.cmd) {
  case 128:
  case 131:
  case 129:
                    {
   struct ng_tee_stats *VAR_10;

                        if (VAR_9->header.cmd != 131) {
                                FUNC_4(VAR_7, VAR_9,
                                    sizeof(*VAR_10), VAR_2);
    if (VAR_7 == ((void*)0)) {
     VAR_8 = VAR_1;
     goto done;
    }
    VAR_10 = (struct ng_tee_stats *)VAR_7->data;
    FUNC_7(&VAR_6->right.stats, &VAR_10->right,
        sizeof(VAR_10->right));
    FUNC_7(&VAR_6->left.stats, &VAR_10->left,
        sizeof(VAR_10->left));
    FUNC_7(&VAR_6->right2left.stats, &VAR_10->right2left,
        sizeof(VAR_10->right2left));
    FUNC_7(&VAR_6->left2right.stats, &VAR_10->left2right,
        sizeof(VAR_10->left2right));
                        }
                        if (VAR_9->header.cmd != 128) {
    FUNC_8(&VAR_6->right.stats,
        sizeof(VAR_6->right.stats));
    FUNC_8(&VAR_6->left.stats,
        sizeof(VAR_6->left.stats));
    FUNC_8(&VAR_6->right2left.stats,
        sizeof(VAR_6->right2left.stats));
    FUNC_8(&VAR_6->left2right.stats,
        sizeof(VAR_6->left2right.stats));
   }
                        break;
      }
  default:
   VAR_8 = VAR_0;
   break;
  }
  break;
 case 132:
  if (VAR_5 == VAR_6->left.hook || VAR_5 == VAR_6->right.hook) {
   hi_p const VAR_11 = FUNC_3(VAR_5);
   if (VAR_11 && VAR_11->dest) {
    NGI_MSG(VAR_12) = VAR_9;
    FUNC_2(VAR_8, VAR_12, VAR_11->dest->hook);
    return (VAR_8);
   }
  }
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }
done:
 FUNC_6(VAR_8, VAR_3, VAR_4, VAR_7);
 FUNC_1(VAR_9);
 return (VAR_8);
}
