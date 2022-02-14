
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_device {struct ast_private* dev_private; } ;
struct ast_private {int* dp501_fw_addr; TYPE_1__* dp501_fw; } ;
struct TYPE_2__ {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct ast_private*,int) ;
 int FUNC_3 (struct ast_private*,int,int) ;
 int FUNC_4 (struct ast_private*,int ,int,int) ;

__attribute__((used)) static bool FUNC_5(struct drm_device *VAR_1)
{
 struct ast_private *VAR_2 = VAR_1->dev_private;
 u32 VAR_3, VAR_4, VAR_5 = 0;
 u32 VAR_6;
 u8 *VAR_7 = ((void*)0);
 u8 VAR_8;

 VAR_4 = FUNC_2(VAR_2, 0x1e6e2100) & 0x01;
 if (!VAR_4) {

  if (VAR_2->dp501_fw_addr) {
   VAR_7 = VAR_2->dp501_fw_addr;
   VAR_5 = 32*1024;
  } else {
   if (!VAR_2->dp501_fw &&
       FUNC_1(VAR_1) < 0)
    return 0;

   VAR_7 = (u8 *)VAR_2->dp501_fw->data;
   VAR_5 = VAR_2->dp501_fw->size;
  }

  FUNC_3(VAR_2, 0x1e6e2000, 0x1688a8a8);
  VAR_4 = FUNC_2(VAR_2, 0x1e6e0004);
  switch (VAR_4 & 0x03) {
  case 0:
   VAR_6 = 0x44000000;
   break;
  default:
  case 1:
   VAR_6 = 0x48000000;
   break;
  case 2:
   VAR_6 = 0x50000000;
   break;
  case 3:
   VAR_6 = 0x60000000;
   break;
  }
  VAR_6 -= 0x200000;


  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3 += 4) {
   VAR_4 = *(u32 *)(VAR_7 + VAR_3);
   FUNC_3(VAR_2, VAR_6 + VAR_3, VAR_4);
  }


  FUNC_3(VAR_2, 0x1e6e2000, 0x1688a8a8);


  FUNC_3(VAR_2, 0x1e6e2104, 0x80000000 + VAR_6);
  FUNC_3(VAR_2, 0x1e6e2100, 1);


  VAR_4 = FUNC_2(VAR_2, 0x1e6e2040) & 0xfffff1ff;
  VAR_4 |= 0x800;
  FUNC_3(VAR_2, 0x1e6e2040, VAR_4);

  VAR_8 = FUNC_0(VAR_2, VAR_0, 0x99, 0xfc);
  VAR_8 |= 0x02;
  FUNC_4(VAR_2, VAR_0, 0x99, VAR_8);
 }
 return 1;
}
