
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selftest {int (* func ) () ;int name; int enabled; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct selftest*,unsigned long) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct selftest *VAR_1, unsigned long VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(VAR_1, VAR_2);


 for (; VAR_2--; VAR_1++) {
  if (!VAR_1->enabled)
   continue;

  FUNC_1("dma-buf: Running %s\n", VAR_1->name);
  VAR_3 = VAR_1->func();
  if (VAR_3)
   break;
 }

 if (FUNC_0(VAR_3 > 0 || VAR_3 == -VAR_0,
   "%s returned %d, conflicting with selftest's magic values!\n",
   VAR_1->name, VAR_3))
  VAR_3 = -1;

 return VAR_3;
}
