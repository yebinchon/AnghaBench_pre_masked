
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int* active_scan_mask; } ;
struct ad7887_state {int * msg; int * ring_msg; int spi; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct ad7887_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3)
{
 struct ad7887_state *VAR_4 = FUNC_0(VAR_3);


 switch (*VAR_3->active_scan_mask) {
 case (1 << 0):
  VAR_4->ring_msg = &VAR_4->msg[VAR_0];
  break;
 case (1 << 1):
  VAR_4->ring_msg = &VAR_4->msg[VAR_2];

  FUNC_1(VAR_4->spi, VAR_4->ring_msg);
  break;
 case ((1 << 1) | (1 << 0)):
  VAR_4->ring_msg = &VAR_4->msg[VAR_1];
  break;
 }

 return 0;
}
