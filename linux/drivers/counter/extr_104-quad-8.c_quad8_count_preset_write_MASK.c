
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; unsigned int* preset; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char const*,int ,unsigned int*) ;
 int FUNC_1 (unsigned int,int const) ;

__attribute__((used)) static ssize_t FUNC_2(struct counter_device *VAR_3,
 struct counter_count *VAR_4, void *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct quad8_iio *const VAR_8 = VAR_3->priv;
 const int VAR_9 = VAR_8->base + 2 * VAR_4->id;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_6, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;


 if (VAR_10 > 0xFFFFFF)
  return -VAR_0;

 VAR_8->preset[VAR_4->id] = VAR_10;


 FUNC_1(VAR_1 | VAR_2, VAR_9 + 1);


 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
  FUNC_1(VAR_10 >> (8 * VAR_12), VAR_9);

 return VAR_7;
}
