
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct drm_connector* private; } ;
struct drm_connector {scalar_t__ status; } ;
struct amdgpu_dm_connector {scalar_t__ max_vfreq; scalar_t__ min_vfreq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,unsigned int) ;
 struct amdgpu_dm_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 struct drm_connector *VAR_4 = VAR_2->private;
 struct amdgpu_dm_connector *VAR_5 = FUNC_1(VAR_4);

 if (VAR_4->status != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2, "Min: %u\n", (unsigned int)VAR_5->min_vfreq);
 FUNC_0(VAR_2, "Max: %u\n", (unsigned int)VAR_5->max_vfreq);

 return 0;
}
