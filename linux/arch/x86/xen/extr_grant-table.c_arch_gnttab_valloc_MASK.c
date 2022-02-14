
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnttab_vm_area {int * ptes; int * area; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int * FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct gnttab_vm_area *VAR_3, unsigned VAR_4)
{
 VAR_3->ptes = FUNC_2(VAR_4, sizeof(*VAR_3->ptes), VAR_1);
 if (VAR_3->ptes == ((void*)0))
  return -VAR_0;

 VAR_3->area = FUNC_0(VAR_2 * VAR_4, VAR_3->ptes);
 if (VAR_3->area == ((void*)0)) {
  FUNC_1(VAR_3->ptes);
  return -VAR_0;
 }

 return 0;
}
