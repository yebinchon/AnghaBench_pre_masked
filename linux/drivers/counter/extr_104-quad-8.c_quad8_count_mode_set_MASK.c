
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; size_t* count_mode; int* quadrature_scale; scalar_t__* quadrature_mode; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {int id; } ;






 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int const) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_1,
 struct counter_count *VAR_2, size_t VAR_3)
{
 struct quad8_iio *const VAR_4 = VAR_1->priv;
 unsigned int VAR_5;
 const int VAR_6 = VAR_4->base + 2 * VAR_2->id + 1;


 switch (VAR_3) {
 case 129:
  VAR_3 = 0;
  break;
 case 128:
  VAR_3 = 1;
  break;
 case 130:
  VAR_3 = 2;
  break;
 case 131:
  VAR_3 = 3;
  break;
 }

 VAR_4->count_mode[VAR_2->id] = VAR_3;


 VAR_5 = VAR_3 << 1;


 if (VAR_4->quadrature_mode[VAR_2->id])
  VAR_5 |= (VAR_4->quadrature_scale[VAR_2->id] + 1) << 3;


 FUNC_0(VAR_0 | VAR_5, VAR_6);

 return 0;
}
