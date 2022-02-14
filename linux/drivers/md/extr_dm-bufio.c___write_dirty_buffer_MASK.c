
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dm_buffer {int write_list; int dirty_end; int write_end; int dirty_start; int write_start; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct dm_buffer*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct dm_buffer *VAR_5,
     struct list_head *VAR_6)
{
 if (!FUNC_3(VAR_0, &VAR_5->state))
  return;

 FUNC_0(VAR_0, &VAR_5->state);
 FUNC_4(&VAR_5->state, VAR_1, VAR_3);

 VAR_5->write_start = VAR_5->dirty_start;
 VAR_5->write_end = VAR_5->dirty_end;

 if (!VAR_6)
  FUNC_2(VAR_5, VAR_2, VAR_4);
 else
  FUNC_1(&VAR_5->write_list, VAR_6);
}
