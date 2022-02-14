
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int dummy; } ;
struct dm_buffer {int hold_count; void* data; scalar_t__ read_error; int state; } ;
typedef int sector_t ;
typedef enum new_flag { ____Placeholder_new_flag } new_flag ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dm_buffer* FUNC_2 (struct dm_bufio_client*,int ,int,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct dm_buffer*) ;
 int FUNC_6 (struct dm_bufio_client*) ;
 int FUNC_7 (struct dm_buffer*) ;
 int FUNC_8 (struct dm_bufio_client*) ;
 int VAR_3 ;
 int FUNC_9 (struct dm_buffer*,int ,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void *FUNC_11(struct dm_bufio_client *VAR_5, sector_t VAR_6,
        enum new_flag VAR_7, struct dm_buffer **VAR_8)
{
 int VAR_9;
 struct dm_buffer *VAR_10;

 FUNC_1(VAR_4);

 FUNC_6(VAR_5);
 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7, &VAR_9, &VAR_4);




 FUNC_8(VAR_5);

 FUNC_3(&VAR_4);

 if (!VAR_10)
  return ((void*)0);

 if (VAR_9)
  FUNC_9(VAR_10, VAR_1, VAR_3);

 FUNC_10(&VAR_10->state, VAR_0, VAR_2);

 if (VAR_10->read_error) {
  int VAR_11 = FUNC_4(VAR_10->read_error);

  FUNC_7(VAR_10);

  return FUNC_0(VAR_11);
 }

 *VAR_8 = VAR_10;

 return VAR_10->data;
}
