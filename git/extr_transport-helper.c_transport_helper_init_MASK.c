
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int * smart_options; int * vtable; struct helper_data* data; } ;
struct helper_data {char const* name; int transport_options; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 struct helper_data* FUNC_2 (int,int) ;

int FUNC_3(struct transport *VAR_2, const char *VAR_3)
{
 struct helper_data *VAR_4 = FUNC_2(1, sizeof(*VAR_4));
 VAR_4->name = VAR_3;

 FUNC_1(VAR_3);

 if (FUNC_0("GIT_TRANSPORT_HELPER_DEBUG"))
  VAR_0 = 1;

 VAR_2->data = VAR_4;
 VAR_2->vtable = &VAR_1;
 VAR_2->smart_options = &(VAR_4->transport_options);
 return 0;
}
