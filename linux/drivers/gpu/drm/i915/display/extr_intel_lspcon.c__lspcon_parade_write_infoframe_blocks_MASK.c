
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct drm_dp_aux {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct drm_dp_aux*,int ,int*,int) ;
 int FUNC_3 (struct drm_dp_aux*) ;

__attribute__((used)) static bool FUNC_4(struct drm_dp_aux *VAR_3,
        u8 *VAR_4)
{
 u8 VAR_5;
 u8 VAR_6 = 0;
 u8 *VAR_7;
 u16 VAR_8;
 ssize_t VAR_9;

 while (VAR_6 < 4) {
  if (!FUNC_3(VAR_3)) {
   FUNC_0("LSPCON FW not ready, block %d\n",
          VAR_6);
   return 0;
  }

  VAR_8 = VAR_2;
  VAR_7 = VAR_4 + VAR_6 * 8;
  VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_7, 8);
  if (VAR_9 < 0) {
   FUNC_1("Failed to write AVI IF block %d\n",
      VAR_6);
   return 0;
  }







  VAR_8 = VAR_0;
  VAR_5 = VAR_1 | VAR_6;
  VAR_9 = FUNC_2(VAR_3, VAR_8, &VAR_5, 1);
  if (VAR_9 < 0) {
   FUNC_1("Failed to update (0x%x), block %d\n",
      VAR_8, VAR_6);
   return 0;
  }

  VAR_6++;
 }

 FUNC_0("Wrote AVI IF blocks successfully\n");
 return 1;
}
