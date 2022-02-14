
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct viommu_request {size_t buf; size_t len; size_t write_offset; int list; scalar_t__ writeback; } ;
struct viommu_dev {int requests; int request_lock; struct virtqueue** vqs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct viommu_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,size_t,size_t) ;
 int FUNC_5 (size_t,size_t,int ) ;
 struct viommu_request* FUNC_6 (struct virtqueue*,unsigned int*) ;
 int FUNC_7 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_8(struct viommu_dev *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4;
 size_t VAR_5;
 struct viommu_request *VAR_6;
 struct virtqueue *VAR_7 = VAR_2->vqs[VAR_0];

 FUNC_0(&VAR_2->request_lock);

 FUNC_7(VAR_7);

 while (!FUNC_3(&VAR_2->requests)) {
  VAR_4 = 0;
  VAR_6 = FUNC_6(VAR_7, &VAR_4);
  if (!VAR_6)
   continue;

  if (!VAR_4)
   FUNC_5(VAR_6->buf, VAR_6->len,
           VAR_1);

  VAR_5 = VAR_6->len - VAR_6->write_offset;
  if (VAR_6->writeback && VAR_4 == VAR_5)
   FUNC_4(VAR_6->writeback, VAR_6->buf + VAR_6->write_offset,
          VAR_5);

  FUNC_2(&VAR_6->list);
  FUNC_1(VAR_6);
 }

 return VAR_3;
}
