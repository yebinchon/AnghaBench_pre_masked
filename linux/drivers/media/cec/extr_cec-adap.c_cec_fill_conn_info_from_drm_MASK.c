
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
struct drm_connector {TYPE_4__ base; TYPE_2__* dev; } ;
struct TYPE_7__ {int connector_id; int card_no; } ;
struct cec_connector_info {TYPE_3__ drm; int type; } ;
struct TYPE_6__ {TYPE_1__* primary; } ;
struct TYPE_5__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct cec_connector_info*,int ,int) ;

void FUNC_1(struct cec_connector_info *VAR_1,
     const struct drm_connector *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->type = VAR_0;
 VAR_1->drm.card_no = VAR_2->dev->primary->index;
 VAR_1->drm.connector_id = VAR_2->base.id;
}
