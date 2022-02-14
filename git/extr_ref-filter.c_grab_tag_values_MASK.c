
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tag {TYPE_1__* tagged; int tag; } ;
struct object {int dummy; } ;
struct atom_value {void* s; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int oid; int type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct atom_value *VAR_2, int VAR_3, struct object *VAR_4)
{
 int VAR_5;
 struct tag *VAR_6 = (struct tag *) VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  const char *VAR_7 = VAR_0[VAR_5].name;
  struct atom_value *VAR_8 = &VAR_2[VAR_5];
  if (!!VAR_3 != (*VAR_7 == '*'))
   continue;
  if (VAR_3)
   VAR_7++;
  if (!FUNC_1(VAR_7, "tag"))
   VAR_8->s = FUNC_3(VAR_6->tag);
  else if (!FUNC_1(VAR_7, "type") && VAR_6->tagged)
   VAR_8->s = FUNC_3(FUNC_2(VAR_6->tagged->type));
  else if (!FUNC_1(VAR_7, "object") && VAR_6->tagged)
   VAR_8->s = FUNC_3(FUNC_0(&VAR_6->tagged->oid));
 }
}
