
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {size_t* index_polarity; } ;
struct counter_signal {int id; } ;
struct counter_device {struct quad8_iio* priv; } ;



__attribute__((used)) static int FUNC_0(struct counter_device *VAR_0,
 struct counter_signal *VAR_1, size_t *VAR_2)
{
 const struct quad8_iio *const VAR_3 = VAR_0->priv;
 const size_t VAR_4 = VAR_1->id - 16;

 *VAR_2 = VAR_3->index_polarity[VAR_4];

 return 0;
}
