
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {char* string; int num; } ;
struct value {int type; TYPE_1__ u; int * array; } ;
typedef int FILE ;





 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *,int ,int ) ;

void
FUNC_2(FILE *VAR_0, const struct value *VAR_1, const char *VAR_2, u_int VAR_3)
{

 FUNC_0(VAR_2, VAR_0);
 switch (VAR_1->type) {
 case 130:
  if (VAR_1->array != ((void*)0))
   FUNC_0("<array>", VAR_0);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1->u.num, VAR_3);
  break;
 case 128:
  FUNC_0(VAR_1->u.string, VAR_0);
  break;
 }
}
