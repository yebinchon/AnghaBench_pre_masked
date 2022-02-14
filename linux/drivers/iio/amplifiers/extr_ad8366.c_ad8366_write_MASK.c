
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; int num_channels; } ;
struct ad8366_state {int type; unsigned char* data; int spi; } ;





 unsigned char FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,char*,int) ;
 struct ad8366_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0,
   unsigned char VAR_1, unsigned char VAR_2)
{
 struct ad8366_state *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 switch (VAR_3->type) {
 case 130:
  VAR_1 = FUNC_0(VAR_1 & 0x3F);
  VAR_2 = FUNC_0(VAR_2 & 0x3F);

  VAR_3->data[0] = VAR_2 >> 4;
  VAR_3->data[1] = (VAR_2 << 4) | (VAR_1 >> 2);
  break;
 case 129:
  VAR_3->data[0] = VAR_1 & 0x1F;
  break;
 case 128:
  VAR_3->data[0] = (VAR_1 & 0x3F);
  break;
 }

 VAR_4 = FUNC_3(VAR_3->spi, VAR_3->data, VAR_0->num_channels);
 if (VAR_4 < 0)
  FUNC_1(&VAR_0->dev, "write failed (%d)", VAR_4);

 return VAR_4;
}
