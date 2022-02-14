
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc1200_saved_state {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int *,struct sc1200_saved_state*) ;
 int FUNC_1 (struct sc1200_saved_state*) ;
 struct sc1200_saved_state* FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 struct sc1200_saved_state *VAR_5 = ((void*)0);
 int VAR_6;






 VAR_6 = FUNC_0(VAR_3, &VAR_2, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_5);

 return VAR_6;
}
