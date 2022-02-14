
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct adt7x10_data {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_word ) (struct device*,int ) ;} ;


 struct adt7x10_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, u8 VAR_1)
{
 struct adt7x10_data *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->ops->read_word(VAR_0, VAR_1);
}
