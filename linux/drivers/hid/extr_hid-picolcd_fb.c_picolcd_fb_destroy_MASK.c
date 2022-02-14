
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct picolcd_fb_data {int * picolcd; } ;
struct TYPE_2__ {scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; struct picolcd_fb_data* par; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fb_info *VAR_0)
{
 struct picolcd_fb_data *VAR_1 = VAR_0->par;


 FUNC_1(VAR_0);


 FUNC_0(VAR_1->picolcd != ((void*)0));

 FUNC_3((u8 *)VAR_0->fix.smem_start);
 FUNC_2(VAR_0);
}
