
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_4__ {scalar_t__ connector_type; struct dentry* debugfs_entry; } ;
struct amdgpu_dm_connector {TYPE_1__ base; } ;
struct TYPE_5__ {int fops; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int,struct dentry*,struct amdgpu_dm_connector*,int ) ;
 TYPE_2__* VAR_2 ;

void FUNC_2(struct amdgpu_dm_connector *VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5 = VAR_3->base.debugfs_entry;

 if (VAR_3->base.connector_type == VAR_0 ||
     VAR_3->base.connector_type == VAR_1) {
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
   FUNC_1(VAR_2[VAR_4].name,
         0644, VAR_5, VAR_3,
         VAR_2[VAR_4].fops);
  }
 }
}
