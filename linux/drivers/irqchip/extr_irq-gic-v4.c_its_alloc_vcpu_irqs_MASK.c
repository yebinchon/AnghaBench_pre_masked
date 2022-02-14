
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_vm {int nr_vpes; scalar_t__ fwnode; scalar_t__ domain; TYPE_1__** vpes; } ;
struct TYPE_2__ {int idai; int irq; struct its_vm* its_vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int,int,int ,struct its_vm*,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,scalar_t__,int ,struct its_vm*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

int FUNC_6(struct its_vm *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_5->fwnode = FUNC_1("GICv4-vpe",
            FUNC_5(VAR_2));
 if (!VAR_5->fwnode)
  goto err;

 VAR_5->domain = FUNC_2(VAR_3, 0, VAR_5->nr_vpes,
       VAR_5->fwnode, VAR_4,
       VAR_5);
 if (!VAR_5->domain)
  goto err;

 for (VAR_7 = 0; VAR_7 < VAR_5->nr_vpes; VAR_7++) {
  VAR_5->vpes[VAR_7]->its_vm = VAR_5;
  VAR_5->vpes[VAR_7]->idai = 1;
 }

 VAR_6 = FUNC_0(VAR_5->domain, -1, VAR_5->nr_vpes,
            VAR_1, VAR_5,
            0, ((void*)0));
 if (VAR_6 <= 0)
  goto err;

 for (VAR_7 = 0; VAR_7 < VAR_5->nr_vpes; VAR_7++)
  VAR_5->vpes[VAR_7]->irq = VAR_6 + VAR_7;

 return 0;

err:
 if (VAR_5->domain)
  FUNC_4(VAR_5->domain);
 if (VAR_5->fwnode)
  FUNC_3(VAR_5->fwnode);

 return -VAR_0;
}
