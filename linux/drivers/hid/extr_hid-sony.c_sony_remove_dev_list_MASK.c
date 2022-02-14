
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct sony_sc {TYPE_1__ list_node; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sony_sc *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->list_node.next) {
  FUNC_1(&VAR_0, VAR_2);
  FUNC_0(&(VAR_1->list_node));
  FUNC_2(&VAR_0, VAR_2);
 }
}
