
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct zx2967_i2c {int msg_rd; int error; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int *,int ) ;
 int FUNC_2 (struct zx2967_i2c*,scalar_t__) ;
 int FUNC_3 (struct zx2967_i2c*) ;
 int FUNC_4 (struct zx2967_i2c*) ;
 int FUNC_5 (struct zx2967_i2c*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct zx2967_i2c *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = VAR_3->msg_rd;
 int VAR_7;

 FUNC_0(&VAR_3->complete);

 if (VAR_6) {
  FUNC_5(VAR_3, VAR_4 - 1, VAR_2);
 } else {
  VAR_7 = FUNC_3(VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_4(VAR_3);

 VAR_5 = FUNC_1(&VAR_3->complete,
      VAR_1);
 if (VAR_5 == 0)
  return -VAR_0;

 if (VAR_3->error)
  return VAR_3->error;

 return VAR_6 ? FUNC_2(VAR_3, VAR_4) : 0;
}
