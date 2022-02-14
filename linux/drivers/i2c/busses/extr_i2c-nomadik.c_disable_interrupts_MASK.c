
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nmk_i2c_dev {scalar_t__ virtbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct nmk_i2c_dev *VAR_2, u32 VAR_3)
{
 VAR_3 = FUNC_0(VAR_3);
 FUNC_2(FUNC_1(VAR_2->virtbase + VAR_1) & ~(VAR_0 & VAR_3),
   VAR_2->virtbase + VAR_1);
 return 0;
}
