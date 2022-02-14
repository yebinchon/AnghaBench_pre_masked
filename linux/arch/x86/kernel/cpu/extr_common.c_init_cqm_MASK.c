
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct cpuinfo_x86 {int x86_cache_max_rmid; int x86_cache_occ_scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cpuinfo_x86*,int ) ;
 int FUNC_1 (int,int,void**,void**,void**,void**) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct cpuinfo_x86 *VAR_4)
{
 if (!FUNC_0(VAR_4, VAR_0)) {
  VAR_4->x86_cache_max_rmid = -1;
  VAR_4->x86_cache_occ_scale = -1;
  return;
 }


 VAR_4->x86_cache_max_rmid = FUNC_2(0xf);

 if (FUNC_0(VAR_4, VAR_3) ||
     FUNC_0(VAR_4, VAR_2) ||
     FUNC_0(VAR_4, VAR_1)) {
  u32 VAR_5, VAR_6, VAR_7, VAR_8;


  FUNC_1(0xf, 1, &VAR_5, &VAR_6, &VAR_7, &VAR_8);

  VAR_4->x86_cache_max_rmid = VAR_7;
  VAR_4->x86_cache_occ_scale = VAR_6;
 }
}
