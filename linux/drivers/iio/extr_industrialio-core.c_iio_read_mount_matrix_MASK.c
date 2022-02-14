
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_mount_matrix {int rotation; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int rotation; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char const*,int ,size_t) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct device*,struct iio_mount_matrix*) ;

int FUNC_3(struct device *VAR_2, const char *VAR_3,
     struct iio_mount_matrix *VAR_4)
{
 size_t VAR_5 = FUNC_0(VAR_1.rotation);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3,
      VAR_4->rotation, VAR_5);
 if (VAR_6 == VAR_5)
  return 0;

 if (VAR_6 >= 0)

  return -VAR_0;

 if (VAR_6 != -VAR_0)

  return VAR_6;


 return FUNC_2(VAR_2, VAR_4);
}
