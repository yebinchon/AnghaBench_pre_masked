
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count {int id; } ;
typedef enum counter_count_direction { ____Placeholder_counter_count_direction } counter_count_direction ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int const) ;

__attribute__((used)) static void FUNC_1(struct counter_device *VAR_3,
 struct counter_count *VAR_4, enum counter_count_direction *VAR_5)
{
 const struct quad8_iio *const VAR_6 = VAR_3->priv;
 unsigned int VAR_7;
 const unsigned int VAR_8 = VAR_6->base + 2 * VAR_4->id + 1;


 VAR_7 = FUNC_0(VAR_8) & VAR_2;

 *VAR_5 = (VAR_7) ? VAR_1 :
  VAR_0;
}
