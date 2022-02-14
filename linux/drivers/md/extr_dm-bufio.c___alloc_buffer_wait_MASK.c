
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int (* alloc_callback ) (struct dm_buffer*) ;} ;
struct dm_buffer {int dummy; } ;
typedef enum new_flag { ____Placeholder_new_flag } new_flag ;


 struct dm_buffer* FUNC_0 (struct dm_bufio_client*,int) ;
 int FUNC_1 (struct dm_buffer*) ;

__attribute__((used)) static struct dm_buffer *FUNC_2(struct dm_bufio_client *VAR_0, enum new_flag VAR_1)
{
 struct dm_buffer *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 if (VAR_0->alloc_callback)
  VAR_0->alloc_callback(VAR_2);

 return VAR_2;
}
