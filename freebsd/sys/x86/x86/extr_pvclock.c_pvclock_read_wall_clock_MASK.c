
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvclock_wall_clock {int version; int sec; int nsec; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct pvclock_wall_clock *VAR_0, uint32_t *VAR_1,
    uint32_t *VAR_2)
{
 uint32_t VAR_3;

 do {
  VAR_3 = VAR_0->version;
  FUNC_0();
  *VAR_1 = VAR_0->sec;
  *VAR_2 = VAR_0->nsec;
  FUNC_0();
 } while ((VAR_0->version & 1) != 0 || VAR_0->version != VAR_3);
}
