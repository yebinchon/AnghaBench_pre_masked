
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_device {int rtaddr; int rsb; } ;
struct sunxi_rsb_ctx {int size; struct sunxi_rsb_device* rdev; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
          unsigned int VAR_2)
{
 struct sunxi_rsb_ctx *VAR_3 = VAR_0;
 struct sunxi_rsb_device *VAR_4 = VAR_3->rdev;

 return FUNC_0(VAR_4->rsb, VAR_4->rtaddr, VAR_1, &VAR_2, VAR_3->size);
}
