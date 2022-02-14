
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quad8_iio {int base; } ;
struct counter_device {struct quad8_iio* priv; } ;
struct counter_count_read_value {int dummy; } ;
struct counter_count {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct counter_count_read_value*,int ,unsigned long*) ;
 unsigned int FUNC_1 (int const) ;
 int FUNC_2 (int,int const) ;

__attribute__((used)) static int FUNC_3(struct counter_device *VAR_6,
 struct counter_count *VAR_7, struct counter_count_read_value *VAR_8)
{
 const struct quad8_iio *const VAR_9 = VAR_6->priv;
 const int VAR_10 = VAR_9->base + 2 * VAR_7->id;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_11 = FUNC_1(VAR_10 + 1);
 VAR_12 = VAR_11 & VAR_2;
 VAR_13 = !!(VAR_11 & VAR_3);


 VAR_14 = (unsigned long)(VAR_12 ^ VAR_13) << 24;


 FUNC_2(VAR_1 | VAR_5 | VAR_4,
      VAR_10 + 1);

 for (VAR_15 = 0; VAR_15 < 3; VAR_15++)
  VAR_14 |= (unsigned long)FUNC_1(VAR_10) << (8 * VAR_15);

 FUNC_0(VAR_8, VAR_0, &VAR_14);

 return 0;
}
