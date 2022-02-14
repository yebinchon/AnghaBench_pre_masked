
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct picolcd_fb_data {int bpp; int force; int ready; int bitmap; int vbitmap; } ;
struct picolcd_data {TYPE_1__* fb_info; int lock; int hdev; } ;
struct hid_report {int maxfield; TYPE_2__** field; } ;
typedef int mapcmd ;
struct TYPE_4__ {int maxusage; } ;
struct TYPE_3__ {int deferred_work; struct picolcd_fb_data* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct hid_report*,int ) ;
 int FUNC_1 (TYPE_2__*,int,int const) ;
 int FUNC_2 (int ,int ,int) ;
 struct hid_report* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct picolcd_data *VAR_4, int VAR_5)
{
 struct hid_report *VAR_6 = FUNC_3(VAR_3, VAR_4->hdev);
 struct picolcd_fb_data *VAR_7 = VAR_4->fb_info->par;
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 static const u8 VAR_11[8] = { 0x00, 0x02, 0x00, 0x64, 0x3f, 0x00, 0x64, 0xc0 };

 if (!VAR_6 || VAR_6->maxfield != 1)
  return -VAR_0;

 FUNC_5(&VAR_4->lock, VAR_10);
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_6->field[0]->maxusage; VAR_9++)
   if (VAR_9 == 0)
    FUNC_1(VAR_6->field[0], VAR_9, VAR_8 << 2);
   else if (VAR_9 < sizeof(VAR_11))
    FUNC_1(VAR_6->field[0], VAR_9, VAR_11[VAR_9]);
   else
    FUNC_1(VAR_6->field[0], VAR_9, 0);
  FUNC_0(VAR_4->hdev, VAR_6, VAR_1);
 }
 FUNC_6(&VAR_4->lock, VAR_10);

 if (VAR_5) {
  FUNC_2(VAR_7->vbitmap, 0, VAR_2);
  FUNC_2(VAR_7->bitmap, 0, VAR_2*VAR_7->bpp);
 }
 VAR_7->force = 1;


 if (VAR_7->ready)
  FUNC_4(&VAR_4->fb_info->deferred_work, 0);
 else
  VAR_7->ready = 1;

 return 0;
}
