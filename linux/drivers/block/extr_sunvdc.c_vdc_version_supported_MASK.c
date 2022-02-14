
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ major; scalar_t__ minor; } ;
struct TYPE_4__ {TYPE_1__ ver; } ;
struct vdc_port {TYPE_2__ vio; } ;



__attribute__((used)) static inline int FUNC_0(struct vdc_port *VAR_0,
     u16 VAR_1, u16 VAR_2)
{
 return VAR_0->vio.ver.major == VAR_1 && VAR_0->vio.ver.minor >= VAR_2;
}
