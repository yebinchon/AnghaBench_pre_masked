
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v3d_dev {int ver; int cores; } ;
struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_8__ {int reg; int name; } ;
struct TYPE_7__ {struct drm_device* dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*,int,int ,int ,...) ;
 struct v3d_dev* FUNC_5 (struct drm_device*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_6 (struct v3d_dev*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_4, void *VAR_5)
{
 struct drm_info_node *VAR_6 = (struct drm_info_node *)VAR_4->private;
 struct drm_device *VAR_7 = VAR_6->minor->dev;
 struct v3d_dev *VAR_8 = FUNC_5(VAR_7);
 int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
  FUNC_4(VAR_4, "%s (0x%04x): 0x%08x\n",
      VAR_3[VAR_9].name, VAR_3[VAR_9].reg,
      FUNC_3(VAR_3[VAR_9].reg));
 }

 if (VAR_8->ver < 41) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
   FUNC_4(VAR_4, "%s (0x%04x): 0x%08x\n",
       VAR_2[VAR_9].name,
       VAR_2[VAR_9].reg,
       FUNC_2(VAR_2[VAR_9].reg));
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->cores; VAR_10++) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_0); VAR_9++) {
   FUNC_4(VAR_4, "core %d %s (0x%04x): 0x%08x\n",
       VAR_10,
       VAR_0[VAR_9].name,
       VAR_0[VAR_9].reg,
       FUNC_1(VAR_10,
       VAR_0[VAR_9].reg));
  }

  if (FUNC_6(VAR_8)) {
   for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
    FUNC_4(VAR_4, "core %d %s (0x%04x): 0x%08x\n",
        VAR_10,
        VAR_1[VAR_9].name,
        VAR_1[VAR_9].reg,
        FUNC_1(VAR_10,
        VAR_1[VAR_9].reg));
   }
  }
 }

 return 0;
}
