
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct lockd_ans {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct lockd_ans*) ;
 int FUNC_1 (struct lockd_ans*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct lockd_ans VAR_5;
 int VAR_6;

 if (VAR_3->uio_resid != sizeof VAR_5)
  return (VAR_0);
 VAR_6 = FUNC_1(&VAR_5, sizeof VAR_5, VAR_3);
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_1, &VAR_5);
 return (VAR_6);
}
