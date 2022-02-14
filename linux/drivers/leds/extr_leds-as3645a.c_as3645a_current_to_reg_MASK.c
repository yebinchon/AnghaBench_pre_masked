
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flash_max_ua; int assist_max_ua; } ;
struct as3645a {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct as3645a *VAR_4, bool VAR_5,
        unsigned int VAR_6)
{
 if (VAR_5)
  return FUNC_0(VAR_2,
      VAR_4->cfg.assist_max_ua,
      VAR_3, VAR_6);
 else
  return FUNC_0(VAR_0,
      VAR_4->cfg.flash_max_ua,
      VAR_1, VAR_6);
}
