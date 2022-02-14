
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gp2ap020a00f_data {int flags; int data_ready_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gp2ap020a00f_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->data_ready_queue,
     FUNC_1(VAR_2,
       &VAR_3->flags),
     VAR_1);
 FUNC_0(VAR_2, &VAR_3->flags);

 return VAR_4 > 0 ? 0 : -VAR_0;
}
