
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_device {int rtaddr; int rsb; } ;
struct sunxi_rsb_ctx {int size; struct sunxi_rsb_device* rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2,
         unsigned int *VAR_3)
{
 struct sunxi_rsb_ctx *VAR_4 = VAR_1;
 struct sunxi_rsb_device *VAR_5 = VAR_4->rdev;

 if (VAR_2 > 0xff)
  return -VAR_0;

 return FUNC_0(VAR_5->rsb, VAR_5->rtaddr, VAR_2, VAR_3, VAR_4->size);
}
