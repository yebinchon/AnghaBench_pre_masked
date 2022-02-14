
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int num_free; } ;
struct scatterlist {int dummy; } ;
struct port_buffer {int size; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,int ,int ) ;
 int FUNC_1 (struct virtqueue*,struct scatterlist*,int,struct port_buffer*,int ) ;
 int FUNC_2 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_3(struct virtqueue *VAR_1, struct port_buffer *VAR_2)
{
 struct scatterlist VAR_3[1];
 int VAR_4;

 FUNC_0(VAR_3, VAR_2->buf, VAR_2->size);

 VAR_4 = FUNC_1(VAR_1, VAR_3, 1, VAR_2, VAR_0);
 FUNC_2(VAR_1);
 if (!VAR_4)
  VAR_4 = VAR_1->num_free;
 return VAR_4;
}
