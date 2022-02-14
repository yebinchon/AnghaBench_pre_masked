
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int clock_mode; int bitrate; scalar_t__ polarity; } ;
struct cxd {int mode; int clk_reg_b; int clk_reg_f; int cammode; int lock; TYPE_1__ cfg; } ;


 int FUNC_0 (struct cxd*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cxd*,int,int) ;
 int FUNC_4 (struct cxd*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct cxd *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_0->mode = -1;
 do {
  VAR_1 = FUNC_3(VAR_0, 0x00, 0x00);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x01, 0x00);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x02, 0x10);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x03, 0x00);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x05, 0xFF);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x06, 0x1F);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x07, 0x1F);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x08, 0x28);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x14, 0x20);
  if (VAR_1 < 0)
   break;




  VAR_1 = FUNC_3(VAR_0, 0x0A, 0xA7);
  if (VAR_1 < 0)
   break;

  VAR_1 = FUNC_3(VAR_0, 0x0B, 0x33);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x0C, 0x33);
  if (VAR_1 < 0)
   break;

  VAR_1 = FUNC_4(VAR_0, 0x14, 0x00, 0x0F);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x15, VAR_0->clk_reg_b);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_4(VAR_0, 0x16, 0x00, 0x0F);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x17, VAR_0->clk_reg_f);
  if (VAR_1 < 0)
   break;

  if (VAR_0->cfg.clock_mode == 2) {

   u32 VAR_2 = ((VAR_0->cfg.bitrate << 13) + 71999) / 72000;

   if (VAR_0->cfg.polarity) {
    VAR_1 = FUNC_3(VAR_0, 0x09, 0x6f);
    if (VAR_1 < 0)
     break;
   } else {
    VAR_1 = FUNC_3(VAR_0, 0x09, 0x6d);
    if (VAR_1 < 0)
     break;
   }
   VAR_1 = FUNC_3(VAR_0, 0x20, 0x08);
   if (VAR_1 < 0)
    break;
   VAR_1 = FUNC_3(VAR_0, 0x21, (VAR_2 >> 8) & 0xff);
   if (VAR_1 < 0)
    break;
   VAR_1 = FUNC_3(VAR_0, 0x22, VAR_2 & 0xff);
   if (VAR_1 < 0)
    break;
  } else if (VAR_0->cfg.clock_mode == 1) {
   if (VAR_0->cfg.polarity) {
    VAR_1 = FUNC_3(VAR_0, 0x09, 0x6f);
    if (VAR_1 < 0)
     break;
   } else {
    VAR_1 = FUNC_3(VAR_0, 0x09, 0x6d);
    if (VAR_1 < 0)
     break;
   }
   VAR_1 = FUNC_3(VAR_0, 0x20, 0x68);
   if (VAR_1 < 0)
    break;
   VAR_1 = FUNC_3(VAR_0, 0x21, 0x00);
   if (VAR_1 < 0)
    break;
   VAR_1 = FUNC_3(VAR_0, 0x22, 0x02);
   if (VAR_1 < 0)
    break;
  } else {
   if (VAR_0->cfg.polarity) {
    VAR_1 = FUNC_3(VAR_0, 0x09, 0x4f);
    if (VAR_1 < 0)
     break;
   } else {
    VAR_1 = FUNC_3(VAR_0, 0x09, 0x4d);
    if (VAR_1 < 0)
     break;
   }
   VAR_1 = FUNC_3(VAR_0, 0x20, 0x28);
   if (VAR_1 < 0)
    break;
   VAR_1 = FUNC_3(VAR_0, 0x21, 0x00);
   if (VAR_1 < 0)
    break;
   VAR_1 = FUNC_3(VAR_0, 0x22, 0x07);
   if (VAR_1 < 0)
    break;
  }

  VAR_1 = FUNC_4(VAR_0, 0x20, 0x80, 0x80);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_4(VAR_0, 0x03, 0x02, 0x02);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x01, 0x04);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_3(VAR_0, 0x00, 0x31);
  if (VAR_1 < 0)
   break;


  VAR_1 = FUNC_4(VAR_0, 0x09, 0x08, 0x08);
  if (VAR_1 < 0)
   break;
  VAR_0->cammode = -1;
  FUNC_0(VAR_0, 0);
 } while (0);
 FUNC_2(&VAR_0->lock);

 return 0;
}
