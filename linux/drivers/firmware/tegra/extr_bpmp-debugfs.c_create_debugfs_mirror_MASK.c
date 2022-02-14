
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp {int * debugfs_mirror; } ;
struct seqbuf {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_bpmp*,struct seqbuf*,int *,int ) ;
 int * FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seqbuf*,void*,size_t) ;

__attribute__((used)) static int FUNC_4(struct tegra_bpmp *VAR_1, void *VAR_2,
     size_t VAR_3, struct dentry *VAR_4)
{
 struct seqbuf VAR_5;
 int VAR_6;

 VAR_1->debugfs_mirror = FUNC_1("debug", VAR_4);
 if (!VAR_1->debugfs_mirror)
  return -VAR_0;

 FUNC_3(&VAR_5, VAR_2, VAR_3);
 VAR_6 = FUNC_0(VAR_1, &VAR_5, VAR_1->debugfs_mirror, 0);
 if (VAR_6 < 0) {
  FUNC_2(VAR_1->debugfs_mirror);
  VAR_1->debugfs_mirror = ((void*)0);
 }

 return VAR_6;
}
