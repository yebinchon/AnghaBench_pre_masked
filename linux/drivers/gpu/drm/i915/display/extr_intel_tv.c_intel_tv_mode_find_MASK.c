
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tv_mode {int dummy; } ;
struct TYPE_2__ {int mode; } ;
struct drm_connector_state {TYPE_1__ tv; } ;


 struct tv_mode const* VAR_0 ;

__attribute__((used)) static const struct tv_mode *FUNC_0(const struct drm_connector_state *VAR_1)
{
 int VAR_2 = VAR_1->tv.mode;

 return &VAR_0[VAR_2];
}
