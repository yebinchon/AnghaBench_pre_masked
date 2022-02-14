
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct davinci_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct davinci_i2c_dev*,int ) ;
 int FUNC_1 (struct davinci_i2c_dev*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct davinci_i2c_dev *VAR_2,
        int VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_3)
  VAR_4 &= ~VAR_0;
 else
  VAR_4 |= VAR_0;

 FUNC_1(VAR_2, VAR_1, VAR_4);
}
