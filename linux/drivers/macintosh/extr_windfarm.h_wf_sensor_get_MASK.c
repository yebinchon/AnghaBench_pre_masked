
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wf_sensor {TYPE_1__* ops; } ;
typedef int s32 ;
struct TYPE_2__ {int (* get_value ) (struct wf_sensor*,int *) ;} ;


 int FUNC_0 (struct wf_sensor*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct wf_sensor *VAR_0, s32 *VAR_1)
{
 return VAR_0->ops->get_value(VAR_0, VAR_1);
}
