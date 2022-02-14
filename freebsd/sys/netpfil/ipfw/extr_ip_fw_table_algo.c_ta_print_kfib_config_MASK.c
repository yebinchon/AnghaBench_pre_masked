
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {scalar_t__ data; } ;


 int FUNC_0 (char*,size_t,char*,char*,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct table_info *VAR_1, char *VAR_2,
    size_t VAR_3)
{

 if (VAR_1->data != 0)
  FUNC_0(VAR_2, VAR_3, "%s fib=%lu", "addr:kfib", VAR_1->data);
 else
  FUNC_0(VAR_2, VAR_3, "%s", "addr:kfib");
}
