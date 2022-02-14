
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
struct adm5120_map_info {int (* switch_bank ) (unsigned int) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct map_info*,char*,unsigned int,unsigned long) ;
 struct adm5120_map_info* FUNC_2 (struct map_info*) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct map_info *VAR_1,
  unsigned long VAR_2)
{
 struct adm5120_map_info *VAR_3 = FUNC_2(VAR_1);
 unsigned VAR_4;

 if (VAR_3->switch_bank == ((void*)0))
  return;

 VAR_4 = (VAR_2 & VAR_0) >> 21;
 if (VAR_4 > 1)
  FUNC_0();

 FUNC_1(VAR_1, "switching to bank %u, ofs=%lX\n", VAR_4, VAR_2);
 VAR_3->switch_bank(VAR_4);
}
