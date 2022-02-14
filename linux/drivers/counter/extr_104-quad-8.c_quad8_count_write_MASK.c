
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; unsigned long* preset; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count_write_value {int dummy; } ;
struct counter_count {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long*,int ,struct counter_count_write_value*) ;
 int FUNC_1 (unsigned long,int const) ;

__attribute__((used)) static int FUNC_2(struct counter_device *VAR_7,
 struct counter_count *VAR_8, struct counter_count_write_value *VAR_9)
{
 const struct quad8_iio *const VAR_10 = VAR_7->priv;
 const int VAR_11 = VAR_10->base + 2 * VAR_8->id;
 int VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_12 = FUNC_0(&VAR_13, VAR_0,
         VAR_9);
 if (VAR_12)
  return VAR_12;


 if (VAR_13 > 0xFFFFFF)
  return -VAR_1;


 FUNC_1(VAR_2 | VAR_4, VAR_11 + 1);


 for (VAR_14 = 0; VAR_14 < 3; VAR_14++)
  FUNC_1(VAR_13 >> (8 * VAR_14), VAR_11);


 FUNC_1(VAR_2 | VAR_3, VAR_11 + 1);


 FUNC_1(VAR_2 | VAR_4, VAR_11 + 1);


 VAR_13 = VAR_10->preset[VAR_8->id];
 for (VAR_14 = 0; VAR_14 < 3; VAR_14++)
  FUNC_1(VAR_13 >> (8 * VAR_14), VAR_11);


 FUNC_1(VAR_2 | VAR_6, VAR_11 + 1);

 FUNC_1(VAR_2 | VAR_5, VAR_11 + 1);

 return 0;
}
