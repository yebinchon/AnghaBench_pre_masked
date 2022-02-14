
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int* count_mode; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {size_t id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_0(struct counter_device *VAR_4,
 struct counter_count *VAR_5, size_t *VAR_6)
{
 const struct quad8_iio *const VAR_7 = VAR_4->priv;


 switch (VAR_7->count_mode[VAR_5->id]) {
 case 0:
  *VAR_6 = VAR_2;
  break;
 case 1:
  *VAR_6 = VAR_3;
  break;
 case 2:
  *VAR_6 = VAR_1;
  break;
 case 3:
  *VAR_6 = VAR_0;
  break;
 }

 return 0;
}
