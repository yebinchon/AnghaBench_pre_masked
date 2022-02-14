
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct host_list {struct host_list* next; TYPE_1__ addr; } ;


 int FUNC_0 (int,char*) ;
 struct host_list* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct in_addr VAR_1)
{
 struct host_list *VAR_2;

 if (!(VAR_2 = (struct host_list *)FUNC_1(sizeof(struct host_list))))
  FUNC_0(1, "no memory");
 VAR_2->addr.s_addr = VAR_1.s_addr;
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
}
