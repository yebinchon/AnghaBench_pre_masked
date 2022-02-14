
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_connector {int name; TYPE_1__* dev; int bad_edid_counter; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int ,int,int,int *,int,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_5,
          u8 *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_5->bad_edid_counter++ && !(VAR_4 & VAR_0))
  return;

 FUNC_0(VAR_5->dev->dev,
   "%s: EDID is invalid:\n",
   VAR_5->name);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  u8 *VAR_9 = VAR_6 + VAR_8 * VAR_2;
  char VAR_10[20];

  if (FUNC_2(VAR_9, VAR_2))
   FUNC_4(VAR_10, "\t[%02x] ZERO ", VAR_8);
  else if (!FUNC_1(VAR_9, VAR_8, 0, ((void*)0)))
   FUNC_4(VAR_10, "\t[%02x] BAD  ", VAR_8);
  else
   FUNC_4(VAR_10, "\t[%02x] GOOD ", VAR_8);

  FUNC_3(VAR_3,
          VAR_10, VAR_1, 16, 1,
          VAR_9, VAR_2, 0);
 }
}
