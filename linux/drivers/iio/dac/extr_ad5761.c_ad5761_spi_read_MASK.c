
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iio_dev {int mlock; } ;
struct ad5761_state {int dummy; } ;


 int FUNC_0 (struct ad5761_state*,int ,int *) ;
 struct ad5761_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0, u8 VAR_1, u16 *VAR_2)
{
 struct ad5761_state *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_0->mlock);
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_3(&VAR_0->mlock);

 return VAR_4;
}
