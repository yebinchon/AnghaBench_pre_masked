
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct era {int digest; TYPE_1__* md; } ;
struct TYPE_2__ {int archived_writesets; } ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(struct era *VAR_0)
{
 if (VAR_0->md->archived_writesets) {
  VAR_0->md->archived_writesets = 0;
  FUNC_0(VAR_0->md, &VAR_0->digest);
 }
}
