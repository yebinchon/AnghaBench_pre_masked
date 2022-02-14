
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_dev {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct qup_i2c_dev*,int ) ;
 scalar_t__ FUNC_1 (struct qup_i2c_dev*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct qup_i2c_dev *VAR_2, u32 VAR_3)
{
 if (FUNC_1(VAR_2) != 0)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_2->base + VAR_1);

 if (FUNC_0(VAR_2, VAR_3) != 0)
  return -VAR_0;
 return 0;
}
