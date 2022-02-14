
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct kfd_vm_fault_info {int page_addr; scalar_t__ prot_write; scalar_t__ prot_read; scalar_t__ prot_valid; scalar_t__ mc_id; scalar_t__ vmid; int member_0; } ;
struct kfd_dev {int dqm; } ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (scalar_t__,int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct kfd_dev*,scalar_t__,struct kfd_vm_fault_info*) ;

__attribute__((used)) static void FUNC_10(struct kfd_dev *VAR_7,
     const uint32_t *VAR_8)
{
 uint16_t VAR_9, VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_9 = FUNC_4(VAR_8);
 VAR_10 = FUNC_0(VAR_8);
 VAR_11 = FUNC_2(VAR_8);
 VAR_12 = FUNC_5(VAR_8);
 VAR_13 = FUNC_1(VAR_8);

 if (VAR_9 == VAR_4)
  FUNC_7(VAR_11, VAR_13, 32);
 else if (VAR_9 == VAR_5)
  FUNC_7(VAR_11, VAR_13 & 0xfffffff, 28);
 else if (VAR_9 == VAR_6)
  FUNC_7(VAR_11, VAR_13 & 0xffffff, 24);
 else if (VAR_9 == VAR_3)
  FUNC_8(VAR_11);
 else if (VAR_10 == VAR_1 ||
  VAR_10 == VAR_2 ||
   VAR_10 == VAR_0) {
  struct kfd_vm_fault_info VAR_14 = {0};
  uint16_t VAR_15 = FUNC_3(VAR_8);

  VAR_14.vmid = VAR_12;
  VAR_14.mc_id = VAR_10;
  VAR_14.page_addr = VAR_8[4] |
   (uint64_t)(VAR_8[5] & 0xf) << 32;
  VAR_14.prot_valid = VAR_15 & 0x08;
  VAR_14.prot_read = VAR_15 & 0x10;
  VAR_14.prot_write = VAR_15 & 0x20;

  FUNC_6(VAR_7->dqm, VAR_11);
  FUNC_9(VAR_7, VAR_11, &VAR_14);
 }
}
