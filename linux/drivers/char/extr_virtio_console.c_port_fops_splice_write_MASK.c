
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct sg_list* data; } ;
struct splice_desc {size_t total_len; unsigned int flags; TYPE_1__ u; int pos; } ;
struct sg_list {scalar_t__ len; scalar_t__ n; scalar_t__ size; int sg; } ;
struct port_buffer {int sg; } ;
struct port {TYPE_3__* portdev; TYPE_2__* out_vq; } ;
struct pipe_inode_info {scalar_t__ nrbufs; } ;
struct file {int f_flags; struct port* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {int vdev; } ;
struct TYPE_5__ {int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct port*,int ,scalar_t__,scalar_t__,struct port_buffer*,int) ;
 int FUNC_1 (struct pipe_inode_info*,struct splice_desc*,int ) ;
 struct port_buffer* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct port_buffer*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct pipe_inode_info*) ;
 int VAR_3 ;
 int FUNC_7 (struct pipe_inode_info*) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct port*,int) ;

__attribute__((used)) static ssize_t FUNC_11(struct pipe_inode_info *VAR_4,
          struct file *VAR_5, loff_t *VAR_6,
          size_t VAR_7, unsigned int VAR_8)
{
 struct port *VAR_9 = VAR_5->private_data;
 struct sg_list VAR_10;
 ssize_t VAR_11;
 struct port_buffer *VAR_12;
 struct splice_desc VAR_13 = {
  .total_len = VAR_7,
  .flags = VAR_8,
  .pos = *VAR_6,
  .u.data = &VAR_10,
 };







 if (FUNC_4(VAR_9->out_vq->vdev))
  return -VAR_0;





 FUNC_6(VAR_4);
 if (!VAR_4->nrbufs) {
  VAR_11 = 0;
  goto error_out;
 }

 VAR_11 = FUNC_10(VAR_9, VAR_5->f_flags & VAR_2);
 if (VAR_11 < 0)
  goto error_out;

 VAR_12 = FUNC_2(VAR_9->portdev->vdev, 0, VAR_4->nrbufs);
 if (!VAR_12) {
  VAR_11 = -VAR_1;
  goto error_out;
 }

 VAR_10.n = 0;
 VAR_10.len = 0;
 VAR_10.size = VAR_4->nrbufs;
 VAR_10.sg = VAR_12->sg;
 FUNC_8(VAR_10.sg, VAR_10.size);
 VAR_11 = FUNC_1(VAR_4, &VAR_13, VAR_3);
 FUNC_7(VAR_4);
 if (FUNC_5(VAR_11 > 0))
  VAR_11 = FUNC_0(VAR_9, VAR_12->sg, VAR_10.n, VAR_10.len, VAR_12, 1);

 if (FUNC_9(VAR_11 <= 0))
  FUNC_3(VAR_12, 1);
 return VAR_11;

error_out:
 FUNC_7(VAR_4);
 return VAR_11;
}
