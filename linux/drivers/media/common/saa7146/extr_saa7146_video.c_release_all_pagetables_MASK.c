
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {int pci; } ;
struct saa7146_buf {int * pt; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct saa7146_dev *VAR_0, struct saa7146_buf *VAR_1)
{
 FUNC_0(VAR_0->pci, &VAR_1->pt[0]);
 FUNC_0(VAR_0->pci, &VAR_1->pt[1]);
 FUNC_0(VAR_0->pci, &VAR_1->pt[2]);
}
