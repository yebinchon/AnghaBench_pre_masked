
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vqueue_info {int dummy; } ;
struct pci_vtcon_softc {int dummy; } ;
struct pci_vtcon_port {int vsp_arg; int (* vsp_cb ) (struct pci_vtcon_port*,int ,struct iovec*,int) ;} ;
struct iovec {int dummy; } ;


 int FUNC_0 (int) ;
 struct pci_vtcon_port* FUNC_1 (struct pci_vtcon_softc*,struct vqueue_info*) ;
 int FUNC_2 (struct pci_vtcon_port*,int ,struct iovec*,int) ;
 int FUNC_3 (struct vqueue_info*,int) ;
 int FUNC_4 (struct vqueue_info*,int*,struct iovec*,int,int*) ;
 scalar_t__ FUNC_5 (struct vqueue_info*) ;
 int FUNC_6 (struct vqueue_info*,int,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0, struct vqueue_info *VAR_1)
{
 struct pci_vtcon_softc *VAR_2;
 struct pci_vtcon_port *VAR_3;
 struct iovec VAR_4[1];
 uint16_t VAR_5, VAR_6;
 uint16_t VAR_7[8];

 VAR_2 = VAR_0;
 VAR_3 = FUNC_1(VAR_2, VAR_1);

 while (FUNC_5(VAR_1)) {
  VAR_6 = FUNC_4(VAR_1, &VAR_5, VAR_4, 1, VAR_7);
  FUNC_0(VAR_6 >= 1);
  if (VAR_3 != ((void*)0))
   VAR_3->vsp_cb(VAR_3, VAR_3->vsp_arg, VAR_4, 1);




  FUNC_6(VAR_1, VAR_5, 0);
 }
 FUNC_3(VAR_1, 1);
}
