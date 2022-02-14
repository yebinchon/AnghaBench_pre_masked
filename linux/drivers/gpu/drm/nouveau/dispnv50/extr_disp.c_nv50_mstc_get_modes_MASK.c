
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bpc; } ;
struct TYPE_8__ {int dev; TYPE_1__ display_info; } ;
struct nv50_mstc {TYPE_2__ connector; scalar_t__ native; scalar_t__ edid; TYPE_4__* port; } ;
struct drm_connector {int dummy; } ;
struct TYPE_9__ {int mgr; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,TYPE_4__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 struct nv50_mstc* FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_6(struct drm_connector *VAR_0)
{
 struct nv50_mstc *VAR_1 = FUNC_5(VAR_0);
 int VAR_2 = 0;

 VAR_1->edid = FUNC_2(&VAR_1->connector, VAR_1->port->mgr, VAR_1->port);
 FUNC_1(&VAR_1->connector, VAR_1->edid);
 if (VAR_1->edid)
  VAR_2 = FUNC_0(&VAR_1->connector, VAR_1->edid);

 if (!VAR_1->connector.display_info.bpc)
  VAR_1->connector.display_info.bpc = 8;

 if (VAR_1->native)
  FUNC_3(VAR_1->connector.dev, VAR_1->native);
 VAR_1->native = FUNC_4(&VAR_1->connector);
 return VAR_2;
}
