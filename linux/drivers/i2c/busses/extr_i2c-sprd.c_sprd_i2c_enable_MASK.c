
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_i2c {scalar_t__ base; int bus_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sprd_i2c*) ;
 int FUNC_2 (struct sprd_i2c*) ;
 int FUNC_3 (struct sprd_i2c*,int ) ;
 int FUNC_4 (struct sprd_i2c*,int ) ;
 int FUNC_5 (struct sprd_i2c*,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct sprd_i2c *VAR_6)
{
 u32 VAR_7 = VAR_1;

 FUNC_6(VAR_7, VAR_6->base + VAR_0);

 FUNC_5(VAR_6, VAR_4);
 FUNC_4(VAR_6, VAR_3);

 FUNC_3(VAR_6, VAR_6->bus_freq);
 FUNC_2(VAR_6);
 FUNC_1(VAR_6);

 VAR_7 = FUNC_0(VAR_6->base + VAR_0);
 FUNC_6(VAR_7 | VAR_2 | VAR_5, VAR_6->base + VAR_0);
}
