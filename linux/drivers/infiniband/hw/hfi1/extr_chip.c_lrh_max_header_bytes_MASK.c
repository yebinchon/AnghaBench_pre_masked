
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hfi1_devdata {TYPE_1__** rcd; } ;
struct TYPE_2__ {int rcvhdrqentsize; } ;



u32 FUNC_0(struct hfi1_devdata *VAR_0)
{
 return (VAR_0->rcd[0]->rcvhdrqentsize - 2 + 1 ) << 2;
}
