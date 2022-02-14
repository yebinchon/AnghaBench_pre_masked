
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ilist {int tail; int head; scalar_t__ nr_elts; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ilist *VAR_1)
{
 VAR_1->nr_elts = 0;
 VAR_1->head = VAR_1->tail = VAR_0;
}
