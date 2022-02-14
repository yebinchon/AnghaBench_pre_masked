
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
struct adm5120_map_info {unsigned long window_size; } ;
typedef unsigned long ssize_t ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct map_info*,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (struct map_info*,unsigned long) ;
 int FUNC_4 (struct map_info*,char*,unsigned long,unsigned long) ;
 struct adm5120_map_info* FUNC_5 (struct map_info*) ;

__attribute__((used)) static void FUNC_6(struct map_info *VAR_1, void *VAR_2,
  unsigned long VAR_3, ssize_t VAR_4)
{
 struct adm5120_map_info *VAR_5 = FUNC_5(VAR_1);
 char *VAR_6;
 ssize_t VAR_7;

 FUNC_2(VAR_1, "copy_from, to=%lX, from=%lX, len=%lX\n",
  (unsigned long)VAR_2, VAR_3, (unsigned long)VAR_4);

 if (VAR_3 > VAR_5->window_size)
  return;

 VAR_6 = (char *)VAR_2;
 while (VAR_4 > 0) {
  VAR_7 = VAR_4;
  if ((VAR_3 < VAR_0) && ((VAR_3+VAR_4) > VAR_0))
   VAR_7 = VAR_0-VAR_3;

  FUNC_0();
  FUNC_2(VAR_1, "copying %lu byte(s) from %lX to %lX\n",
   (unsigned long)VAR_7, (VAR_3 & (VAR_5->window_size-1)),
   (unsigned long)VAR_6);
  FUNC_3(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_6, (VAR_3 & (VAR_5->window_size-1)), VAR_7);
  FUNC_1();
  VAR_6 += VAR_7;
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }
}
