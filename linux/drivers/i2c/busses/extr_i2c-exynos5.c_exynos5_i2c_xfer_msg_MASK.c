
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct exynos5_i2c {int state; int dev; int msg_complete; scalar_t__ trans_done; scalar_t__ msg_ptr; struct i2c_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct exynos5_i2c*,int) ;
 int FUNC_2 (struct exynos5_i2c*) ;
 int FUNC_3 (struct exynos5_i2c*) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct exynos5_i2c *VAR_3,
         struct i2c_msg *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_3->msg = VAR_4;
 VAR_3->msg_ptr = 0;
 VAR_3->trans_done = 0;

 FUNC_4(&VAR_3->msg_complete);

 FUNC_1(VAR_3, VAR_5);

 VAR_6 = FUNC_5(&VAR_3->msg_complete,
           VAR_1);
 if (VAR_6 == 0)
  VAR_7 = -VAR_0;
 else
  VAR_7 = VAR_3->state;





 if (VAR_7 == 0 && VAR_5)
  VAR_7 = FUNC_3(VAR_3);

 if (VAR_7 < 0) {
  FUNC_2(VAR_3);
  if (VAR_7 == -VAR_0)
   FUNC_0(VAR_3->dev, "%s timeout\n",
     (VAR_4->flags & VAR_2) ? "rx" : "tx");
 }


 return VAR_7;
}
