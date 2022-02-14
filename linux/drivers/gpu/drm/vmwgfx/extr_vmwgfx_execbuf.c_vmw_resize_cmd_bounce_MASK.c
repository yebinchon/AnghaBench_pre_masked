
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_sw_context {int cmd_bounce_size; int * cmd_bounce; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct vmw_sw_context *VAR_2,
     uint32_t VAR_3)
{
 if (FUNC_2(VAR_2->cmd_bounce_size >= VAR_3))
  return 0;

 if (VAR_2->cmd_bounce_size == 0)
  VAR_2->cmd_bounce_size = VAR_1;

 while (VAR_2->cmd_bounce_size < VAR_3) {
  VAR_2->cmd_bounce_size =
   FUNC_0(VAR_2->cmd_bounce_size +
       (VAR_2->cmd_bounce_size >> 1));
 }

 FUNC_3(VAR_2->cmd_bounce);
 VAR_2->cmd_bounce = FUNC_4(VAR_2->cmd_bounce_size);

 if (VAR_2->cmd_bounce == ((void*)0)) {
  FUNC_1("Failed to allocate command bounce buffer.\n");
  VAR_2->cmd_bounce_size = 0;
  return -VAR_0;
 }

 return 0;
}
