
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gameport {int dummy; } ;
struct analog_port {int loop; unsigned int speed; unsigned char mask; unsigned int* axes; struct gameport* gameport; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;
 unsigned char FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct analog_port *VAR_3)
{
 struct gameport *VAR_4 = VAR_3->gameport;
 u64 VAR_5[4], VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned char VAR_11[4], VAR_12, VAR_13;
 unsigned long VAR_14;
 int VAR_15, VAR_16;

 VAR_9 = (VAR_1 * VAR_3->loop) / 1000;
 VAR_10 = VAR_2 * VAR_3->speed;

 FUNC_6(VAR_14);
 FUNC_2(VAR_4);
 VAR_8 = FUNC_3();
 FUNC_5(VAR_14);

 VAR_6 = VAR_8;
 VAR_12 = VAR_3->mask;
 VAR_15 = 0;

 do {
  VAR_7 = VAR_8;
  VAR_13 = VAR_12;

  FUNC_4();
  VAR_12 = FUNC_1(VAR_4) & VAR_3->mask;
  VAR_8 = FUNC_3();
  FUNC_5(VAR_14);

  if ((VAR_13 ^ VAR_12) && (FUNC_0(VAR_7, VAR_8) < VAR_9)) {
   VAR_11[VAR_15] = VAR_13 ^ VAR_12;
   VAR_5[VAR_15] = VAR_8;
   VAR_15++;
  }

 } while (VAR_12 && (VAR_15 < 4) && (FUNC_0(VAR_6, VAR_8) < VAR_10));

 VAR_12 <<= 4;

 for (--VAR_15; VAR_15 >= 0; VAR_15--) {
  VAR_12 |= VAR_11[VAR_15];
  for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
   if (VAR_11[VAR_15] & (1 << VAR_16))
    VAR_3->axes[VAR_16] = (FUNC_0(VAR_6, VAR_5[VAR_15]) << VAR_0) / VAR_3->loop;
 }

 return -(VAR_12 != VAR_3->mask);
}
