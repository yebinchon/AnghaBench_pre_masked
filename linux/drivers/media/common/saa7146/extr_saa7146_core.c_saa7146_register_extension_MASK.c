
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remove; int probe; int id_table; int name; } ;
struct saa7146_extension {TYPE_1__ driver; int name; int pci_tbl; } ;


 int FUNC_0 (char*,struct saa7146_extension*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(struct saa7146_extension* VAR_2)
{
 FUNC_0("ext:%p\n", VAR_2);

 VAR_2->driver.name = VAR_2->name;
 VAR_2->driver.id_table = VAR_2->pci_tbl;
 VAR_2->driver.probe = VAR_0;
 VAR_2->driver.remove = VAR_1;

 FUNC_2("register extension '%s'\n", VAR_2->name);
 return FUNC_1(&VAR_2->driver);
}
