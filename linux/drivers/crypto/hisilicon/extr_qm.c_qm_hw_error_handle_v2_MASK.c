
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {int error_mask; scalar_t__ io_base; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hisi_qm*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct hisi_qm *VAR_4)
{
 u32 VAR_5, VAR_6;


 VAR_6 = FUNC_1(VAR_4->io_base + VAR_3);
 VAR_5 = VAR_4->error_mask & VAR_6;

 if (VAR_5) {
  FUNC_0(VAR_4, VAR_5);


  FUNC_2(VAR_5, VAR_4->io_base + VAR_2);

  return VAR_0;
 }

 return VAR_1;
}
