
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct netflow_export_item {int item9_opt; int * item9; int * item; } ;
struct TYPE_11__ {scalar_t__ version; } ;
struct flow_entry {TYPE_1__ f; } ;
typedef TYPE_2__* priv_p ;
typedef int fib_export_p ;
struct TYPE_12__ {int zone6; int zone; int nfinfo_export9_failed; int * export9; int nfinfo_export_failed; int * export; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,struct flow_entry*) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,struct flow_entry*) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int) ;
 int * FUNC_4 (TYPE_2__*,int ,int *) ;
 int * FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int ,int *,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_9 (int ,struct flow_entry*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(priv_p VAR_3, fib_export_p VAR_4, struct flow_entry *VAR_5, int VAR_6)
{
 struct netflow_export_item VAR_7;
 uint16_t VAR_8 = VAR_5->f.version;

 if ((VAR_3->export != ((void*)0)) && (VAR_8 == VAR_1)) {
  VAR_7.item = FUNC_5(VAR_3, VAR_4);
  if (VAR_7.item == ((void*)0)) {
   VAR_3->nfinfo_export_failed++;
   if (VAR_3->export9 != ((void*)0))
    VAR_3->nfinfo_export9_failed++;

   FUNC_9(VAR_3->zone, VAR_5, VAR_3);
   return;
  }

  if (FUNC_2(VAR_7.item, VAR_5) > 0)
   FUNC_3(VAR_3, VAR_4, VAR_7.item, VAR_6);
  else
   FUNC_8(VAR_3, VAR_4, VAR_7.item, VAR_2);
 }

 if (VAR_3->export9 != ((void*)0)) {
  VAR_7.item9 = FUNC_4(VAR_3, VAR_4, &VAR_7.item9_opt);
  if (VAR_7.item9 == ((void*)0)) {
   VAR_3->nfinfo_export9_failed++;
   if (VAR_8 == VAR_1)
    FUNC_9(VAR_3->zone, VAR_5, VAR_3);




   else
    FUNC_6("ng_netflow: Unknown IP proto: %d",
        VAR_8);
   return;
  }

  if (FUNC_0(VAR_7.item9, VAR_7.item9_opt, VAR_5) > 0)
   FUNC_1(VAR_3, VAR_4, VAR_7.item9, VAR_7.item9_opt, VAR_6);
  else
   FUNC_7(VAR_3, VAR_4, VAR_7.item9,
       VAR_7.item9_opt, VAR_2);
 }

 if (VAR_8 == VAR_1)
  FUNC_9(VAR_3->zone, VAR_5, VAR_3);




}
