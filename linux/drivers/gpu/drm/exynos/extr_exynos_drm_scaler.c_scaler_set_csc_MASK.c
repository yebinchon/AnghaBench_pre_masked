
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int member_0; int member_1; int member_2; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; } ;
struct TYPE_9__ {TYPE_2__ member_2; TYPE_1__ member_1; TYPE_3__ member_0; } ;
typedef TYPE_4__ u32 ;
struct scaler_context {int dummy; } ;
struct drm_format_info {int format; } ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__ const,int ) ;

__attribute__((used)) static inline void FUNC_2(struct scaler_context *VAR_0,
 const struct drm_format_info *VAR_1)
{
 static const u32 VAR_2[2][3][3] = {
  {
   {0x254, 0x000, 0x331},
   {0x254, 0xf38, 0xe60},
   {0x254, 0x409, 0x000},
  },
  {
   {0x084, 0x102, 0x032},
   {0xfb4, 0xf6b, 0x0e1},
   {0x0e1, 0xf44, 0xfdc},
  },
 };
 int VAR_3, VAR_4, VAR_5;

 switch (VAR_1->format) {
 case 133:
 case 130:
 case 136:
 case 129:
 case 135:
 case 128:
 case 134:
 case 131:
 case 132:
  VAR_5 = 1;
  break;
 default:
  VAR_5 = 0;
 }

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
   FUNC_1(VAR_2[VAR_5][VAR_3][VAR_4], FUNC_0(VAR_4, VAR_3));
}
