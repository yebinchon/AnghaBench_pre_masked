
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; int* ab_enable; int* preset_enable; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {int id; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (unsigned int,int const) ;

__attribute__((used)) static ssize_t FUNC_2(struct counter_device *VAR_1,
 struct counter_count *VAR_2, void *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct quad8_iio *const VAR_6 = VAR_1->priv;
 const int VAR_7 = VAR_6->base + 2 * VAR_2->id;
 int VAR_8;
 bool VAR_9;
 unsigned int VAR_10;

 VAR_8 = FUNC_0(VAR_4, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_6->ab_enable[VAR_2->id] = VAR_9;

 VAR_10 = VAR_9 | VAR_6->preset_enable[VAR_2->id] << 1;


 FUNC_1(VAR_0 | VAR_10, VAR_7 + 1);

 return VAR_5;
}
