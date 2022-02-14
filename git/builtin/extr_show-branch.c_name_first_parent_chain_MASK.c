
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit {TYPE_1__* parents; } ;
struct TYPE_2__ {struct commit* item; } ;


 int FUNC_0 (struct commit*) ;
 int FUNC_1 (struct commit*,struct commit*) ;

__attribute__((used)) static int FUNC_2(struct commit *VAR_0)
{
 int VAR_1 = 0;
 while (VAR_0) {
  struct commit *VAR_2;
  if (!FUNC_0(VAR_0))
   break;
  if (!VAR_0->parents)
   break;
  VAR_2 = VAR_0->parents->item;
  if (!FUNC_0(VAR_2)) {
   FUNC_1(VAR_0, VAR_2);
   VAR_1++;
  }
  else
   break;
  VAR_0 = VAR_2;
 }
 return VAR_1;
}
