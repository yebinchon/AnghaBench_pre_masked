
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int bus_context; TYPE_1__* bus; } ;
struct TYPE_2__ {int (* reg_read ) (int ,unsigned int,unsigned int*) ;} ;


 int FUNC_0 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
    unsigned int *VAR_2)
{
 struct regmap *VAR_3 = VAR_0;

 return VAR_3->bus->reg_read(VAR_3->bus_context, VAR_1, VAR_2);
}
