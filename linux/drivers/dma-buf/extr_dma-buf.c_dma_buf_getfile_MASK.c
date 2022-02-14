
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dentry; } ;
struct inode {int f_flags; TYPE_2__ f_path; struct dma_buf* private_data; int i_size; } ;
struct file {int f_flags; TYPE_2__ f_path; struct dma_buf* private_data; int i_size; } ;
struct dma_buf {int size; } ;
struct TYPE_7__ {int mnt_sb; } ;
struct TYPE_5__ {struct dma_buf* d_fsdata; } ;


 struct inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct inode*,TYPE_3__*,char*,int,int *) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static struct file *FUNC_6(struct dma_buf *VAR_4, int VAR_5)
{
 struct file *VAR_6;
 struct inode *VAR_7 = FUNC_2(VAR_3->mnt_sb);

 if (FUNC_1(VAR_7))
  return FUNC_0(VAR_7);

 VAR_7->i_size = VAR_4->size;
 FUNC_4(VAR_7, VAR_4->size);

 VAR_6 = FUNC_3(VAR_7, VAR_3, "dmabuf",
     VAR_5, &VAR_2);
 if (FUNC_1(VAR_6))
  goto err_alloc_file;
 VAR_6->f_flags = VAR_5 & (VAR_0 | VAR_1);
 VAR_6->private_data = VAR_4;
 VAR_6->f_path.dentry->d_fsdata = VAR_4;

 return VAR_6;

err_alloc_file:
 FUNC_5(VAR_7);
 return VAR_6;
}
