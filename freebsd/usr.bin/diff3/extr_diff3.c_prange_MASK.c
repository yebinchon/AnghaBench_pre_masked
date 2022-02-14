
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {scalar_t__ to; scalar_t__ from; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct range *VAR_0)
{

 if (VAR_0->to <= VAR_0->from)
  FUNC_0("%da\n", VAR_0->from - 1);
 else {
  FUNC_0("%d", VAR_0->from);
  if (VAR_0->to > VAR_0->from+1)
   FUNC_0(",%d", VAR_0->to - 1);
  FUNC_0("c\n");
 }
}
