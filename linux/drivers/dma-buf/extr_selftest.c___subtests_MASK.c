
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subtest {int (* func ) (void*) ;int name; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,int ,int) ;
 int FUNC_3 (char*,char const*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (void*) ;

int
FUNC_6(const char *VAR_2, const struct subtest *VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6;

 for (; VAR_4--; VAR_3++) {
  FUNC_1();
  if (FUNC_4(VAR_1))
   return -VAR_0;

  if (!FUNC_0(VAR_2, VAR_3->name))
   continue;

  FUNC_3("dma-buf: Running %s/%s\n", VAR_2, VAR_3->name);

  VAR_6 = VAR_3->func(VAR_5);
  if (VAR_6 && VAR_6 != -VAR_0) {
   FUNC_2("dma-buf/%s: %s failed with error %d\n",
          VAR_2, VAR_3->name, VAR_6);
   return VAR_6;
  }
 }

 return 0;
}
