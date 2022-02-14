
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int slab_buffer; } ;
struct dm_buffer {scalar_t__ stack_len; int data; int data_mode; struct dm_bufio_client* c; } ;
typedef int gfp_t ;


 int FUNC_0 (struct dm_bufio_client*,int ,int *) ;
 struct dm_buffer* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct dm_buffer*) ;

__attribute__((used)) static struct dm_buffer *FUNC_3(struct dm_bufio_client *VAR_0, gfp_t VAR_1)
{
 struct dm_buffer *VAR_2 = FUNC_1(VAR_0->slab_buffer, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 VAR_2->c = VAR_0;

 VAR_2->data = FUNC_0(VAR_0, VAR_1, &VAR_2->data_mode);
 if (!VAR_2->data) {
  FUNC_2(VAR_0->slab_buffer, VAR_2);
  return ((void*)0);
 }




 return VAR_2;
}
