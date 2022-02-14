
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mem_detect_block {scalar_t__ end; scalar_t__ start; } ;
struct TYPE_2__ {scalar_t__ count; } ;


 struct mem_detect_block* FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(u64 VAR_1, u64 VAR_2)
{
 struct mem_detect_block *VAR_3;

 if (VAR_0.count) {
  VAR_3 = FUNC_0(VAR_0.count - 1);
  if (VAR_3->end == VAR_1) {
   VAR_3->end = VAR_2;
   return;
  }
 }

 VAR_3 = FUNC_0(VAR_0.count);
 VAR_3->start = VAR_1;
 VAR_3->end = VAR_2;
 VAR_0.count++;
}
