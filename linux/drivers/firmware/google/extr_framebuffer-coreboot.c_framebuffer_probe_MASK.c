
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct simplefb_platform_data {int height; int stride; int * format; int width; } ;
struct resource {int flags; char* name; scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
struct lb_framebuffer {int y_resolution; int bytes_per_line; scalar_t__ bits_per_pixel; scalar_t__ red_mask_pos; scalar_t__ red_mask_size; scalar_t__ green_mask_pos; scalar_t__ green_mask_size; scalar_t__ blue_mask_pos; scalar_t__ blue_mask_size; scalar_t__ reserved_mask_pos; scalar_t__ reserved_mask_size; scalar_t__ physical_address; int x_resolution; } ;
struct coreboot_device {int dev; struct lb_framebuffer framebuffer; } ;
typedef int res ;
typedef int pdata ;
struct TYPE_10__ {scalar_t__ offset; scalar_t__ length; } ;
struct TYPE_9__ {scalar_t__ offset; scalar_t__ length; } ;
struct TYPE_8__ {scalar_t__ offset; scalar_t__ length; } ;
struct TYPE_7__ {scalar_t__ offset; scalar_t__ length; } ;
struct TYPE_11__ {scalar_t__ bits_per_pixel; int * name; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,struct platform_device*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_5 (struct resource*,int ,int) ;
 struct platform_device* FUNC_6 (int *,char*,int ,struct resource*,int,struct simplefb_platform_data*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct coreboot_device *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct lb_framebuffer *VAR_8 = &VAR_5->framebuffer;
 struct platform_device *VAR_9;
 struct resource VAR_10;
 struct simplefb_platform_data VAR_11 = {
  .width = VAR_8->x_resolution,
  .height = VAR_8->y_resolution,
  .stride = VAR_8->bytes_per_line,
  .format = ((void*)0),
 };

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); ++VAR_6) {
  if (VAR_8->bits_per_pixel == VAR_4[VAR_6].bits_per_pixel &&
      VAR_8->red_mask_pos == VAR_4[VAR_6].red.offset &&
      VAR_8->red_mask_size == VAR_4[VAR_6].red.length &&
      VAR_8->green_mask_pos == VAR_4[VAR_6].green.offset &&
      VAR_8->green_mask_size == VAR_4[VAR_6].green.length &&
      VAR_8->blue_mask_pos == VAR_4[VAR_6].blue.offset &&
      VAR_8->blue_mask_size == VAR_4[VAR_6].blue.length &&
      VAR_8->reserved_mask_pos == VAR_4[VAR_6].transp.offset &&
      VAR_8->reserved_mask_size == VAR_4[VAR_6].transp.length)
   VAR_11.format = VAR_4[VAR_6].name;
 }
 if (!VAR_11.format)
  return -VAR_1;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.flags = VAR_3 | VAR_2;
 VAR_10.name = "Coreboot Framebuffer";
 VAR_10.start = VAR_8->physical_address;
 VAR_7 = FUNC_2(VAR_8->y_resolution * VAR_8->bytes_per_line);
 VAR_10.end = VAR_10.start + VAR_7 - 1;
 if (VAR_10.end <= VAR_10.start)
  return -VAR_0;

 VAR_9 = FUNC_6(&VAR_5->dev,
       "simple-framebuffer", 0,
       &VAR_10, 1, &VAR_11,
       sizeof(VAR_11));
 if (FUNC_1(VAR_9))
  FUNC_7("coreboot: could not register framebuffer\n");
 else
  FUNC_4(&VAR_5->dev, VAR_9);

 return FUNC_3(VAR_9);
}
