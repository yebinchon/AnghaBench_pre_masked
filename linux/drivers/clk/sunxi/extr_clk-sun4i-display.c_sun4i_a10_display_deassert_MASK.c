
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_data {int lock; int reg; scalar_t__ offset; } ;
struct reset_controller_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct reset_data* FUNC_1 (struct reset_controller_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct reset_controller_dev *VAR_0,
          unsigned long VAR_1)
{
 struct reset_data *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_3(VAR_2->lock, VAR_3);

 VAR_4 = FUNC_2(VAR_2->reg);
 FUNC_5(VAR_4 | FUNC_0(VAR_2->offset + VAR_1), VAR_2->reg);

 FUNC_4(VAR_2->lock, VAR_3);

 return 0;
}
