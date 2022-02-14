
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmp280_data {int use_eoc; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int,int ,int *,unsigned long,char const*,struct bmp280_data*) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2,
    const char *VAR_3,
    int VAR_4,
    struct bmp280_data *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(FUNC_2(VAR_4));
 if (VAR_6 != VAR_0) {
  FUNC_0(VAR_2, "non-rising trigger given for EOC interrupt, "
   "trying to enforce it\n");
  VAR_6 = VAR_0;
 }
 VAR_7 = FUNC_1(VAR_2,
   VAR_4,
   VAR_1,
   ((void*)0),
   VAR_6,
   VAR_3,
   VAR_5);
 if (VAR_7) {

  FUNC_0(VAR_2, "unable to request DRDY IRQ\n");
  return 0;
 }

 VAR_5->use_eoc = 1;
 return 0;
}
