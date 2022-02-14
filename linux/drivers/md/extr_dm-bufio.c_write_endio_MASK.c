
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int async_write_error; } ;
struct dm_buffer {int state; struct dm_bufio_client* c; int write_error; } ;
typedef int blk_status_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct dm_buffer *VAR_1, blk_status_t VAR_2)
{
 VAR_1->write_error = VAR_2;
 if (FUNC_7(VAR_2)) {
  struct dm_bufio_client *VAR_3 = VAR_1->c;

  (void)FUNC_3(&VAR_3->async_write_error, 0,
    FUNC_1(VAR_2));
 }

 FUNC_0(!FUNC_6(VAR_0, &VAR_1->state));

 FUNC_5();
 FUNC_2(VAR_0, &VAR_1->state);
 FUNC_4();

 FUNC_8(&VAR_1->state, VAR_0);
}
