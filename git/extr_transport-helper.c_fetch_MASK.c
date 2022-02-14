
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct transport {scalar_t__ cloning; TYPE_1__* vtable; struct helper_data* data; } ;
struct ref {int status; } ;
struct TYPE_6__ {scalar_t__ choice; } ;
struct TYPE_5__ {scalar_t__ negotiation_tips; TYPE_3__ filter_options; scalar_t__ update_shallow; scalar_t__ check_self_contained_and_connected; } ;
struct helper_data {scalar_t__ import; scalar_t__ fetch; TYPE_2__ transport_options; scalar_t__ check_connectivity; int get_refs_list_called; } ;
struct TYPE_4__ {int (* fetch ) (struct transport*,int,struct ref**) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct transport*) ;
 char* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct transport*,int,struct ref**) ;
 int FUNC_3 (struct transport*,int,struct ref**) ;
 int FUNC_4 (struct transport*) ;
 int FUNC_5 (struct transport*,int ) ;
 scalar_t__ FUNC_6 (struct transport*,int ) ;
 int FUNC_7 (struct transport*,char*,char const*) ;
 int FUNC_8 (struct transport*,int,struct ref**) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct transport *VAR_1,
   int VAR_2, struct ref **VAR_3)
{
 struct helper_data *VAR_4 = VAR_1->data;
 int VAR_5, VAR_6;

 FUNC_4(VAR_1);

 if (FUNC_6(VAR_1, 0)) {
  FUNC_0(VAR_1);
  return VAR_1->vtable->fetch(VAR_1, VAR_2, VAR_3);
 }

 if (!VAR_4->get_refs_list_called)
  FUNC_5(VAR_1, 0);

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (!(VAR_3[VAR_5]->status & VAR_0))
   VAR_6++;

 if (!VAR_6)
  return 0;

 if (VAR_4->check_connectivity &&
     VAR_4->transport_options.check_self_contained_and_connected)
  FUNC_7(VAR_1, "check-connectivity", "true");

 if (VAR_1->cloning)
  FUNC_7(VAR_1, "cloning", "true");

 if (VAR_4->transport_options.update_shallow)
  FUNC_7(VAR_1, "update-shallow", "true");

 if (VAR_4->transport_options.filter_options.choice) {
  const char *VAR_7 = FUNC_1(
   &VAR_4->transport_options.filter_options);
  FUNC_7(VAR_1, "filter", VAR_7);
 }

 if (VAR_4->transport_options.negotiation_tips)
  FUNC_9("Ignoring --negotiation-tip because the protocol does not support it.");

 if (VAR_4->fetch)
  return FUNC_2(VAR_1, VAR_2, VAR_3);

 if (VAR_4->import)
  return FUNC_3(VAR_1, VAR_2, VAR_3);

 return -1;
}
