
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiadc_dma {scalar_t__ chan; } ;
struct tiadc_device {scalar_t__ total_ch_enabled; scalar_t__ buffer_en_ch_steps; int mfd_tscadc; struct tiadc_dma dma; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct tiadc_device* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct tiadc_device*,int ) ;
 int FUNC_4 (struct tiadc_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_7)
{
 struct tiadc_device *VAR_8 = FUNC_2(VAR_7);
 struct tiadc_dma *VAR_9 = &VAR_8->dma;
 int VAR_10, VAR_11, VAR_12;

 FUNC_4(VAR_8, VAR_6, (VAR_1 |
    VAR_0 | VAR_2));
 FUNC_0(VAR_8->mfd_tscadc, VAR_8->buffer_en_ch_steps);
 VAR_8->buffer_en_ch_steps = 0;
 VAR_8->total_ch_enabled = 0;
 if (VAR_9->chan) {
  FUNC_4(VAR_8, VAR_3, 0x2);
  FUNC_1(VAR_9->chan);
 }


 VAR_10 = FUNC_3(VAR_8, VAR_5);
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  VAR_12 = FUNC_3(VAR_8, VAR_4);

 return 0;
}
