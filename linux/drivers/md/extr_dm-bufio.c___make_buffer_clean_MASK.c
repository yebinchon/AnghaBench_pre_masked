
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int state; int hold_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dm_buffer*,int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dm_buffer *VAR_3)
{
 FUNC_0(VAR_3->hold_count);

 if (!VAR_3->state)
  return;

 FUNC_2(&VAR_3->state, VAR_0, VAR_2);
 FUNC_1(VAR_3, ((void*)0));
 FUNC_2(&VAR_3->state, VAR_1, VAR_2);
}
