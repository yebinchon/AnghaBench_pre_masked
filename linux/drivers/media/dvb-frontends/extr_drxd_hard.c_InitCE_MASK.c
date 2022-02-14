
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int app_env_default; scalar_t__ operation_mode; int app_env_diversity; scalar_t__ type_A; int m_InitCE; } ;
typedef enum app_env { ____Placeholder_app_env } app_env ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct drxd_state*,int ,int,int ) ;
 int FUNC_1 (struct drxd_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct drxd_state *VAR_7)
{
 int VAR_8;
 enum app_env VAR_9 = VAR_7->app_env_default;

 do {
  VAR_8 = FUNC_1(VAR_7, VAR_7->m_InitCE);
  if (VAR_8 < 0)
   break;

  if (VAR_7->operation_mode == VAR_6 ||
      VAR_7->operation_mode == VAR_5) {
   VAR_9 = VAR_7->app_env_diversity;
  }
  if (VAR_9 == VAR_2) {
   VAR_8 = FUNC_0(VAR_7, VAR_4, 0x0000, 0);
   if (VAR_8 < 0)
    break;
  } else if (VAR_9 == VAR_1) {
   VAR_8 = FUNC_0(VAR_7, VAR_4, 0x0001, 0);
   if (VAR_8 < 0)
    break;
  } else if (VAR_9 == VAR_0 && VAR_7->type_A) {
   VAR_8 = FUNC_0(VAR_7, VAR_4, 0x0002, 0);
   if (VAR_8 < 0)
    break;
  } else if (VAR_9 == VAR_0 && !VAR_7->type_A) {
   VAR_8 = FUNC_0(VAR_7, VAR_4, 0x0006, 0);
   if (VAR_8 < 0)
    break;
  }


  VAR_8 = FUNC_0(VAR_7, VAR_3, 0x0001, 0);
  if (VAR_8 < 0)
   break;
 } while (0);
 return VAR_8;
}
