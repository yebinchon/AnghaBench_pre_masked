
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* prev; void* next; } ;
struct TYPE_3__ {void* prev; void* next; } ;
struct dm_writecache {TYPE_2__ freelist; TYPE_1__ lru; int tree; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct dm_writecache *VAR_2)
{



 FUNC_0(&VAR_2->tree, -1, sizeof VAR_2->tree);
 VAR_2->lru.next = VAR_0;
 VAR_2->lru.prev = VAR_1;
 VAR_2->freelist.next = VAR_0;
 VAR_2->freelist.prev = VAR_1;
}
