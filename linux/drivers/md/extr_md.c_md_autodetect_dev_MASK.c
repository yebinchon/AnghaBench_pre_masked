
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct detected_devices_node {int list; int dev; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct detected_devices_node* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(dev_t VAR_3)
{
 struct detected_devices_node *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  VAR_4->dev = VAR_3;
  FUNC_2(&VAR_2);
  FUNC_1(&VAR_4->list, &VAR_1);
  FUNC_3(&VAR_2);
 }
}
