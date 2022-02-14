
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_connector {scalar_t__ status; int name; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_1)
{
 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_1->base.id, VAR_1->name);

 FUNC_2(VAR_1);

 if (VAR_1->status != VAR_0)
  return;

 FUNC_1(VAR_1);
}
