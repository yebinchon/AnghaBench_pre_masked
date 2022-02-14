
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int kobj; TYPE_2__* parent; } ;
struct tpm_chip {int flags; TYPE_3__ dev; TYPE_1__** groups; } ;
struct attribute {char* name; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_4__ {struct attribute** attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (struct tpm_chip*) ;

__attribute__((used)) static int FUNC_2(struct tpm_chip *VAR_3)
{
 struct attribute **VAR_4;
 int VAR_5;

 if (VAR_3->flags & (VAR_1 | VAR_2))
  return 0;

 VAR_5 = FUNC_0(
      &VAR_3->dev.parent->kobj, &VAR_3->dev.kobj, "ppi");
 if (VAR_5 && VAR_5 != -VAR_0)
  return VAR_5;


 for (VAR_4 = VAR_3->groups[0]->attrs; *VAR_4 != ((void*)0); ++VAR_4) {
  VAR_5 = FUNC_0(
      &VAR_3->dev.parent->kobj, &VAR_3->dev.kobj, (*VAR_4)->name);
  if (VAR_5) {
   FUNC_1(VAR_3);
   return VAR_5;
  }
 }

 return 0;
}
