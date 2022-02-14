
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {scalar_t__ num_free; } ;
struct scatterlist {int dummy; } ;
struct TYPE_2__ {size_t bytes_sent; } ;
struct port {int outvq_full; TYPE_1__ stats; int outvq_lock; struct virtqueue* out_vq; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct virtqueue*,struct scatterlist*,int,void*,int ) ;
 int FUNC_5 (struct virtqueue*,unsigned int*) ;
 int FUNC_6 (struct virtqueue*) ;
 int FUNC_7 (struct virtqueue*) ;

__attribute__((used)) static ssize_t FUNC_8(struct port *VAR_1, struct scatterlist *VAR_2,
         int VAR_3, size_t VAR_4,
         void *VAR_5, bool VAR_6)
{
 struct virtqueue *VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;

 VAR_7 = VAR_1->out_vq;

 FUNC_2(&VAR_1->outvq_lock, VAR_9);

 FUNC_1(VAR_1);

 VAR_8 = FUNC_4(VAR_7, VAR_2, VAR_3, VAR_5, VAR_0);


 FUNC_7(VAR_7);

 if (VAR_8) {
  VAR_4 = 0;
  goto done;
 }

 if (VAR_7->num_free == 0)
  VAR_1->outvq_full = 1;

 if (VAR_6)
  goto done;
 while (!FUNC_5(VAR_7, &VAR_10)
  && !FUNC_6(VAR_7))
  FUNC_0();
done:
 FUNC_3(&VAR_1->outvq_lock, VAR_9);

 VAR_1->stats.bytes_sent += VAR_4;




 return VAR_4;
}
