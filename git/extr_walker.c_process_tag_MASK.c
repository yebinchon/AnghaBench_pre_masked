
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker {int dummy; } ;
struct tag {int tagged; } ;


 scalar_t__ FUNC_0 (struct tag*) ;
 int FUNC_1 (struct walker*,int ) ;

__attribute__((used)) static int FUNC_2(struct walker *VAR_0, struct tag *VAR_1)
{
 if (FUNC_0(VAR_1))
  return -1;
 return FUNC_1(VAR_0, VAR_1->tagged);
}
