
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_test_device {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct mbox_test_device *VAR_1)
{
 bool VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_1->lock, VAR_3);
 VAR_2 = VAR_0;
 FUNC_1(&VAR_1->lock, VAR_3);

 return VAR_2;
}
