
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_3, int VAR_4, int VAR_5, struct thread *VAR_6)
{
 int VAR_7;


 FUNC_0(&VAR_2);
 if (!VAR_1) {
  VAR_7 = 0;
  VAR_1 = 1;
 } else
  VAR_7 = VAR_0;
 FUNC_1(&VAR_2);

 return (VAR_7);
}
