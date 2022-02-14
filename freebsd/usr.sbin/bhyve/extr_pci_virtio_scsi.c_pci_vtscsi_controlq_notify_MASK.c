
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vqueue_info {int dummy; } ;
struct pci_vtscsi_softc {int dummy; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,struct iovec*,int ,size_t) ;
 int FUNC_1 (void*) ;
 size_t FUNC_2 (struct iovec*,int ,void**) ;
 int FUNC_3 (struct pci_vtscsi_softc*,void*,size_t) ;
 int FUNC_4 (struct vqueue_info*,int) ;
 int FUNC_5 (struct vqueue_info*,int *,struct iovec*,int,int *) ;
 scalar_t__ FUNC_6 (struct vqueue_info*) ;
 int FUNC_7 (struct vqueue_info*,int ,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1, struct vqueue_info *VAR_2)
{
 struct pci_vtscsi_softc *VAR_3;
 struct iovec VAR_4[VAR_0];
 uint16_t VAR_5, VAR_6;
 void *VAR_7 = ((void*)0);
 size_t VAR_8;
 int VAR_9;

 VAR_3 = VAR_1;

 while (FUNC_6(VAR_2)) {
  VAR_6 = FUNC_5(VAR_2, &VAR_5, VAR_4, VAR_0, ((void*)0));
  VAR_8 = FUNC_2(VAR_4, VAR_6, &VAR_7);
  VAR_9 = FUNC_3(VAR_3, VAR_7, VAR_8);
  FUNC_0(VAR_7 + VAR_8 - VAR_9, VAR_9, VAR_4, VAR_6,
      VAR_8 - VAR_9);




  FUNC_7(VAR_2, VAR_5, VAR_9);
 }
 FUNC_4(VAR_2, 1);
 FUNC_1(VAR_7);
}
