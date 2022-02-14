
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp {int debugfs_mirror; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
typedef int root_path_buf ;


 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (int ,char*,int) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static const char *FUNC_4(struct tegra_bpmp *VAR_0,
    const struct file *VAR_1, char *VAR_2, int VAR_3)
{
 char VAR_4[512];
 const char *VAR_5;
 const char *VAR_6;
 size_t VAR_7;

 VAR_5 = FUNC_1(VAR_0->debugfs_mirror, VAR_4,
    sizeof(VAR_4));
 if (FUNC_0(VAR_5))
  return ((void*)0);

 VAR_7 = FUNC_2(VAR_5);

 VAR_6 = FUNC_1(VAR_1->f_path.dentry, VAR_2, VAR_3);
 if (FUNC_0(VAR_6))
  return ((void*)0);

 if (FUNC_2(VAR_6) < VAR_7 ||
   FUNC_3(VAR_6, VAR_5, VAR_7))
  return ((void*)0);

 VAR_6 += VAR_7;

 return VAR_6;
}
