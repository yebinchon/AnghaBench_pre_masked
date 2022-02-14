
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx2967_i2c {int error; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int *,int ) ;
 int FUNC_2 (struct zx2967_i2c*,int ) ;
 int FUNC_3 (struct zx2967_i2c*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct zx2967_i2c *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_0(&VAR_4->complete);
 VAR_6 = FUNC_2(VAR_4, VAR_3);
 VAR_6 |= VAR_1;
 FUNC_3(VAR_4, VAR_6, VAR_3);

 VAR_5 = FUNC_1(&VAR_4->complete,
      VAR_2);
 if (VAR_5 == 0)
  return -VAR_0;

 if (VAR_4->error)
  return VAR_4->error;

 return 0;
}
