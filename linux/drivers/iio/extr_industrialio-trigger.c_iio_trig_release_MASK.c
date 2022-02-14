
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {struct iio_trigger* name; scalar_t__ subirq_base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (struct iio_trigger*) ;
 struct iio_trigger* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_4)
{
 struct iio_trigger *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;

 if (VAR_5->subirq_base) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   FUNC_1(VAR_5->subirq_base + VAR_6,
       VAR_1,
       VAR_3 | VAR_2);
   FUNC_2(VAR_5->subirq_base + VAR_6,
         ((void*)0));
   FUNC_3(VAR_5->subirq_base + VAR_6,
     ((void*)0));
  }

  FUNC_0(VAR_5->subirq_base,
          VAR_0);
 }
 FUNC_4(VAR_5->name);
 FUNC_4(VAR_5);
}
