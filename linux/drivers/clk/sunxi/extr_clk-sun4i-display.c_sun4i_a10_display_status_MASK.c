
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_data {scalar_t__ offset; int reg; } ;
struct reset_controller_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct reset_data* FUNC_1 (struct reset_controller_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_0,
        unsigned long VAR_1)
{
 struct reset_data *VAR_2 = FUNC_1(VAR_0);

 return !(FUNC_2(VAR_2->reg) & FUNC_0(VAR_2->offset + VAR_1));
}
