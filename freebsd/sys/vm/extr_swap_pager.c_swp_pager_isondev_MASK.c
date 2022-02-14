
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swdevt {scalar_t__ sw_first; scalar_t__ sw_end; } ;
typedef scalar_t__ daddr_t ;



__attribute__((used)) static bool
FUNC_0(daddr_t VAR_0, struct swdevt *VAR_1)
{

 return (VAR_0 >= VAR_1->sw_first && VAR_0 < VAR_1->sw_end);
}
