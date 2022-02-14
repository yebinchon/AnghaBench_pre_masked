
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dm_bufio_client {int dummy; } ;
struct dm_buffer {int hold_count; int state; scalar_t__ write_error; scalar_t__ read_error; } ;
typedef int sector_t ;
typedef enum new_flag { ____Placeholder_new_flag } new_flag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dm_buffer* FUNC_0 (struct dm_bufio_client*,int) ;
 int FUNC_1 (struct dm_bufio_client*,struct list_head*) ;
 struct dm_buffer* FUNC_2 (struct dm_bufio_client*,int ) ;
 int FUNC_3 (struct dm_buffer*) ;
 int FUNC_4 (struct dm_buffer*,int ,int ) ;
 int FUNC_5 (struct dm_buffer*,int) ;
 scalar_t__ FUNC_6 (int,int*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static struct dm_buffer *FUNC_8(struct dm_bufio_client *VAR_7, sector_t VAR_8,
         enum new_flag VAR_9, int *VAR_10,
         struct list_head *VAR_11)
{
 struct dm_buffer *VAR_12, *VAR_13 = ((void*)0);

 *VAR_10 = 0;

 VAR_12 = FUNC_2(VAR_7, VAR_8);
 if (VAR_12)
  goto found_buffer;

 if (VAR_9 == VAR_5)
  return ((void*)0);

 VAR_13 = FUNC_0(VAR_7, VAR_9);
 if (!VAR_13)
  return ((void*)0);





 VAR_12 = FUNC_2(VAR_7, VAR_8);
 if (VAR_12) {
  FUNC_3(VAR_13);
  goto found_buffer;
 }

 FUNC_1(VAR_7, VAR_11);

 VAR_12 = VAR_13;
 VAR_12->hold_count = 1;
 VAR_12->read_error = 0;
 VAR_12->write_error = 0;
 FUNC_4(VAR_12, VAR_8, VAR_3);

 if (VAR_9 == VAR_4) {
  VAR_12->state = 0;
  return VAR_12;
 }

 VAR_12->state = 1 << VAR_1;
 *VAR_10 = 1;

 return VAR_12;

found_buffer:
 if (VAR_9 == VAR_6)
  return ((void*)0);







 if (VAR_9 == VAR_5 && FUNC_7(FUNC_6(VAR_1, &VAR_12->state)))
  return ((void*)0);

 VAR_12->hold_count++;
 FUNC_5(VAR_12, FUNC_6(VAR_0, &VAR_12->state) ||
       FUNC_6(VAR_2, &VAR_12->state));
 return VAR_12;
}
