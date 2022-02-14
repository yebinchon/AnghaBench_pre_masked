
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;
struct ad5360_state {unsigned int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct iio_dev*,int ,int ,unsigned int,int ) ;
 struct ad5360_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 struct ad5360_state *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;

 FUNC_2(&VAR_2->mlock);

 VAR_5->ctrl |= VAR_3;
 VAR_5->ctrl &= ~VAR_4;

 VAR_6 = FUNC_0(VAR_2, VAR_0,
   VAR_1, VAR_5->ctrl, 0);

 FUNC_3(&VAR_2->mlock);

 return VAR_6;
}
