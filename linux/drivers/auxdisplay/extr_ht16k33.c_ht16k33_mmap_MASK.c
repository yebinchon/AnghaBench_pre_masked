
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int buffer; } ;
struct ht16k33_priv {TYPE_1__ fbdev; } ;
struct fb_info {struct ht16k33_priv* par; } ;


 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,struct page**,int) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_0, struct vm_area_struct *VAR_1)
{
 struct ht16k33_priv *VAR_2 = VAR_0->par;
 struct page *VAR_3 = FUNC_0(VAR_2->fbdev.buffer);

 return FUNC_1(VAR_1, &VAR_3, 1);
}
