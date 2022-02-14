
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83627ehf_data {int lock; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct w83627ehf_data*,int) ;

__attribute__((used)) static u16 FUNC_6(struct w83627ehf_data *VAR_2, u16 VAR_3)
{
 int VAR_4, VAR_5 = FUNC_1(VAR_3);

 FUNC_2(&VAR_2->lock);

 FUNC_5(VAR_2, VAR_3);
 FUNC_4(VAR_3 & 0xff, VAR_2->addr + VAR_0);
 VAR_4 = FUNC_0(VAR_2->addr + VAR_1);
 if (VAR_5) {
  FUNC_4((VAR_3 & 0xff) + 1,
         VAR_2->addr + VAR_0);
  VAR_4 = (VAR_4 << 8) + FUNC_0(VAR_2->addr + VAR_1);
 }

 FUNC_3(&VAR_2->lock);
 return VAR_4;
}
