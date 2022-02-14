
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev_family; int pdev; } ;
struct ocrdma_dev {int asic_id; TYPE_1__ nic_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static inline u8 FUNC_1(struct ocrdma_dev *VAR_3)
{
 if (VAR_3->nic_info.dev_family == 0xF && !VAR_3->asic_id) {
  FUNC_0(
   VAR_3->nic_info.pdev,
   VAR_2, &VAR_3->asic_id);
 }

 return (VAR_3->asic_id & VAR_0) >>
    VAR_1;
}
