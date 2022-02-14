
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct viommu_request {size_t len; scalar_t__ buf; int list; scalar_t__ write_offset; void* writeback; } ;
struct viommu_dev {int requests; int request_lock; struct virtqueue** vqs; } ;
struct scatterlist {int dummy; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct viommu_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct viommu_request*) ;
 struct viommu_request* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__*,void*,scalar_t__) ;
 int FUNC_6 (struct scatterlist*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct viommu_dev*,void*,size_t) ;
 int FUNC_8 (struct virtqueue*,struct scatterlist**,int,int,struct viommu_request*,int ) ;

__attribute__((used)) static int FUNC_9(struct viommu_dev *VAR_5, void *VAR_6, size_t VAR_7,
       bool VAR_8)
{
 int VAR_9;
 off_t VAR_10;
 struct viommu_request *VAR_11;
 struct scatterlist VAR_12, VAR_13;
 struct scatterlist *VAR_14[2] = { &VAR_12, &VAR_13 };
 struct virtqueue *VAR_15 = VAR_5->vqs[VAR_4];

 FUNC_1(&VAR_5->request_lock);

 VAR_10 = FUNC_7(VAR_5, VAR_6, VAR_7);
 if (VAR_10 <= 0)
  return -VAR_0;

 VAR_11 = FUNC_3(sizeof(*VAR_11) + VAR_7, VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->len = VAR_7;
 if (VAR_8) {
  VAR_11->writeback = VAR_6 + VAR_10;
  VAR_11->write_offset = VAR_10;
 }
 FUNC_5(&VAR_11->buf, VAR_6, VAR_10);

 FUNC_6(&VAR_12, VAR_11->buf, VAR_10);
 FUNC_6(&VAR_13, VAR_11->buf + VAR_10, VAR_7 - VAR_10);

 VAR_9 = FUNC_8(VAR_15, VAR_14, 1, 1, VAR_11, VAR_3);
 if (VAR_9 == -VAR_2) {

  if (!FUNC_0(VAR_5))
   VAR_9 = FUNC_8(VAR_15, VAR_14, 1, 1, VAR_11, VAR_3);
 }
 if (VAR_9)
  goto err_free;

 FUNC_4(&VAR_11->list, &VAR_5->requests);
 return 0;

err_free:
 FUNC_2(VAR_11);
 return VAR_9;
}
