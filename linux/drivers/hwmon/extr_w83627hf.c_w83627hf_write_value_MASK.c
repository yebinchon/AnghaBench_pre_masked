
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83627hf_data {int lock; scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct w83627hf_data*,int) ;
 int FUNC_4 (struct w83627hf_data*,int) ;

__attribute__((used)) static int FUNC_5(struct w83627hf_data *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_2->lock);
 VAR_5 = (((VAR_3 & 0xff00) == 0x100)
     || ((VAR_3 & 0xff00) == 0x200))
    && (((VAR_3 & 0x00ff) == 0x53)
     || ((VAR_3 & 0x00ff) == 0x55));
 FUNC_4(VAR_2, VAR_3);
 FUNC_2(VAR_3 & 0xff, VAR_2->addr + VAR_0);
 if (VAR_5) {
  FUNC_2(VAR_4 >> 8,
         VAR_2->addr + VAR_1);
  FUNC_2((VAR_3 & 0xff) + 1,
         VAR_2->addr + VAR_0);
 }
 FUNC_2(VAR_4 & 0xff,
        VAR_2->addr + VAR_1);
 FUNC_3(VAR_2, VAR_3);
 FUNC_1(&VAR_2->lock);
 return 0;
}
