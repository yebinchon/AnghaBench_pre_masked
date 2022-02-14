
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_mods {int (* func ) (struct key_value*,struct key_value*,size_t) ;scalar_t__ rflag; } ;
struct keys_array {int dummy; } ;
struct key_value {int dummy; } ;
struct TYPE_2__ {struct sort_mods sm; } ;


 struct key_value* FUNC_0 (struct keys_array*,size_t) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct key_value*,struct key_value*,size_t) ;
 int FUNC_2 (struct key_value*,struct key_value*,size_t) ;

int
FUNC_3(struct keys_array *VAR_2, struct keys_array *VAR_3, size_t VAR_4)
{
 struct key_value *VAR_5, *VAR_6;
 struct sort_mods *VAR_7;
 int VAR_8 = 0;

 for (size_t VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
  VAR_5 = FUNC_0(VAR_2, VAR_9);
  VAR_6 = FUNC_0(VAR_3, VAR_9);
  VAR_7 = &(VAR_0[VAR_9].sm);

  if (VAR_7->rflag)
   VAR_8 = VAR_7->func(VAR_6, VAR_5, VAR_4);
  else
   VAR_8 = VAR_7->func(VAR_5, VAR_6, VAR_4);

  if (VAR_8)
   break;


  VAR_4 = 0;
 }
 return (VAR_8);
}
