
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int dummy; } ;
struct dm_buffer {struct dm_bufio_client* c; } ;



struct dm_bufio_client *FUNC_0(struct dm_buffer *VAR_0)
{
 return VAR_0->c;
}
