
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {TYPE_1__* ti; int pool_md; } ;
struct TYPE_2__ {int table; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct pool *VAR_1 = VAR_0;

 FUNC_0("%s: reached low water mark for metadata device: sending event.",
        FUNC_1(VAR_1->pool_md));

 FUNC_2(VAR_1->ti->table);
}
