
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_1);
 if (VAR_8)
  return (VAR_8);

 FUNC_0(&VAR_3);
 if (!VAR_2) {
  VAR_8 = 0;
  VAR_2 = 1;
 } else {
  VAR_8 = VAR_0;
 }
 FUNC_1(&VAR_3);

 return (VAR_8);
}
