
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dm_bufio_client {int* n_buffers; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct dm_bufio_client*,int,struct list_head*) ;

__attribute__((used)) static void FUNC_1(struct dm_bufio_client *VAR_3,
         struct list_head *VAR_4)
{
 if (VAR_3->n_buffers[VAR_2] > VAR_3->n_buffers[VAR_1] * VAR_0)
  FUNC_0(VAR_3, 1, VAR_4);
}
