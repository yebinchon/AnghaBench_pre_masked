
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int masklength; } ;
struct ad7266_state {int dummy; } ;


 int FUNC_0 (struct ad7266_state*,unsigned int) ;
 unsigned int FUNC_1 (unsigned long const*,int ) ;
 struct ad7266_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0,
 const unsigned long *VAR_1)
{
 struct ad7266_state *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_1, VAR_0->masklength);

 FUNC_0(VAR_2, VAR_3);

 return 0;
}
