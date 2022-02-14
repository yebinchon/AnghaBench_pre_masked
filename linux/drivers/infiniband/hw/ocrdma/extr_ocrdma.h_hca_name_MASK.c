
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; } ;
struct TYPE_3__ {int device; } ;


 char* VAR_0 ;
 char* VAR_1 ;



__attribute__((used)) static inline char *FUNC_0(struct ocrdma_dev *VAR_2)
{
 switch (VAR_2->nic_info.pdev->device) {
 case 129:
 case 128:
  return VAR_0;
 default:
  return VAR_1;
 }
}
