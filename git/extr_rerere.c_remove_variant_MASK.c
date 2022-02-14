
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rerere_id {size_t variant; TYPE_1__* collection; } ;
struct TYPE_2__ {scalar_t__* status; } ;


 int FUNC_0 (struct rerere_id*,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rerere_id *VAR_0)
{
 FUNC_1(FUNC_0(VAR_0, "postimage"));
 FUNC_1(FUNC_0(VAR_0, "preimage"));
 VAR_0->collection->status[VAR_0->variant] = 0;
}
