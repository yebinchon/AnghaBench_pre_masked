
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct cdev {int dummy; } ;
struct __lock_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 struct __lock_msg* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct __lock_msg*,int ) ;
 int FUNC_3 (struct __lock_msg*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *,int,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct __lock_msg*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 int VAR_10;
 struct __lock_msg *VAR_11;

 if (VAR_8->uio_resid != sizeof *VAR_11)
  return (VAR_0);
 VAR_11 = ((void*)0);
 VAR_10 = 0;
 FUNC_5(&VAR_6);
 while (FUNC_0(&VAR_5)) {
  VAR_10 = FUNC_4(&VAR_5, &VAR_6, VAR_3 | VAR_2,
      "nfslockd", 0);
  if (VAR_10)
   break;
 }
 if (!VAR_10) {
  VAR_11 = FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, VAR_11, VAR_4);
 }
 FUNC_6(&VAR_6);
 if (!VAR_10) {
  VAR_10 = FUNC_7(VAR_11, sizeof *VAR_11, VAR_8);
  FUNC_3(VAR_11, VAR_1);
 }
 return (VAR_10);
}
