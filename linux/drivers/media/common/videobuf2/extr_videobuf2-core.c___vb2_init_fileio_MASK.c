
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int io_modes; int num_buffers; struct vb2_fileio_data* fileio; int type; TYPE_3__** bufs; int fileio_write_immediately; int fileio_read_once; scalar_t__ streaming; TYPE_1__* mem_ops; } ;
struct vb2_fileio_data {unsigned int count; int initial_index; int cur_index; int memory; TYPE_2__* bufs; int type; int write_immediately; int read_once; } ;
struct TYPE_7__ {int num_planes; } ;
struct TYPE_6__ {int queued; int size; int * vaddr; } ;
struct TYPE_5__ {int vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*,unsigned int,int ,int ) ;
 int FUNC_2 (struct vb2_fileio_data*) ;
 struct vb2_fileio_data* FUNC_3 (int,int ) ;
 int FUNC_4 (struct vb2_queue*,int,int *,int *) ;
 int FUNC_5 (struct vb2_queue*,int ,unsigned int*) ;
 int FUNC_6 (struct vb2_queue*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int * FUNC_8 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_9(struct vb2_queue *VAR_7, int VAR_8)
{
 struct vb2_fileio_data *VAR_9;
 int VAR_10, VAR_11;
 unsigned int VAR_12 = 0;




 if (FUNC_0((VAR_8 && !(VAR_7->io_modes & VAR_5)) ||
      (!VAR_8 && !(VAR_7->io_modes & VAR_6))))
  return -VAR_1;




 if (!VAR_7->mem_ops->vaddr)
  return -VAR_0;




 if (VAR_7->streaming || VAR_7->num_buffers > 0)
  return -VAR_0;




 VAR_12 = 1;

 FUNC_1(3, "setting up file io: mode %s, count %d, read_once %d, write_immediately %d\n",
  (VAR_8) ? "read" : "write", VAR_12, VAR_7->fileio_read_once,
  VAR_7->fileio_write_immediately);

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_9->read_once = VAR_7->fileio_read_once;
 VAR_9->write_immediately = VAR_7->fileio_write_immediately;





 VAR_9->count = VAR_12;
 VAR_9->memory = VAR_4;
 VAR_9->type = VAR_7->type;
 VAR_7->fileio = VAR_9;
 VAR_11 = FUNC_5(VAR_7, VAR_9->memory, &VAR_9->count);
 if (VAR_11)
  goto err_kfree;





 if (VAR_7->bufs[0]->num_planes != 1) {
  VAR_11 = -VAR_0;
  goto err_reqbufs;
 }




 for (VAR_10 = 0; VAR_10 < VAR_7->num_buffers; VAR_10++) {
  VAR_9->bufs[VAR_10].vaddr = FUNC_8(VAR_7->bufs[VAR_10], 0);
  if (VAR_9->bufs[VAR_10].vaddr == ((void*)0)) {
   VAR_11 = -VAR_1;
   goto err_reqbufs;
  }
  VAR_9->bufs[VAR_10].size = FUNC_7(VAR_7->bufs[VAR_10], 0);
 }




 if (VAR_8) {



  for (VAR_10 = 0; VAR_10 < VAR_7->num_buffers; VAR_10++) {
   VAR_11 = FUNC_4(VAR_7, VAR_10, ((void*)0), ((void*)0));
   if (VAR_11)
    goto err_reqbufs;
   VAR_9->bufs[VAR_10].queued = 1;
  }




  VAR_9->initial_index = VAR_7->num_buffers;
  VAR_9->cur_index = VAR_7->num_buffers;
 }




 VAR_11 = FUNC_6(VAR_7, VAR_7->type);
 if (VAR_11)
  goto err_reqbufs;

 return VAR_11;

err_reqbufs:
 VAR_9->count = 0;
 FUNC_5(VAR_7, VAR_9->memory, &VAR_9->count);

err_kfree:
 VAR_7->fileio = ((void*)0);
 FUNC_2(VAR_9);
 return VAR_11;
}
