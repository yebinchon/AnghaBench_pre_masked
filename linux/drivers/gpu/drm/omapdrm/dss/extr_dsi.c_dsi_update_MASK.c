
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int hactive; int vactive; } ;
struct dsi_data {int update_channel; void (* framedone_callback ) (int,void*) ;int update_bytes; int pix_fmt; TYPE_1__ vm; void* framedone_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dsi_data*) ;
 int FUNC_2 (struct dsi_data*) ;
 struct dsi_data* FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_0, int VAR_1,
  void (*VAR_2)(int, void *), void *VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_3(VAR_0);
 u16 VAR_5, VAR_6;

 FUNC_1(VAR_4);

 VAR_4->update_channel = VAR_1;

 VAR_4->framedone_callback = VAR_2;
 VAR_4->framedone_data = VAR_3;

 VAR_5 = VAR_4->vm.hactive;
 VAR_6 = VAR_4->vm.vactive;





 FUNC_2(VAR_4);

 return 0;
}
