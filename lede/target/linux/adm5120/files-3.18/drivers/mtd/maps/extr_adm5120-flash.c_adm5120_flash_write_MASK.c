
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
struct adm5120_map_info {unsigned long window_size; } ;
typedef int map_word ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct map_info*,char*,unsigned long) ;
 int FUNC_3 (struct map_info*,unsigned long) ;
 int FUNC_4 (struct map_info*,int const,unsigned long) ;
 struct adm5120_map_info* FUNC_5 (struct map_info*) ;

__attribute__((used)) static void FUNC_6(struct map_info *VAR_0, const map_word VAR_1,
  unsigned long VAR_2)
{
 struct adm5120_map_info *VAR_3 = FUNC_5(VAR_0);

 FUNC_2(VAR_0, "writing to ofs %lX\n", VAR_2);

 if (VAR_2 > VAR_3->window_size)
  return;

 FUNC_0();
 FUNC_3(VAR_0, VAR_2);
 FUNC_4(VAR_0, VAR_1, (VAR_2 & (VAR_3->window_size-1)));
 FUNC_1();
}
