
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int state; int read_error; } ;
typedef int blk_status_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct dm_buffer *VAR_1, blk_status_t VAR_2)
{
 VAR_1->read_error = VAR_2;

 FUNC_0(!FUNC_4(VAR_0, &VAR_1->state));

 FUNC_3();
 FUNC_1(VAR_0, &VAR_1->state);
 FUNC_2();

 FUNC_5(&VAR_1->state, VAR_0);
}
