
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color {scalar_t__ member_0; scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct color*) ;
 char* FUNC_3 (char*,int,struct color*,char) ;
 int FUNC_4 (int ,int,char const*) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (struct color*,char const*,int) ;
 int FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (char*,int,char*,...) ;

int FUNC_10(const char *VAR_3, int VAR_4, char *VAR_5)
{
 const char *VAR_6 = VAR_3;
 int VAR_7 = VAR_4;
 char *VAR_8 = VAR_5 + VAR_0;
 unsigned int VAR_9 = 0;
 struct color VAR_10 = { VAR_1 };
 struct color VAR_11 = { VAR_1 };

 while (VAR_7 > 0 && FUNC_5(*VAR_6)) {
  VAR_6++;
  VAR_7--;
 }

 if (!VAR_7) {
  VAR_5[0] = '\0';
  return 0;
 }

 if (!FUNC_8(VAR_6, "reset", VAR_7)) {
  FUNC_9(VAR_5, VAR_8 - VAR_5, VAR_2);
  return 0;
 }


 while (VAR_7 > 0) {
  const char *VAR_12 = VAR_6;
  struct color VAR_13 = { VAR_1 };
  int VAR_14, VAR_15 = 0;

  while (VAR_7 > 0 && !FUNC_5(VAR_12[VAR_15])) {
   VAR_15++;
   VAR_7--;
  }

  VAR_6 = VAR_12 + VAR_15;
  while (VAR_7 > 0 && FUNC_5(*VAR_6)) {
   VAR_6++;
   VAR_7--;
  }

  if (!FUNC_7(&VAR_13, VAR_12, VAR_15)) {
   if (VAR_10.type == VAR_1) {
    VAR_10 = VAR_13;
    continue;
   }
   if (VAR_11.type == VAR_1) {
    VAR_11 = VAR_13;
    continue;
   }
   goto bad;
  }
  VAR_14 = FUNC_6(VAR_12, VAR_15);
  if (0 <= VAR_14)
   VAR_9 |= (1 << VAR_14);
  else
   goto bad;
 }
 if (VAR_9 || !FUNC_2(&VAR_10) || !FUNC_2(&VAR_11)) {
  int VAR_16 = 0;
  int VAR_17;

  do { if (VAR_5 == VAR_8) FUNC_0("color parsing ran out of space"); *VAR_5++ = ('\033'); } while(0);
  do { if (VAR_5 == VAR_8) FUNC_0("color parsing ran out of space"); *VAR_5++ = ('['); } while(0);

  for (VAR_17 = 0; VAR_9; VAR_17++) {
   unsigned VAR_18 = (1 << VAR_17);
   if (!(VAR_9 & VAR_18))
    continue;
   VAR_9 &= ~VAR_18;
   if (VAR_16++)
    do { if (VAR_5 == VAR_8) FUNC_0("color parsing ran out of space"); *VAR_5++ = (';'); } while(0);
   VAR_5 += FUNC_9(VAR_5, VAR_8 - VAR_5, "%d", VAR_17);
  }
  if (!FUNC_2(&VAR_10)) {
   if (VAR_16++)
    do { if (VAR_5 == VAR_8) FUNC_0("color parsing ran out of space"); *VAR_5++ = (';'); } while(0);

   VAR_5 = FUNC_3(VAR_5, VAR_8 - VAR_5, &VAR_10, '3');
  }
  if (!FUNC_2(&VAR_11)) {
   if (VAR_16++)
    do { if (VAR_5 == VAR_8) FUNC_0("color parsing ran out of space"); *VAR_5++ = (';'); } while(0);

   VAR_5 = FUNC_3(VAR_5, VAR_8 - VAR_5, &VAR_11, '4');
  }
  do { if (VAR_5 == VAR_8) FUNC_0("color parsing ran out of space"); *VAR_5++ = ('m'); } while(0);
 }
 do { if (VAR_5 == VAR_8) FUNC_0("color parsing ran out of space"); *VAR_5++ = (0); } while(0);
 return 0;
bad:
 return FUNC_4(FUNC_1("invalid color value: %.*s"), VAR_4, VAR_3);

}
