
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_trigger {int name; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int jextsel; scalar_t__ name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_trigger*) ;
 scalar_t__ FUNC_1 (struct iio_trigger*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
       struct iio_trigger *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_1[VAR_4].name; VAR_4++) {




  if ((FUNC_1(VAR_3) ||
       FUNC_0(VAR_3)) &&
      !FUNC_2(VAR_1[VAR_4].name, VAR_3->name)) {
   return VAR_1[VAR_4].jextsel;
  }
 }

 return -VAR_0;
}
