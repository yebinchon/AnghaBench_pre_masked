
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int dummy; } ;
struct eeh_dev {int* config_space; } ;
struct TYPE_2__ {int (* write_config ) (struct pci_dn*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct eeh_dev*) ;
 struct pci_dn* FUNC_2 (struct eeh_dev*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (struct pci_dn*,int,int,int) ;
 int FUNC_4 (struct pci_dn*,int,int,int) ;
 int FUNC_5 (struct pci_dn*,int,int,int) ;
 int FUNC_6 (struct pci_dn*,int,int,int) ;
 int FUNC_7 (struct pci_dn*,int,int,int) ;
 int FUNC_8 (struct pci_dn*,int,int,int) ;

__attribute__((used)) static void FUNC_9(struct eeh_dev *VAR_6)
{
 struct pci_dn *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;





 for (VAR_8 = 4; VAR_8 < 13; VAR_8++)
  VAR_5->write_config(VAR_7, VAR_8*4, 4, VAR_6->config_space[VAR_8]);

 VAR_5->write_config(VAR_7, 14*4, 4, VAR_6->config_space[14]);


 VAR_5->write_config(VAR_7, VAR_0, 1,
                FUNC_0(VAR_0));
        VAR_5->write_config(VAR_7, VAR_4, 1,
                FUNC_0(VAR_4));

 VAR_5->write_config(VAR_7, 15*4, 4, VAR_6->config_space[15]);


 VAR_5->write_config(VAR_7, VAR_1, 4, VAR_6->config_space[1] |
         VAR_3 | VAR_2);


 FUNC_1(VAR_6);
}
