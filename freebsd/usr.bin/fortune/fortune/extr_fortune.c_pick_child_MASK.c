
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int str_numstr; } ;
struct TYPE_7__ {unsigned int num_children; TYPE_1__ tbl; int name; struct TYPE_7__* next; struct TYPE_7__* child; } ;
typedef TYPE_2__ FILEDESC ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static FILEDESC *
FUNC_3(FILEDESC *VAR_2)
{
 FILEDESC *VAR_3;
 int VAR_4;

 if (VAR_0) {
  VAR_4 = FUNC_1(VAR_2->num_children);
  FUNC_0(1, (VAR_1, "    choice = %d (of %d)\n",
       VAR_4, VAR_2->num_children));
  for (VAR_3 = VAR_2->child; VAR_4--; VAR_3 = VAR_3->next)
   continue;
  FUNC_0(1, (VAR_1, "    using %s\n", VAR_3->name));
  return (VAR_3);
 }
 else {
  FUNC_2(VAR_2);
  VAR_4 = FUNC_1(VAR_2->tbl.str_numstr);
  FUNC_0(1, (VAR_1, "    choice = %d (of %u)\n",
       VAR_4, VAR_2->tbl.str_numstr));
  for (VAR_3 = VAR_2->child; (unsigned)VAR_4 >= VAR_3->tbl.str_numstr;
       VAR_3 = VAR_3->next) {
   VAR_4 -= VAR_3->tbl.str_numstr;
   FUNC_0(1, (VAR_1, "\tskip %s, %u (choice = %d)\n",
        VAR_3->name, VAR_3->tbl.str_numstr, VAR_4));
  }
  FUNC_0(1, (VAR_1, "    using %s, %u\n", VAR_3->name,
       VAR_3->tbl.str_numstr));
  return (VAR_3);
 }
}
