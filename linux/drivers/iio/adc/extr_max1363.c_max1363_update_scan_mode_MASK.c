
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {int current_mode; int chip_info; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct max1363_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (unsigned long const*,int ) ;
 int FUNC_2 (struct max1363_state*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
        const unsigned long *VAR_2)
{
 struct max1363_state *VAR_3 = FUNC_0(VAR_1);





 VAR_3->current_mode = FUNC_1(VAR_2, VAR_3->chip_info);
 if (!VAR_3->current_mode)
  return -VAR_0;
 FUNC_2(VAR_3);
 return 0;
}
