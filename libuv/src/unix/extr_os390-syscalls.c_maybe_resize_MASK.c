
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; struct pollfd* items; } ;
typedef TYPE_1__ uv__os390_epoll ;
struct pollfd {int fd; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (unsigned int) ;
 struct pollfd* FUNC_2 (struct pollfd*,unsigned int) ;

__attribute__((used)) static void FUNC_3(uv__os390_epoll* VAR_0, unsigned int VAR_1) {
  unsigned int VAR_2;
  unsigned int VAR_3;
  struct pollfd* VAR_4;
  struct pollfd VAR_5;

  if (VAR_1 <= VAR_0->size)
    return;

  if (VAR_0->size == 0)
    VAR_5.fd = -1;
  else {

    VAR_5 = VAR_0->items[VAR_0->size - 1];
    VAR_0->items[VAR_0->size - 1].fd = -1;
  }

  VAR_2 = FUNC_1(VAR_1);
  VAR_4 = FUNC_2(VAR_0->items, VAR_2 * sizeof(VAR_0->items[0]));

  if (VAR_4 == ((void*)0))
    FUNC_0();
  for (VAR_3 = VAR_0->size; VAR_3 < VAR_2; ++VAR_3)
    VAR_4[VAR_3].fd = -1;


  VAR_4[VAR_2 - 1] = VAR_5;

  VAR_0->items = VAR_4;
  VAR_0->size = VAR_2;
}
