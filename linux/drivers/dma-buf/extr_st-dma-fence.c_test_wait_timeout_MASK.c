
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_timer {int f; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(void *VAR_5)
{
 struct wait_timer VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_10(&VAR_6.timer, VAR_4, 0);

 VAR_6.f = FUNC_5();
 if (!VAR_6.f)
  return -VAR_1;

 if (FUNC_4(VAR_6.f, 0, 1) != -VAR_2) {
  FUNC_7("Wait reported complete before being signaled\n");
  goto err_free;
 }

 FUNC_6(&VAR_6.timer, VAR_3 + 1);

 if (FUNC_4(VAR_6.f, 0, 2) == -VAR_2) {
  if (FUNC_9(&VAR_6.timer)) {
   FUNC_8("Timer did not fire within the jiffie!\n");
   VAR_7 = 0;
  } else {
   FUNC_7("Wait reported incomplete after timeout\n");
  }
  goto err_free;
 }

 VAR_7 = 0;
err_free:
 FUNC_0(&VAR_6.timer);
 FUNC_1(&VAR_6.timer);
 FUNC_3(VAR_6.f);
 FUNC_2(VAR_6.f);
 return VAR_7;
}
