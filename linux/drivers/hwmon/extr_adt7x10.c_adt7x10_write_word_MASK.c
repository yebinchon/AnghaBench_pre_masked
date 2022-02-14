
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;
struct adt7x10_data {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_word ) (struct device*,int ,int ) ;} ;


 struct adt7x10_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct adt7x10_data *VAR_3 = FUNC_0(VAR_0);
 return VAR_3->ops->write_word(VAR_0, VAR_1, VAR_2);
}
