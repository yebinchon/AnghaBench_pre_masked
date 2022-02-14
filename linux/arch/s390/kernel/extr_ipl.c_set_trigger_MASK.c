
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shutdown_trigger {TYPE_1__* action; } ;
struct TYPE_2__ {int init_rc; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, struct shutdown_trigger *VAR_4,
         size_t VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_0(VAR_3, VAR_2[VAR_6]->name)) {
   if (VAR_2[VAR_6]->init_rc) {
    return VAR_2[VAR_6]->init_rc;
   } else {
    VAR_4->action = VAR_2[VAR_6];
    return VAR_5;
   }
  }
 }
 return -VAR_0;
}
