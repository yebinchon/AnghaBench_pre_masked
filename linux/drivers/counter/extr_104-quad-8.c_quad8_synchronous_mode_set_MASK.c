
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int* index_polarity; int base; size_t* synchronous_mode; int * quadrature_mode; } ;
struct counter_signal {int id; } ;
struct counter_device {struct quad8_iio* priv; } ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (unsigned int const,int const) ;

__attribute__((used)) static int FUNC_1(struct counter_device *VAR_2,
 struct counter_signal *VAR_3, size_t VAR_4)
{
 struct quad8_iio *const VAR_5 = VAR_2->priv;
 const size_t VAR_6 = VAR_3->id - 16;
 const unsigned int VAR_7 = VAR_4 |
  VAR_5->index_polarity[VAR_6] << 1;
 const int VAR_8 = VAR_5->base + 2 * VAR_6 + 1;


 if (VAR_4 && !VAR_5->quadrature_mode[VAR_6])
  return -VAR_0;

 VAR_5->synchronous_mode[VAR_6] = VAR_4;


 FUNC_0(VAR_1 | VAR_7, VAR_8);

 return 0;
}
