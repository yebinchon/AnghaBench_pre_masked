
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_ibi_slot {int work; struct i3c_dev_desc* dev; } ;
struct i3c_dev_desc {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct i3c_dev_desc *VAR_1,
         struct i3c_ibi_slot *VAR_2)
{
 VAR_2->dev = VAR_1;
 FUNC_0(&VAR_2->work, VAR_0);
}
