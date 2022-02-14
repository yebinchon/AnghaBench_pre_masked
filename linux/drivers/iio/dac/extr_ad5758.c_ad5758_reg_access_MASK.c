
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad5758_state {int lock; } ;


 int FUNC_0 (struct ad5758_state*,unsigned int) ;
 int FUNC_1 (struct ad5758_state*,unsigned int,unsigned int) ;
 struct ad5758_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
        unsigned int VAR_1,
        unsigned int VAR_2,
        unsigned int *VAR_3)
{
 struct ad5758_state *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 FUNC_3(&VAR_4->lock);
 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  if (VAR_5 < 0) {
   FUNC_4(&VAR_4->lock);
   return VAR_5;
  }

  *VAR_3 = VAR_5;
  VAR_5 = 0;
 } else {
  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2);
 }
 FUNC_4(&VAR_4->lock);

 return VAR_5;
}
