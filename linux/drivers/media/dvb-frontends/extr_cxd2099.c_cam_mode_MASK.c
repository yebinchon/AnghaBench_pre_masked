
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int read_data; } ;
struct cxd {int cammode; TYPE_1__* client; int write_busy; TYPE_2__ en; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct cxd*,int,int *) ;
 int FUNC_2 (struct cxd*,int,int) ;
 int FUNC_3 (struct cxd*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct cxd *VAR_0, int VAR_1)
{
 u8 VAR_2;

 if (VAR_1 == VAR_0->cammode)
  return;

 switch (VAR_1) {
 case 0x00:
  FUNC_3(VAR_0, 0x20, 0x80, 0x80);
  break;
 case 0x01:
  if (!VAR_0->en.read_data)
   return;
  VAR_0->write_busy = 0;
  FUNC_0(&VAR_0->client->dev, "enable cam buffer mode\n");
  FUNC_2(VAR_0, 0x0d, 0x00);
  FUNC_2(VAR_0, 0x0e, 0x01);
  FUNC_3(VAR_0, 0x08, 0x40, 0x40);
  FUNC_1(VAR_0, 0x12, &VAR_2);
  FUNC_3(VAR_0, 0x08, 0x80, 0x80);
  break;
 default:
  break;
 }
 VAR_0->cammode = VAR_1;
}
