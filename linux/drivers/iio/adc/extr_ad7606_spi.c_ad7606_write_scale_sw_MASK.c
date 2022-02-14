
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7606_state {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ad7606_state*,int ,int ,int ) ;
 struct ad7606_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct ad7606_state *VAR_3 = FUNC_4(VAR_0);

 return FUNC_3(VAR_3,
         FUNC_0(VAR_1),
         FUNC_2(VAR_1),
         FUNC_1(VAR_1, VAR_2));
}
