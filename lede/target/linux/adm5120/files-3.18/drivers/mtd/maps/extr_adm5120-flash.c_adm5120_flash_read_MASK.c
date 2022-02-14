
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
 int FUNC_4 (struct map_info*,unsigned long) ;
 struct adm5120_map_info* FUNC_5 (struct map_info*) ;
 int FUNC_6 (struct map_info*) ;

__attribute__((used)) static map_word FUNC_7(struct map_info *VAR_0, unsigned long VAR_1)
{
 struct adm5120_map_info *VAR_2 = FUNC_5(VAR_0);
 map_word VAR_3;

 FUNC_2(VAR_0, "reading from ofs %lX\n", VAR_1);

 if (VAR_1 >= VAR_2->window_size)
  return FUNC_6(VAR_0);

 FUNC_0();
 FUNC_3(VAR_0, VAR_1);
 VAR_3 = FUNC_4(VAR_0, (VAR_1 & (VAR_2->window_size-1)));
 FUNC_1();

 return VAR_3;
}
