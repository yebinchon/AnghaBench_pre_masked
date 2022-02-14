
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct dispc_device*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_1,
         enum omap_plane_id VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0;
 if (VAR_2 != VAR_0) {
  switch (VAR_3) {
  case 139:
   VAR_4 = 0x0; break;
  case 130:
   VAR_4 = 0x1; break;
  case 136:
   VAR_4 = 0x2; break;
  case 134:
   VAR_4 = 0x4; break;
  case 141:
   VAR_4 = 0x5; break;
  case 138:
   VAR_4 = 0x6; break;
  case 142:
   VAR_4 = 0x7; break;
  case 129:
   VAR_4 = 0x8; break;
  case 137:
   VAR_4 = 0x9; break;
  case 128:
   VAR_4 = 0xa; break;
  case 132:
   VAR_4 = 0xb; break;
  case 140:
   VAR_4 = 0xc; break;
  case 135:
   VAR_4 = 0xd; break;
  case 133:
   VAR_4 = 0xe; break;
  case 131:
   VAR_4 = 0xf; break;
  default:
   FUNC_0(); return;
  }
 } else {
  switch (VAR_3) {
  case 134:
   VAR_4 = 0x4; break;
  case 141:
   VAR_4 = 0x5; break;
  case 138:
   VAR_4 = 0x6; break;
  case 142:
   VAR_4 = 0x7; break;
  case 129:
   VAR_4 = 0x8; break;
  case 137:
   VAR_4 = 0x9; break;
  case 130:
   VAR_4 = 0xa; break;
  case 136:
   VAR_4 = 0xb; break;
  case 140:
   VAR_4 = 0xc; break;
  case 135:
   VAR_4 = 0xd; break;
  case 133:
   VAR_4 = 0xe; break;
  case 131:
   VAR_4 = 0xf; break;
  default:
   FUNC_0(); return;
  }
 }

 FUNC_2(VAR_1, FUNC_1(VAR_2), VAR_4, 4, 1);
}
