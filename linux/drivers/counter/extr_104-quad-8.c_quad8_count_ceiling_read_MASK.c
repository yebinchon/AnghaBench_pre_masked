
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int* count_mode; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {size_t id; } ;
typedef int ssize_t ;


 int FUNC_0 (struct counter_device*,struct counter_count*,void*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct counter_device *VAR_0,
 struct counter_count *VAR_1, void *VAR_2, char *VAR_3)
{
 const struct quad8_iio *const VAR_4 = VAR_0->priv;


 switch (VAR_4->count_mode[VAR_1->id]) {
 case 1:
 case 3:
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }


 return FUNC_1(VAR_3, "33554431\n");
}
