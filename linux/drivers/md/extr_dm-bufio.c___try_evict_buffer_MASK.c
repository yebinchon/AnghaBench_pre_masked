
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {scalar_t__ hold_count; int state; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_buffer*) ;
 int FUNC_1 (struct dm_buffer*) ;
 int FUNC_2 (struct dm_buffer*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(struct dm_buffer *VAR_4, gfp_t VAR_5)
{
 if (!(VAR_5 & VAR_3)) {
  if (FUNC_3(VAR_1, &VAR_4->state) ||
      FUNC_3(VAR_2, &VAR_4->state) ||
      FUNC_3(VAR_0, &VAR_4->state))
   return 0;
 }

 if (VAR_4->hold_count)
  return 0;

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);
 FUNC_0(VAR_4);

 return 1;
}
