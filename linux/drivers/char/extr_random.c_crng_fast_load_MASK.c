
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int * state; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_6, size_t VAR_7)
{
 unsigned long VAR_8;
 char *VAR_9;

 if (!FUNC_2(&VAR_5.lock, VAR_8))
  return 0;
 if (VAR_2 != 0) {
  FUNC_3(&VAR_5.lock, VAR_8);
  return 0;
 }
 VAR_9 = (unsigned char *) &VAR_5.state[4];
 while (VAR_7 > 0 && VAR_3 < VAR_1) {
  VAR_9[VAR_3 % VAR_0] ^= *VAR_6;
  VAR_6++; VAR_3++; VAR_7--;
 }
 FUNC_3(&VAR_5.lock, VAR_8);
 if (VAR_3 >= VAR_1) {
  FUNC_0();
  VAR_2 = 1;
  FUNC_4(&VAR_4);
  FUNC_1("random: fast init done\n");
 }
 return 1;
}
