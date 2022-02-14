
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct pardev_cb {int flags; int irq_func; } ;
typedef int parkbd_parport_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pardev_cb*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct parport*,char*,struct pardev_cb*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct parport *VAR_7)
{
 struct pardev_cb VAR_8;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.irq_func = VAR_5;
 VAR_8.flags = VAR_2;

 VAR_4 = FUNC_2(VAR_7, "parkbd",
      &VAR_8, 0);

 if (!VAR_4)
  return -VAR_1;

 if (FUNC_1(VAR_4)) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }

 VAR_6 = VAR_3;

 return 0;
}
