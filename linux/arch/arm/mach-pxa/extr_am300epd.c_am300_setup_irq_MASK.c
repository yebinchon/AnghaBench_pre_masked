
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {struct broadsheetfb_par* par; } ;
struct broadsheetfb_par {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,int ,char*,struct broadsheetfb_par*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_4)
{
 int VAR_5;
 struct broadsheetfb_par *VAR_6 = VAR_4->par;

 VAR_5 = FUNC_2(FUNC_0(VAR_1), VAR_3,
    VAR_0, "AM300", VAR_6);
 if (VAR_5)
  FUNC_1(&VAR_2->dev, "request_irq failed: %d\n", VAR_5);

 return VAR_5;
}
