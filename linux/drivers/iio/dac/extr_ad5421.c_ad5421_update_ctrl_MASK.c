
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct ad5421_state {unsigned int ctrl; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct iio_dev*,int ,unsigned int) ;
 struct ad5421_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3)
{
 struct ad5421_state *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5;

 FUNC_2(&VAR_1->mlock);

 VAR_4->ctrl &= ~VAR_3;
 VAR_4->ctrl |= VAR_2;

 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_4->ctrl);

 FUNC_3(&VAR_1->mlock);

 return VAR_5;
}
