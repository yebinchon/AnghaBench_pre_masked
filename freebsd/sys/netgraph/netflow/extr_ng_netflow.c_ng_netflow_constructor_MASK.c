
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int fib_export_p ;
struct TYPE_8__ {int maxfibs; int exp_callout; TYPE_2__* ifaces; int nfinfo_act_t; int nfinfo_inact_t; int node; void* fib_data; } ;
struct TYPE_6__ {int conf; } ;
struct TYPE_7__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_4(node_p VAR_8)
{
 priv_p VAR_9;
 int VAR_10;


 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2, VAR_3 | VAR_4);


 VAR_9->maxfibs = VAR_7;
 VAR_9->fib_data = FUNC_2(sizeof(fib_export_p) * VAR_9->maxfibs,
     VAR_2, VAR_3 | VAR_4);


 FUNC_0(VAR_8, VAR_9);
 VAR_9->node = VAR_8;


 VAR_9->nfinfo_inact_t = VAR_1;
 VAR_9->nfinfo_act_t = VAR_0;


 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  VAR_9->ifaces[VAR_10].info.conf = VAR_5;


 FUNC_1(&VAR_9->exp_callout, 1);


 FUNC_3(VAR_9);

 return (0);
}
