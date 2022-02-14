
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2c {int msg_complete; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct img_i2c*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct img_i2c *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_2->msg_complete);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->lock, VAR_3);

 VAR_4 = FUNC_4(&VAR_2->msg_complete,
           VAR_1);
 if (VAR_4 == 0)
  return -VAR_0;
 return 0;
}
