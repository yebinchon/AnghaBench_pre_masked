
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int openers; } ;
struct gendisk {struct mddev* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mddev*) ;

__attribute__((used)) static void FUNC_3(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct mddev *VAR_2 = VAR_0->private_data;

 FUNC_0(!VAR_2);
 FUNC_1(&VAR_2->openers);
 FUNC_2(VAR_2);
}
