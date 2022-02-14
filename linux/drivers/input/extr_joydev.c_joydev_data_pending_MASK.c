
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct joydev_client {scalar_t__ startup; scalar_t__ head; scalar_t__ tail; struct joydev* joydev; } ;
struct joydev {scalar_t__ nabs; scalar_t__ nkey; } ;



__attribute__((used)) static inline int FUNC_0(struct joydev_client *VAR_0)
{
 struct joydev *VAR_1 = VAR_0->joydev;

 return VAR_0->startup < VAR_1->nabs + VAR_1->nkey ||
  VAR_0->head != VAR_0->tail;
}
