
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue {scalar_t__ len; } ;
struct ipcp {struct mqueue* Queue; } ;


 int FUNC_0 (struct ipcp*) ;

size_t
FUNC_1(struct ipcp *VAR_0)
{
  struct mqueue *VAR_1;
  size_t VAR_2;

  VAR_2 = 0;
  for (VAR_1 = VAR_0->Queue; VAR_1 < VAR_0->Queue + FUNC_0(VAR_0); VAR_1++)
    VAR_2 += VAR_1->len;

  return VAR_2;
}
