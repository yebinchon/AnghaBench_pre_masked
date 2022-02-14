
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_dev {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct qup_i2c_dev *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_6 = VAR_3 + VAR_5 * 4;
 for (;;) {
  VAR_7 = FUNC_0(VAR_4->base + VAR_2);
  if (!(VAR_7 & VAR_1))
   break;

  if (FUNC_1(VAR_3, VAR_6))
   VAR_8 = -VAR_0;

  FUNC_2(VAR_5, VAR_5 * 2);
 }

 return VAR_8;
}
