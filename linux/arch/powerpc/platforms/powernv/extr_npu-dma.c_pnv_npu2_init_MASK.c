
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {struct npu* npu; } ;
struct npu {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct npu*) ;
 struct npu* FUNC_2 (int,int ) ;

int FUNC_3(struct pci_controller *VAR_4)
{
 static int VAR_5;
 struct npu *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5++;
 if (FUNC_0(VAR_5 >= VAR_3)) {
  VAR_7 = -VAR_1;
  goto fail_exit;
 }
 VAR_6->index = VAR_5;
 VAR_4->npu = VAR_6;

 return 0;

fail_exit:
 FUNC_1(VAR_6);
 return VAR_7;
}
