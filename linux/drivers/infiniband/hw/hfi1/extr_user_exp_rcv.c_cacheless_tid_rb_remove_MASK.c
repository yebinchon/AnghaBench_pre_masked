
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tid_rb_node {size_t rcventry; } ;
struct hfi1_filedata {int ** entry_to_rb; TYPE_1__* uctxt; } ;
struct TYPE_2__ {size_t expected_base; } ;


 int FUNC_0 (struct hfi1_filedata*,struct tid_rb_node*) ;

__attribute__((used)) static void FUNC_1(struct hfi1_filedata *VAR_0,
        struct tid_rb_node *VAR_1)
{
 u32 VAR_2 = VAR_0->uctxt->expected_base;

 VAR_0->entry_to_rb[VAR_1->rcventry - VAR_2] = ((void*)0);
 FUNC_0(VAR_0, VAR_1);
}
