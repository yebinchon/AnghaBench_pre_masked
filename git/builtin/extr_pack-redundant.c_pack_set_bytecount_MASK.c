
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_list {struct pack_list* next; TYPE_1__* pack; } ;
typedef int off_t ;
struct TYPE_2__ {scalar_t__ index_size; scalar_t__ pack_size; } ;



__attribute__((used)) static inline off_t FUNC_0(struct pack_list *VAR_0)
{
 off_t VAR_1 = 0;
 while (VAR_0) {
  VAR_1 += VAR_0->pack->pack_size;
  VAR_1 += VAR_0->pack->index_size;
  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}
