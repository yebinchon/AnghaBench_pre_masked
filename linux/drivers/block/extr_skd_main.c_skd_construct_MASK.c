
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {int major; int cur_max_queue_depth; int queue_low_water_mark; int proto_ver; int sgs_per_request; struct pci_dev* pdev; void* databuf_cache; void* sglist_cache; void* msgbuf_cache; int completion_worker; int start_queue; int lock; int dbg_level; void* num_fitmsg_context; void* num_req_context; scalar_t__ dev_max_queue_depth; scalar_t__ devno; int state; } ;
struct pci_dev {int dev; } ;
struct fit_sg_descriptor {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,size_t,size_t) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (char*,size_t,int ,int ,int *) ;
 size_t FUNC_5 (void*) ;
 struct skd_device* FUNC_6 (int,int ) ;
 size_t FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (struct skd_device*) ;
 int FUNC_9 (struct skd_device*) ;
 int FUNC_10 (struct skd_device*) ;
 int FUNC_11 (struct skd_device*) ;
 int VAR_7 ;
 int FUNC_12 (struct skd_device*) ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (int *) ;

__attribute__((used)) static struct skd_device *FUNC_14(struct pci_dev *VAR_13)
{
 struct skd_device *VAR_14;
 int VAR_15 = VAR_8;
 size_t VAR_16;
 int VAR_17;

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_0);

 if (!VAR_14) {
  FUNC_3(&VAR_13->dev, "memory alloc failure\n");
  return ((void*)0);
 }

 VAR_14->state = VAR_1;
 VAR_14->pdev = VAR_13;
 VAR_14->devno = VAR_10++;
 VAR_14->major = VAR_15;
 VAR_14->dev_max_queue_depth = 0;

 VAR_14->num_req_context = VAR_9;
 VAR_14->num_fitmsg_context = VAR_9;
 VAR_14->cur_max_queue_depth = 1;
 VAR_14->queue_low_water_mark = 1;
 VAR_14->proto_ver = 99;
 VAR_14->sgs_per_request = VAR_11;
 VAR_14->dbg_level = VAR_7;

 FUNC_13(&VAR_14->lock);

 FUNC_0(&VAR_14->start_queue, VAR_12);
 FUNC_0(&VAR_14->completion_worker, VAR_6);

 VAR_16 = FUNC_7(VAR_2, VAR_4);
 VAR_14->msgbuf_cache = FUNC_4("skd-msgbuf", VAR_16, 0,
      VAR_5, ((void*)0));
 if (!VAR_14->msgbuf_cache)
  goto err_out;
 FUNC_1(FUNC_5(VAR_14->msgbuf_cache) < VAR_16,
    "skd-msgbuf: %d < %zd\n",
    FUNC_5(VAR_14->msgbuf_cache), VAR_16);
 VAR_16 = VAR_11 * sizeof(struct fit_sg_descriptor);
 VAR_14->sglist_cache = FUNC_4("skd-sglist", VAR_16, 0,
      VAR_5, ((void*)0));
 if (!VAR_14->sglist_cache)
  goto err_out;
 FUNC_1(FUNC_5(VAR_14->sglist_cache) < VAR_16,
    "skd-sglist: %d < %zd\n",
    FUNC_5(VAR_14->sglist_cache), VAR_16);
 VAR_16 = VAR_3;
 VAR_14->databuf_cache = FUNC_4("skd-databuf", VAR_16, 0,
       VAR_5, ((void*)0));
 if (!VAR_14->databuf_cache)
  goto err_out;
 FUNC_1(FUNC_5(VAR_14->databuf_cache) < VAR_16,
    "skd-databuf: %d < %zd\n",
    FUNC_5(VAR_14->databuf_cache), VAR_16);

 FUNC_2(&VAR_14->pdev->dev, "skcomp\n");
 VAR_17 = FUNC_9(VAR_14);
 if (VAR_17 < 0)
  goto err_out;

 FUNC_2(&VAR_14->pdev->dev, "skmsg\n");
 VAR_17 = FUNC_10(VAR_14);
 if (VAR_17 < 0)
  goto err_out;

 FUNC_2(&VAR_14->pdev->dev, "sksb\n");
 VAR_17 = FUNC_11(VAR_14);
 if (VAR_17 < 0)
  goto err_out;

 FUNC_2(&VAR_14->pdev->dev, "disk\n");
 VAR_17 = FUNC_8(VAR_14);
 if (VAR_17 < 0)
  goto err_out;

 FUNC_2(&VAR_14->pdev->dev, "VICTORY\n");
 return VAR_14;

err_out:
 FUNC_2(&VAR_14->pdev->dev, "construct failed\n");
 FUNC_12(VAR_14);
 return ((void*)0);
}
