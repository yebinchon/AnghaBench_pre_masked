
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int* preset; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {size_t id; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct counter_device *VAR_0,
 struct counter_count *VAR_1, void *VAR_2, char *VAR_3)
{
 const struct quad8_iio *const VAR_4 = VAR_0->priv;

 return FUNC_0(VAR_3, "%u\n", VAR_4->preset[VAR_1->id]);
}
