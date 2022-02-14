
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubd {scalar_t__ count; } ;
struct gendisk {struct ubd* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubd*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct ubd *VAR_3 = VAR_1->private_data;

 FUNC_0(&VAR_0);
 if(--VAR_3->count == 0)
  FUNC_2(VAR_3);
 FUNC_1(&VAR_0);
}
