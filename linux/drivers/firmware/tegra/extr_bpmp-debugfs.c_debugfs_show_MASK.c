
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp {int dev; } ;
struct seq_file {size_t size; struct file* private; } ;
struct inode {struct tegra_bpmp* i_private; } ;
struct file {int dummy; } ;
typedef int dma_addr_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (int ,size_t const,int *,int) ;
 int FUNC_1 (int ,size_t const,void*,int ) ;
 struct inode* FUNC_2 (struct file*) ;
 char* FUNC_3 (struct tegra_bpmp*,struct file*,char*,int) ;
 int FUNC_4 (struct tegra_bpmp*,int ,size_t,int ,size_t const,size_t*) ;
 int FUNC_5 (struct seq_file*,void*,size_t) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (void*,char const*,size_t const) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_5, void *VAR_6)
{
 struct file *VAR_7 = VAR_5->private;
 struct inode *VAR_8 = FUNC_2(VAR_7);
 struct tegra_bpmp *VAR_9 = VAR_8->i_private;
 const size_t VAR_10 = VAR_5->size;
 const size_t VAR_11 = VAR_4;
 void *VAR_12, *VAR_13;
 dma_addr_t VAR_14, VAR_15;
 char VAR_16[256];
 const char *VAR_17;
 size_t VAR_18, VAR_19;
 int VAR_20;

 VAR_17 = FUNC_3(VAR_9, VAR_7, VAR_16, sizeof(VAR_16));
 if (!VAR_17)
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_9->dev, VAR_11, &VAR_15,
          VAR_3 | VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_0(VAR_9->dev, VAR_10, &VAR_14,
          VAR_3 | VAR_2);
 if (!VAR_12) {
  VAR_20 = -VAR_1;
  goto free_namebuf;
 }

 VAR_18 = FUNC_6(VAR_17);
 FUNC_7(VAR_13, VAR_17, VAR_11);

 VAR_20 = FUNC_4(VAR_9, VAR_15, VAR_18, VAR_14, VAR_10,
          &VAR_19);

 if (!VAR_20)
  FUNC_5(VAR_5, VAR_12, VAR_19);

 FUNC_1(VAR_9->dev, VAR_10, VAR_12, VAR_14);
free_namebuf:
 FUNC_1(VAR_9->dev, VAR_11, VAR_13, VAR_15);

 return VAR_20;
}
