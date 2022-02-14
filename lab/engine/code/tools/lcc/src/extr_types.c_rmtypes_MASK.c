
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sym; } ;
struct TYPE_6__ {scalar_t__ op; TYPE_2__ u; } ;
struct entry {struct entry* link; TYPE_3__ type; } ;
struct TYPE_4__ {int scope; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct entry**) ;
 int VAR_1 ;
 struct entry** VAR_2 ;

void FUNC_1(int VAR_3) {
 if (VAR_1 >= VAR_3) {
  int VAR_4;
  VAR_1 = 0;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
   struct entry *VAR_5, **VAR_6 = &VAR_2[VAR_4];
   while ((VAR_5 = *VAR_6) != ((void*)0))
    if (VAR_5->type.op == VAR_0)
     VAR_6 = &VAR_5->link;
    else if (VAR_5->type.u.sym && VAR_5->type.u.sym->scope >= VAR_3)
     *VAR_6 = VAR_5->link;
    else {
     if (VAR_5->type.u.sym && VAR_5->type.u.sym->scope > VAR_1)
      VAR_1 = VAR_5->type.u.sym->scope;
     VAR_6 = &VAR_5->link;
    }

  }
 }
}
