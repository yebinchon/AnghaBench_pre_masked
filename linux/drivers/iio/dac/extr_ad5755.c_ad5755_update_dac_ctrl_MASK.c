
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad5755_state {unsigned int* ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,unsigned int,int ,unsigned int) ;
 struct ad5755_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct ad5755_state *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_5->ctrl[VAR_2] |= VAR_3;
 VAR_5->ctrl[VAR_2] &= ~VAR_4;

 VAR_6 = FUNC_0(VAR_1, VAR_2,
  VAR_0, VAR_5->ctrl[VAR_2]);

 return VAR_6;
}
