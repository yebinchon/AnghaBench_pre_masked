
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int slb_preload_tail; int slb_preload_nr; unsigned long* slb_preload_esid; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct thread_info*,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct thread_info *VAR_4, unsigned long VAR_5)
{
 unsigned char VAR_6;
 unsigned long VAR_7;

 if (FUNC_0(VAR_1)) {

  if (VAR_5 & VAR_0)
   VAR_5 &= VAR_0;
 }

 VAR_7 = VAR_5 >> VAR_2;

 if (FUNC_1(VAR_4, VAR_7))
  return 0;

 VAR_6 = (VAR_4->slb_preload_tail + VAR_4->slb_preload_nr) % VAR_3;
 VAR_4->slb_preload_esid[VAR_6] = VAR_7;
 if (VAR_4->slb_preload_nr == VAR_3)
  VAR_4->slb_preload_tail = (VAR_4->slb_preload_tail + 1) % VAR_3;
 else
  VAR_4->slb_preload_nr++;

 return 1;
}
