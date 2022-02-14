
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int lock; int flags; } ;
struct dm_target {struct multipath* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_2)
{
 struct multipath *VAR_3 = VAR_2->private;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_0, &VAR_3->flags,
     FUNC_3(VAR_1, &VAR_3->flags));
 FUNC_2(&VAR_3->lock, VAR_4);
}
