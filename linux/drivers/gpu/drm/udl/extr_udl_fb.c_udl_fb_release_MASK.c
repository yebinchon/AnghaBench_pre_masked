
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udl_fbdev {scalar_t__ fb_count; } ;
struct fb_info {int node; TYPE_1__* fbops; int * fbdefio; struct udl_fbdev* par; } ;
struct TYPE_2__ {int fb_mmap; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1, int VAR_2)
{
 struct udl_fbdev *VAR_3 = VAR_1->par;

 VAR_3->fb_count--;
 FUNC_2("released /dev/fb%d user=%d count=%d\n",
  VAR_1->node, VAR_2, VAR_3->fb_count);

 return 0;
}
