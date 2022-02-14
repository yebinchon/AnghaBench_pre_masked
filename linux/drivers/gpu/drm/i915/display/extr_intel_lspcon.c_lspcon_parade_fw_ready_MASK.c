
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_aux {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_dp_aux*,int ,int*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static bool FUNC_3(struct drm_dp_aux *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 ssize_t VAR_5;


 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  if (VAR_4)
   FUNC_2(200, 300);

  VAR_5 = FUNC_1(VAR_2, VAR_0,
           &VAR_3, 1);
  if (VAR_5 < 0) {
   FUNC_0("Failed to read AVI IF control\n");
   return 0;
  }

  if ((VAR_3 & VAR_1) == 0)
   return 1;
 }

 FUNC_0("Parade FW not ready to accept AVI IF\n");
 return 0;
}
