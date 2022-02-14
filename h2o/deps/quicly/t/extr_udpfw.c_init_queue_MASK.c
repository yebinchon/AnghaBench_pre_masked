
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; int * elements; scalar_t__ tail; scalar_t__ head; } ;
struct queue_t {TYPE_1__ ring; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct queue_t *VAR_0)
{
    FUNC_0(VAR_0->ring.depth != 0);
    VAR_0->ring.head = 0;
    VAR_0->ring.tail = 0;
    VAR_0->ring.elements = FUNC_1(sizeof(VAR_0->ring.elements[0]) * VAR_0->ring.depth);
    FUNC_0(VAR_0->ring.elements != ((void*)0));
}
