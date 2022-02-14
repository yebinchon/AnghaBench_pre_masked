
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak8975_data {int flags; int data_ready_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ak8975_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->data_ready_queue,
     FUNC_1(0, &VAR_2->flags),
     VAR_0);
 FUNC_0(0, &VAR_2->flags);

 return VAR_3 > 0 ? 0 : -VAR_1;
}
