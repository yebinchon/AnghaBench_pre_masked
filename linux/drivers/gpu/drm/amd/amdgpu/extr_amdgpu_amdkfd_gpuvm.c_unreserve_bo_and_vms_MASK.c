
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bo_vm_reservation_context {int reserved; int * vm_pd; int * sync; int list; int ticket; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct bo_vm_reservation_context *VAR_0,
     bool VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1)
  VAR_3 = FUNC_0(VAR_0->sync, VAR_2);

 if (VAR_0->reserved)
  FUNC_2(&VAR_0->ticket, &VAR_0->list);
 FUNC_1(VAR_0->vm_pd);

 VAR_0->sync = ((void*)0);

 VAR_0->reserved = 0;
 VAR_0->vm_pd = ((void*)0);

 return VAR_3;
}
