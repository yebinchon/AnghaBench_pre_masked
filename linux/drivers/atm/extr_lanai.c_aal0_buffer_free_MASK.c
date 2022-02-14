
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lanai_dev {int pci; int aal0buf; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct lanai_dev *VAR_0)
{
 FUNC_0("aal0_buffer_allocate: freeing AAL0 RX buffer\n");
 FUNC_1(&VAR_0->aal0buf, VAR_0->pci);
}
