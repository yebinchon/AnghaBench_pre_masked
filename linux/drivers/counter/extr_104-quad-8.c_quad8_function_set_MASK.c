
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {unsigned int* quadrature_mode; unsigned int* quadrature_scale; int* count_mode; unsigned int* synchronous_mode; int* index_polarity; int base; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {int id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int const VAR_5 ;
 int FUNC_0 (unsigned int const,int const) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_6,
 struct counter_count *VAR_7, size_t VAR_8)
{
 struct quad8_iio *const VAR_9 = VAR_6->priv;
 const int VAR_10 = VAR_7->id;
 unsigned int *const VAR_11 = VAR_9->quadrature_mode + VAR_10;
 unsigned int *const VAR_12 = VAR_9->quadrature_scale + VAR_10;
 unsigned int VAR_13 = VAR_9->count_mode[VAR_10] << 1;
 unsigned int *const VAR_14 = VAR_9->synchronous_mode + VAR_10;
 const unsigned int VAR_15 = VAR_9->index_polarity[VAR_10] << 1;
 const int VAR_16 = VAR_9->base + 2 * VAR_10 + 1;

 if (VAR_8 == VAR_3) {
  *VAR_11 = 0;


  *VAR_12 = 0;


  if (*VAR_14) {
   *VAR_14 = 0;

   FUNC_0(VAR_5 | VAR_15, VAR_16);
  }
 } else {
  *VAR_11 = 1;

  switch (VAR_8) {
  case 130:
   *VAR_12 = 0;
   VAR_13 |= VAR_0;
   break;
  case 129:
   *VAR_12 = 1;
   VAR_13 |= VAR_1;
   break;
  case 128:
   *VAR_12 = 2;
   VAR_13 |= VAR_2;
   break;
  }
 }


 FUNC_0(VAR_4 | VAR_13, VAR_16);

 return 0;
}
