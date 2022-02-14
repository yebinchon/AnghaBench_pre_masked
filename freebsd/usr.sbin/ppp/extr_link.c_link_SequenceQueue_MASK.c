
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue {scalar_t__ len; } ;
struct link {struct mqueue* Queue; } ;


 struct mqueue* FUNC_0 (struct link*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mqueue*) ;
 int FUNC_3 (struct mqueue*,int ) ;

void
FUNC_4(struct link *VAR_1)
{
  struct mqueue *VAR_2, *VAR_3;

  FUNC_1(VAR_0, "link_SequenceQueue\n");

  VAR_3 = FUNC_0(VAR_1);
  for (VAR_2 = VAR_1->Queue; VAR_2 < VAR_3; VAR_2++)
    while (VAR_2->len)
      FUNC_3(VAR_3, FUNC_2(VAR_2));
}
