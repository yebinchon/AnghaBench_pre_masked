
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int masklength; scalar_t__ available_scan_masks; } ;
struct iio_buffer {unsigned long* scan_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (unsigned long*,unsigned long*,int ) ;
 int FUNC_3 (unsigned long*) ;
 unsigned long* FUNC_4 (scalar_t__,int ,unsigned long*,int) ;
 int FUNC_5 (struct iio_dev*,unsigned long*) ;
 unsigned long* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_3,
        struct iio_buffer *VAR_4, int VAR_5)
{
 const unsigned long *VAR_6;
 unsigned long *VAR_7;

 VAR_7 = FUNC_6(FUNC_0(VAR_3->masklength),
       sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;
 if (!VAR_3->masklength) {
  FUNC_1(1, "Trying to set scanmask prior to registering buffer\n");
  goto err_invalid_mask;
 }
 FUNC_2(VAR_7, VAR_4->scan_mask, VAR_3->masklength);
 FUNC_7(VAR_5, VAR_7);

 if (!FUNC_5(VAR_3, VAR_7))
  goto err_invalid_mask;

 if (VAR_3->available_scan_masks) {
  VAR_6 = FUNC_4(VAR_3->available_scan_masks,
        VAR_3->masklength,
        VAR_7, 0);
  if (!VAR_6)
   goto err_invalid_mask;
 }
 FUNC_2(VAR_4->scan_mask, VAR_7, VAR_3->masklength);

 FUNC_3(VAR_7);

 return 0;

err_invalid_mask:
 FUNC_3(VAR_7);
 return -VAR_0;
}
