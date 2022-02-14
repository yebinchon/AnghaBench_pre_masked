
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sti_hda {int dummy; } ;
struct drm_minor {int debugfs_root; } ;
struct TYPE_4__ {struct sti_hda* data; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int ,struct drm_minor*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct sti_hda *VAR_1, struct drm_minor *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  VAR_0[VAR_3].data = VAR_1;

 return FUNC_1(VAR_0,
     FUNC_0(VAR_0),
     VAR_2->debugfs_root, VAR_2);
}
