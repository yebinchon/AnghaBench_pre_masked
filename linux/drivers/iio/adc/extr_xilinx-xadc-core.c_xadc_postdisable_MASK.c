
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xadc {int dummy; } ;
struct iio_dev {int num_channels; TYPE_1__* channels; } ;
struct TYPE_2__ {int scan_index; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct xadc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct xadc*,int ) ;
 int FUNC_4 (struct xadc*,int ,int ,int ) ;
 int FUNC_5 (struct xadc*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3)
{
 struct xadc *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_3->num_channels; VAR_7++)
  VAR_5 |= FUNC_0(VAR_3->channels[VAR_7].scan_index);


 VAR_6 = FUNC_5(VAR_4, FUNC_1(0), VAR_5 & 0xffff);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_4, FUNC_1(1), VAR_5 >> 16);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_2, VAR_1,
  VAR_0);
 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_4, VAR_0);
}
