
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_mount_matrix {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device const*,char*) ;
 struct iio_mount_matrix VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct device *VAR_1,
        struct iio_mount_matrix *VAR_2)
{
 *VAR_2 = VAR_0;
 FUNC_0(VAR_1, "mounting matrix not found: using identity...\n");
 return 0;
}
