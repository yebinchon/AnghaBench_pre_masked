
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct picolcd_data* priv; } ;
struct picolcd_data {int lock; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct rc_dev *VAR_1)
{
 struct picolcd_data *VAR_2 = VAR_1->priv;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->lock, VAR_3);
 VAR_2->status |= VAR_0;
 FUNC_1(&VAR_2->lock, VAR_3);
}
