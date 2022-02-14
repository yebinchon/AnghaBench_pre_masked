
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct komeda_plane {TYPE_2__* layer; } ;
struct komeda_dev {int fmt_tbl; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_4__ {int layer_type; } ;
struct TYPE_3__ {struct komeda_dev* dev_private; } ;


 int FUNC_0 (int *,int ,int ,int ,int ) ;
 struct komeda_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static bool
FUNC_2(struct drm_plane *VAR_0,
      u32 VAR_1, u64 VAR_2)
{
 struct komeda_dev *VAR_3 = VAR_0->dev->dev_private;
 struct komeda_plane *VAR_4 = FUNC_1(VAR_0);
 u32 VAR_5 = VAR_4->layer->layer_type;

 return FUNC_0(&VAR_3->fmt_tbl, VAR_5,
        VAR_1, VAR_2, 0);
}
