
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct qentry* dat; } ;
struct qentry {TYPE_1__ data; } ;


 struct qentry* FUNC_0 () ;
 int FUNC_1 (struct qentry*) ;

void
FUNC_2(void)
{
 struct qentry *VAR_0;

 while ((VAR_0 = FUNC_0()) != ((void*)0)) {
  FUNC_1(VAR_0->data.dat);
  FUNC_1(VAR_0);
 }
}
