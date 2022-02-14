
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {unsigned char slb_preload_nr; unsigned char slb_preload_tail; unsigned long* slb_preload_esid; } ;


 unsigned char VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct thread_info *VAR_1, unsigned long VAR_2)
{
 unsigned char VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->slb_preload_nr; VAR_3++) {
  unsigned char VAR_4;

  VAR_4 = (VAR_1->slb_preload_tail + VAR_3) % VAR_0;
  if (VAR_2 == VAR_1->slb_preload_esid[VAR_4])
   return 1;
 }
 return 0;
}
