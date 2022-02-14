
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {scalar_t__ removable; int access; } ;
struct gendisk {struct pd_unit* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pd_unit*,int ) ;

__attribute__((used)) static void FUNC_3(struct gendisk *VAR_2, fmode_t VAR_3)
{
 struct pd_unit *VAR_4 = VAR_2->private_data;

 FUNC_0(&VAR_1);
 if (!--VAR_4->access && VAR_4->removable)
  FUNC_2(VAR_4, VAR_0);
 FUNC_1(&VAR_1);
}
