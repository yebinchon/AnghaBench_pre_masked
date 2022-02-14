
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_1,
 struct counter_count *VAR_2, size_t *VAR_3)
{
 const struct quad8_iio *const VAR_4 = VAR_1->priv;
 const int VAR_5 = VAR_4->base + 2 * VAR_2->id + 1;

 *VAR_3 = !!(FUNC_0(VAR_5) & VAR_0);

 return 0;
}
