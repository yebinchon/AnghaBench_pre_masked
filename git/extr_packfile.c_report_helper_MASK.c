
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {TYPE_1__* items; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(const struct string_list *VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_3 == (VAR_1|VAR_0))
  return;

 for (; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(VAR_3, VAR_2->items[VAR_4].string);
}
