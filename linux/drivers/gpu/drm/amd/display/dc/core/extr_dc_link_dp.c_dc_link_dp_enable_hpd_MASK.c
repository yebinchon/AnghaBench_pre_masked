
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_encoder {TYPE_1__* funcs; } ;
struct dc_link {struct link_encoder* link_enc; } ;
struct TYPE_2__ {int (* enable_hpd ) (struct link_encoder*) ;} ;


 int FUNC_0 (struct link_encoder*) ;

void FUNC_1(const struct dc_link *VAR_0)
{
 struct link_encoder *VAR_1 = VAR_0->link_enc;

 if (VAR_1 != ((void*)0) && VAR_1->funcs->enable_hpd != ((void*)0))
  VAR_1->funcs->enable_hpd(VAR_1);
}
