
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue {scalar_t__ top; } ;
struct link {struct mqueue* Queue; } ;


 struct mqueue* FUNC_0 (struct link*) ;
 int FUNC_1 (struct mqueue*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct link *VAR_0)
{
  struct mqueue *VAR_1, *VAR_2;

  VAR_2 = FUNC_0(VAR_0);
  for (VAR_1 = VAR_0->Queue; VAR_1 <= VAR_2; VAR_1++)
    while (VAR_1->top)
      FUNC_2(FUNC_1(VAR_1));
}
