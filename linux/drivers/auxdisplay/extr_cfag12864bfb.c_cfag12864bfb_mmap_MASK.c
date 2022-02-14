
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,struct page**,int) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_1, struct vm_area_struct *VAR_2)
{
 struct page *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, &VAR_3, 1);
}
