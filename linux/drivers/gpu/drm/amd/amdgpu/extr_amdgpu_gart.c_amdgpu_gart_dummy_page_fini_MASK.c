
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {scalar_t__ dummy_page_addr; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_2)
{
 if (!VAR_2->dummy_page_addr)
  return;
 FUNC_0(VAR_2->pdev, VAR_2->dummy_page_addr,
         VAR_0, VAR_1);
 VAR_2->dummy_page_addr = 0;
}
