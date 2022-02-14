
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_bridge {int dummy; } ;
struct anx78xx {int * map; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 struct anx78xx* FUNC_1 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_6)
{
 struct anx78xx *VAR_7 = FUNC_1(VAR_6);


 FUNC_0(VAR_7->map[VAR_0], VAR_4,
    VAR_2 | VAR_1 | VAR_5 | VAR_3);
}
