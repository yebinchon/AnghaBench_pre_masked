
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; struct TYPE_4__* link; } ;
typedef TYPE_1__* Field ;



__attribute__((used)) static Field FUNC_0(const char *VAR_0, Field VAR_1) {
 for ( ; VAR_1; VAR_1 = VAR_1->link)
  if (VAR_1->name == VAR_0)
   break;
 return VAR_1;
}
