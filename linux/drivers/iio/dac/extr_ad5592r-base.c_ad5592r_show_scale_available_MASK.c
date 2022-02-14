
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad5592r_state {int** scale_avail; } ;
typedef int ssize_t ;


 struct ad5592r_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (char*,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_0,
        uintptr_t VAR_1,
        const struct iio_chan_spec *VAR_2,
        char *VAR_3)
{
 struct ad5592r_state *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3, "%d.%09u %d.%09u\n",
  VAR_4->scale_avail[0][0], VAR_4->scale_avail[0][1],
  VAR_4->scale_avail[1][0], VAR_4->scale_avail[1][1]);
}
