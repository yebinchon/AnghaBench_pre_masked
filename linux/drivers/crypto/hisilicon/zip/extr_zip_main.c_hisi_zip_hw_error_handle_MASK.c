
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ io_base; } ;
struct hisi_zip {TYPE_1__ qm; } ;
typedef int pci_ers_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hisi_zip*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct hisi_zip *VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_1(VAR_4->qm.io_base + VAR_1);

 if (VAR_5) {
  FUNC_0(VAR_4, VAR_5);

  FUNC_2(VAR_5, VAR_4->qm.io_base + VAR_0);

  return VAR_2;
 }

 return VAR_3;
}
