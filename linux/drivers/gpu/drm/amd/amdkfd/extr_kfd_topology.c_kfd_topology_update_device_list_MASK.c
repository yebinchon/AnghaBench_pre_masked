
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int next; } ;
struct TYPE_2__ {int num_devices; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int ,struct list_head*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct list_head *VAR_1,
     struct list_head *VAR_2)
{
 while (!FUNC_0(VAR_1)) {
  FUNC_1(VAR_1->next, VAR_2);
  VAR_0.num_devices++;
 }
}
