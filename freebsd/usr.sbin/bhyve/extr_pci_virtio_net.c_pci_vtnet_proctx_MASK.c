
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vqueue_info {int dummy; } ;
struct pci_vtnet_softc {int vsc_be; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct iovec*,int) ;
 int FUNC_2 (struct vqueue_info*,int *,struct iovec*,int,int *) ;
 int FUNC_3 (struct vqueue_info*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct pci_vtnet_softc *VAR_1, struct vqueue_info *VAR_2)
{
 struct iovec VAR_3[VAR_0 + 1];
 uint16_t VAR_4;
 ssize_t VAR_5;
 int VAR_6;





 VAR_6 = FUNC_2(VAR_2, &VAR_4, VAR_3, VAR_0, ((void*)0));
 FUNC_0(VAR_6 >= 1 && VAR_6 <= VAR_0);

 VAR_5 = FUNC_1(VAR_1->vsc_be, VAR_3, VAR_6);


 FUNC_3(VAR_2, VAR_4, VAR_5 > 0 ? VAR_5 : 0);
}
