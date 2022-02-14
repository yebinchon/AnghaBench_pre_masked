
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ count; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 () ;
 int VAR_12 ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int VAR_13 ;

void
FUNC_7(void)
{
 uint32_t VAR_14;

 VAR_6 = VAR_2;
 FUNC_5();
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  FUNC_3(FUNC_1(VAR_14));
  FUNC_6(&VAR_8[VAR_14].lock, "ip6qb", ((void*)0), VAR_4);
  VAR_8[VAR_14].count = 0;
 }
 VAR_9 = FUNC_4();
 VAR_7 = 64;



 if (!FUNC_2(VAR_10))
  return;

 VAR_12 = VAR_3;
 FUNC_0(VAR_13,
     VAR_11, ((void*)0), VAR_0);
}
