
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct rtl2832_sdr_dev {int udev; } ;


 int VAR_0 ;
 struct rtl2832_sdr_dev* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct vb2_buffer *VAR_1)
{
 struct rtl2832_sdr_dev *VAR_2 = FUNC_0(VAR_1->vb2_queue);


 if (!VAR_2->udev)
  return -VAR_0;

 return 0;
}
