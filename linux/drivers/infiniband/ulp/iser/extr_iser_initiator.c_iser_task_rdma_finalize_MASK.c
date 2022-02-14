
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_iser_task {int * prot; int * data; scalar_t__* dir; int sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct iscsi_iser_task*,int *,int ) ;
 int FUNC_1 (struct iscsi_iser_task*,size_t) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct iscsi_iser_task *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4->sc);

 if (VAR_4->dir[VAR_2]) {
  FUNC_1(VAR_4, VAR_2);
  FUNC_0(VAR_4,
      &VAR_4->data[VAR_2],
      VAR_0);
  if (VAR_5)
   FUNC_0(VAR_4,
       &VAR_4->prot[VAR_2],
       VAR_0);
 }

 if (VAR_4->dir[VAR_3]) {
  FUNC_1(VAR_4, VAR_3);
  FUNC_0(VAR_4,
      &VAR_4->data[VAR_3],
      VAR_1);
  if (VAR_5)
   FUNC_0(VAR_4,
       &VAR_4->prot[VAR_3],
       VAR_1);
 }
}
