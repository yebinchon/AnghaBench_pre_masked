
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak8975_data {int data_ready_queue; int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ak8975_data *VAR_3 = VAR_2;

 FUNC_0(0, &VAR_3->flags);
 FUNC_1(&VAR_3->data_ready_queue);

 return VAR_0;
}
