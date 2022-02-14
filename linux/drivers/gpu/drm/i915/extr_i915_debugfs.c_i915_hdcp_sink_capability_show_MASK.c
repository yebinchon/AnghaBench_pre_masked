
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct drm_connector* private; } ;
struct TYPE_3__ {int shim; } ;
struct intel_connector {TYPE_1__ hdcp; } ;
struct TYPE_4__ {int id; } ;
struct drm_connector {scalar_t__ status; TYPE_2__ base; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct seq_file*,struct intel_connector*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;
 struct intel_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_3, void *VAR_4)
{
 struct drm_connector *VAR_5 = VAR_3->private;
 struct intel_connector *VAR_6 = FUNC_2(VAR_5);

 if (VAR_5->status != VAR_2)
  return -VAR_1;


 if (!VAR_6->hdcp.shim)
  return -VAR_0;

 FUNC_1(VAR_3, "%s:%d HDCP version: ", VAR_5->name,
     VAR_5->base.id);
 FUNC_0(VAR_3, VAR_6);

 return 0;
}
