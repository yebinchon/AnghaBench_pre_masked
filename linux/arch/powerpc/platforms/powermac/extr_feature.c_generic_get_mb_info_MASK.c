
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_2__ {long model_id; long board_flags; char* model_name; } ;


 long VAR_0 ;



 TYPE_1__ VAR_1 ;

__attribute__((used)) static long FUNC_0(struct device_node *VAR_2, long VAR_3, long VAR_4)
{
 switch(VAR_3) {
  case 129:
   return VAR_1.model_id;
  case 130:
   return VAR_1.board_flags;
  case 128:

   *((const char **)VAR_4) = VAR_1.model_name;
   return 0;
 }
 return -VAR_0;
}
