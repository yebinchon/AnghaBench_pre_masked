
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_sw_trigger_type {int owner; } ;


 struct iio_sw_trigger_type* FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
struct iio_sw_trigger_type *FUNC_5(const char *VAR_1)
{
 struct iio_sw_trigger_type *VAR_2;

 FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1, FUNC_3(VAR_1));
 if (VAR_2 && !FUNC_4(VAR_2->owner))
  VAR_2 = ((void*)0);
 FUNC_2(&VAR_0);

 return VAR_2;
}
