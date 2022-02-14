
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ng_tcpmss_hookstat {int dummy; } ;
struct ng_tcpmss_config {char* inHook; char* outHook; int maxMSS; } ;
struct TYPE_6__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef TYPE_2__* hpriv_p ;
typedef int * hook_p ;
struct TYPE_8__ {int maxMSS; } ;
struct TYPE_7__ {TYPE_3__ stats; int * outHook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct ng_mesg*) ;





 int FUNC_2 (struct ng_mesg*) ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int * FUNC_8 (int ,char*) ;

__attribute__((used)) static int
FUNC_9
(node_p VAR_5, item_p VAR_6, hook_p VAR_7)
{
 struct ng_mesg *VAR_8, *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 FUNC_1(VAR_6, VAR_8);

 switch (VAR_8->header.typecookie) {
 case 130:
  switch (VAR_8->header.cmd) {
  case 128:
  case 132:
  case 129:
      {
   hook_p VAR_11;
   hpriv_p VAR_12;


   if (VAR_8->header.arglen != VAR_4)
    FUNC_0(VAR_0);


   VAR_11 = FUNC_8(VAR_5, (char *)VAR_8->data);
   if (VAR_11 == ((void*)0))
    FUNC_0(VAR_1);

   VAR_12 = FUNC_3(VAR_11);


   if (VAR_8->header.cmd != 132) {
    FUNC_4(VAR_9, VAR_8,
        sizeof(struct ng_tcpmss_hookstat), VAR_3);
    if (VAR_9 == ((void*)0))
     FUNC_0(VAR_2);
    FUNC_6(&VAR_12->stats, VAR_9->data,
        sizeof(struct ng_tcpmss_hookstat));
   }

   if (VAR_8->header.cmd != 128)
    FUNC_7(&VAR_12->stats,
        sizeof(struct ng_tcpmss_hookstat));
   break;
      }
  case 131:
      {
   struct ng_tcpmss_config *VAR_13;
   hook_p VAR_14, VAR_15;
   hpriv_p VAR_16;


   if (VAR_8->header.arglen !=
       sizeof(struct ng_tcpmss_config))
    FUNC_0(VAR_0);

   VAR_13 = (struct ng_tcpmss_config *)VAR_8->data;
   VAR_14 = FUNC_8(VAR_5, VAR_13->inHook);
   VAR_15 = FUNC_8(VAR_5, VAR_13->outHook);
   if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
    FUNC_0(VAR_1);


   VAR_16 = FUNC_3(VAR_14);
   VAR_16->outHook = VAR_15;
   VAR_16->stats.maxMSS = VAR_13->maxMSS;

   break;
       }
  default:
   VAR_10 = VAR_0;
   break;
  }
  break;
 default:
  VAR_10 = VAR_0;
  break;
 }

done:
 FUNC_5(VAR_10, VAR_5, VAR_6, VAR_9);
 FUNC_2(VAR_8);

 return (VAR_10);
}
