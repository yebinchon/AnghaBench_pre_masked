
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int * args; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (struct iio_dev*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct iio_dev *VAR_0,
        const struct of_phandle_args *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->args[0]);
}
