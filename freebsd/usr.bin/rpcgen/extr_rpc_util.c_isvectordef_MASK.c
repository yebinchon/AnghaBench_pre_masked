
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int relation ;
struct TYPE_4__ {char* old_type; int rel; } ;
struct TYPE_5__ {TYPE_1__ ty; } ;
struct TYPE_6__ {TYPE_2__ def; } ;
typedef TYPE_3__ definition ;


 scalar_t__ FUNC_0 (int ,char const*,int ) ;




 int VAR_0 ;
 int FUNC_1 (char const*,char*) ;
 int VAR_1 ;

int
FUNC_2(const char *VAR_2, relation VAR_3)
{
 definition *VAR_4;

 for (;;) {
  switch (VAR_3) {
  case 128:
   return (!FUNC_1(VAR_2, "string"));
  case 130:
   return (0);
  case 129:
   return (0);
  case 131:
   VAR_4 = (definition *) FUNC_0(VAR_0, VAR_2, VAR_1);
   if (VAR_4 == ((void*)0)) {
    return (0);
   }
   VAR_2 = VAR_4->def.ty.old_type;
   VAR_3 = VAR_4->def.ty.rel;
  }
 }

 return (0);
}
