
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct rcar_du_plane {TYPE_1__ plane; } ;
struct rcar_du_format_info {int dummy; } ;
struct TYPE_4__ {struct rcar_du_format_info const* format; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static const struct rcar_du_format_info *
FUNC_1(struct rcar_du_plane *VAR_0)
{
 return FUNC_0(VAR_0->plane.state)->format;
}
