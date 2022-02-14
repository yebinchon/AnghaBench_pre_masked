
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {unsigned int* quadrature_mode; unsigned int* quadrature_scale; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {int id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_0(struct counter_device *VAR_4,
 struct counter_count *VAR_5, size_t *VAR_6)
{
 const struct quad8_iio *const VAR_7 = VAR_4->priv;
 const int VAR_8 = VAR_5->id;
 const unsigned int VAR_9 = VAR_7->quadrature_mode[VAR_8];
 const unsigned int VAR_10 = VAR_7->quadrature_scale[VAR_8];

 if (VAR_9)
  switch (VAR_10) {
  case 0:
   *VAR_6 = VAR_1;
   break;
  case 1:
   *VAR_6 = VAR_2;
   break;
  case 2:
   *VAR_6 = VAR_3;
   break;
  }
 else
  *VAR_6 = VAR_0;

 return 0;
}
