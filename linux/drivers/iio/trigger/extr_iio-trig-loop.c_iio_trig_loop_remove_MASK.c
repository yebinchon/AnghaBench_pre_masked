
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_trigger {int trigger; } ;
struct iio_loop_info {int dummy; } ;


 int FUNC_0 (int ) ;
 struct iio_loop_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iio_loop_info*) ;

__attribute__((used)) static int FUNC_4(struct iio_sw_trigger *VAR_0)
{
 struct iio_loop_info *VAR_1;

 VAR_1 = FUNC_1(VAR_0->trigger);

 FUNC_2(VAR_0->trigger);
 FUNC_0(VAR_0->trigger);
 FUNC_3(VAR_1);

 return 0;
}
