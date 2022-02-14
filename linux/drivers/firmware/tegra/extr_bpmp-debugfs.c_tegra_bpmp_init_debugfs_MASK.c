
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp {int dev; } ;
struct dentry {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct tegra_bpmp*,void*,size_t,struct dentry*) ;
 struct dentry* FUNC_1 (char*,int *) ;
 int FUNC_2 (struct dentry*) ;
 void* FUNC_3 (int ,size_t const,int *,int) ;
 int FUNC_4 (int ,size_t const,void*,int ) ;
 int FUNC_5 (struct tegra_bpmp*,int ,size_t const,size_t*) ;
 int FUNC_6 (struct tegra_bpmp*,int ) ;

int FUNC_7(struct tegra_bpmp *VAR_5)
{
 dma_addr_t VAR_6;
 void *VAR_7;
 const size_t VAR_8 = VAR_4;
 size_t VAR_9;
 int VAR_10;
 struct dentry *VAR_11;

 if (!FUNC_6(VAR_5, VAR_3))
  return 0;

 VAR_11 = FUNC_1("bpmp", ((void*)0));
 if (!VAR_11)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_5->dev, VAR_8, &VAR_6,
      VAR_2 | VAR_1);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_8, &VAR_9);
 if (VAR_10 < 0)
  goto free;

 VAR_10 = FUNC_0(VAR_5, VAR_7, VAR_9, VAR_11);
free:
 FUNC_4(VAR_5->dev, VAR_8, VAR_7, VAR_6);
out:
 if (VAR_10 < 0)
  FUNC_2(VAR_11);

 return VAR_10;
}
