
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; int vendor; } ;
struct kgd_dev {int dummy; } ;
struct kfd_device_info {scalar_t__ needs_pci_atomics; } ;
struct kfd_dev {int init_complete; int sram_ecc_flag; int doorbell_available_index; int doorbell_mutex; int compute_profile; struct kfd2kgd_calls const* kfd2kgd; struct pci_dev* pdev; struct kfd_device_info const* device_info; struct kgd_dev* kgd; int pci_atomic_requested; } ;
struct kfd2kgd_calls {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kgd_dev*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct kfd_dev*) ;
 struct kfd_dev* FUNC_5 (int,int ) ;
 struct kfd_device_info* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;

struct kfd_dev *FUNC_9(struct kgd_dev *VAR_2,
 struct pci_dev *VAR_3, const struct kfd2kgd_calls *VAR_4)
{
 struct kfd_dev *VAR_5;
 const struct kfd_device_info *VAR_6 =
     FUNC_6(VAR_3->device);

 if (!VAR_6) {
  FUNC_2(VAR_1, "kgd2kfd_probe failed\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);





 VAR_5->pci_atomic_requested = FUNC_0(VAR_2);
 if (VAR_6->needs_pci_atomics &&
     !VAR_5->pci_atomic_requested) {
  FUNC_3(VAR_1,
    "skipped device %x:%x, PCI rejects atomics\n",
    VAR_3->vendor, VAR_3->device);
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 VAR_5->kgd = VAR_2;
 VAR_5->device_info = VAR_6;
 VAR_5->pdev = VAR_3;
 VAR_5->init_complete = 0;
 VAR_5->kfd2kgd = VAR_4;
 FUNC_1(&VAR_5->compute_profile, 0);

 FUNC_8(&VAR_5->doorbell_mutex);
 FUNC_7(&VAR_5->doorbell_available_index, 0,
  sizeof(VAR_5->doorbell_available_index));

 FUNC_1(&VAR_5->sram_ecc_flag, 0);

 return VAR_5;
}
