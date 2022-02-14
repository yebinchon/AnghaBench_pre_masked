
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table_size; scalar_t__ table_addr; int * ptr; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ gart; int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,void*,scalar_t__) ;
 int FUNC_1 (unsigned long,int) ;

void FUNC_2(struct radeon_device *VAR_5)
{
 if (VAR_5->gart.ptr == ((void*)0)) {
  return;
 }







 FUNC_0(VAR_5->pdev, VAR_5->gart.table_size,
       (void *)VAR_5->gart.ptr,
       VAR_5->gart.table_addr);
 VAR_5->gart.ptr = ((void*)0);
 VAR_5->gart.table_addr = 0;
}
