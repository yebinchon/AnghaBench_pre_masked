
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* parent; } ;
struct tpm_chip {int flags; TYPE_2__ dev; TYPE_3__** groups; } ;
struct attribute {char* name; } ;
struct TYPE_6__ {struct attribute** attrs; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct tpm_chip *VAR_2)
{
 struct attribute **VAR_3;

 if (VAR_2->flags & (VAR_0 | VAR_1))
  return;

 FUNC_0(&VAR_2->dev.parent->kobj, "ppi");

 for (VAR_3 = VAR_2->groups[0]->attrs; *VAR_3 != ((void*)0); ++VAR_3)
  FUNC_0(&VAR_2->dev.parent->kobj, (*VAR_3)->name);
}
