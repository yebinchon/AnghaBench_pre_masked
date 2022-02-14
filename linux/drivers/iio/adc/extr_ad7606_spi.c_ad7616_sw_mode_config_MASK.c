
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int channels; } ;
struct ad7606_state {TYPE_1__* bops; int * write_os; int write_scale; } ;
struct TYPE_2__ {int (* write_mask ) (struct ad7606_state*,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ad7606_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct ad7606_state*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_6)
{
 struct ad7606_state *VAR_7 = FUNC_0(VAR_6);





 VAR_6->channels = VAR_3;

 VAR_7->write_scale = VAR_5;
 VAR_7->write_os = &VAR_4;


 return VAR_7->bops->write_mask(VAR_7,
         VAR_1,
         VAR_0 | VAR_2,
         VAR_0 | VAR_2);
}
