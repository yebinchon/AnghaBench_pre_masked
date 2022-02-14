
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mem_detect_block {int dummy; } ;
struct TYPE_2__ {struct mem_detect_block* entries_extended; struct mem_detect_block* entries; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct mem_detect_block* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct mem_detect_block *FUNC_2(u32 VAR_2)
{
 if (VAR_2 < VAR_0)
  return &VAR_1.entries[VAR_2];
 if (FUNC_1(!VAR_1.entries_extended))
  VAR_1.entries_extended = FUNC_0();
 return &VAR_1.entries_extended[VAR_2 - VAR_0];
}
