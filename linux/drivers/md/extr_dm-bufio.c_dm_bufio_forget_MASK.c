
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int dummy; } ;
struct dm_buffer {int state; int hold_count; } ;
typedef int sector_t ;


 struct dm_buffer* FUNC_0 (struct dm_bufio_client*,int ) ;
 int FUNC_1 (struct dm_buffer*) ;
 int FUNC_2 (struct dm_buffer*) ;
 int FUNC_3 (struct dm_bufio_client*) ;
 int FUNC_4 (struct dm_bufio_client*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct dm_bufio_client *VAR_0, sector_t VAR_1)
{
 struct dm_buffer *VAR_2;

 FUNC_3(VAR_0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && FUNC_5(!VAR_2->hold_count) && FUNC_5(!VAR_2->state)) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
 }

 FUNC_4(VAR_0);
}
