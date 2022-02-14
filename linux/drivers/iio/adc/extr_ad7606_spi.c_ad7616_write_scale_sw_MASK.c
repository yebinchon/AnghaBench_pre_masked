
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ad7606_state {TYPE_1__* bops; } ;
struct TYPE_2__ {int (* write_mask ) (struct ad7606_state*,unsigned int,int ,unsigned int) ;} ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int) ;
 struct ad7606_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct ad7606_state*,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct ad7606_state *VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6, VAR_7, VAR_8;
 VAR_8 = VAR_3 >> 1;

 VAR_6 = FUNC_0(VAR_8);

 if ((VAR_3 & 0x1) == 0)
  VAR_6 += VAR_0;
 else
  VAR_6 += VAR_1;


 VAR_7 = FUNC_1(VAR_8, ((VAR_4 + 1) & 0b11));
 return VAR_5->bops->write_mask(VAR_5, VAR_6, FUNC_2(VAR_8),
         VAR_7);
}
