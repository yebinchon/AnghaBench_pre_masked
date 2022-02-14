
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; } ;
struct TYPE_4__ {char* buf; int len; } ;
struct charlcd_priv {int flags; TYPE_2__ addr; TYPE_1__ esc_seq; } ;
struct charlcd {int bwidth; int width; int ifwidth; TYPE_3__* ops; } ;
struct TYPE_6__ {int (* write_cmd ) (struct charlcd*,int) ;int (* write_data ) (struct charlcd*,unsigned char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct charlcd*,int) ;
 int FUNC_1 (struct charlcd*) ;
 int FUNC_2 (struct charlcd*) ;
 int FUNC_3 (struct charlcd*) ;
 struct charlcd_priv* FUNC_4 (struct charlcd*) ;
 int FUNC_5 (char*,int*,int *) ;
 int FUNC_6 (char*,char) ;
 int FUNC_7 (struct charlcd*,int) ;
 int FUNC_8 (struct charlcd*,int) ;
 int FUNC_9 (struct charlcd*,int) ;
 int FUNC_10 (struct charlcd*,int) ;
 int FUNC_11 (struct charlcd*,char) ;
 int FUNC_12 (struct charlcd*,unsigned char) ;
 int FUNC_13 (struct charlcd*,unsigned char) ;
 int FUNC_14 (struct charlcd*,int) ;
 int FUNC_15 (struct charlcd*,int) ;

__attribute__((used)) static inline int FUNC_16(struct charlcd *VAR_18)
{
 struct charlcd_priv *VAR_19 = FUNC_4(VAR_18);



 int VAR_20 = 0;

 char *VAR_21 = VAR_19->esc_seq.buf + 2;
 int VAR_22 = VAR_19->flags;


 switch (*VAR_21) {
 case 'D':
  VAR_19->flags |= VAR_14;
  VAR_20 = 1;
  break;
 case 'd':
  VAR_19->flags &= ~VAR_14;
  VAR_20 = 1;
  break;
 case 'C':
  VAR_19->flags |= VAR_13;
  VAR_20 = 1;
  break;
 case 'c':
  VAR_19->flags &= ~VAR_13;
  VAR_20 = 1;
  break;
 case 'B':
  VAR_19->flags |= VAR_12;
  VAR_20 = 1;
  break;
 case 'b':
  VAR_19->flags &= ~VAR_12;
  VAR_20 = 1;
  break;
 case '+':
  VAR_19->flags |= VAR_16;
  VAR_20 = 1;
  break;
 case '-':
  VAR_19->flags &= ~VAR_16;
  VAR_20 = 1;
  break;
 case '*':
  FUNC_3(VAR_18);
  VAR_20 = 1;
  break;
 case 'f':
  VAR_19->flags &= ~VAR_15;
  VAR_20 = 1;
  break;
 case 'F':
  VAR_19->flags |= VAR_15;
  VAR_20 = 1;
  break;
 case 'n':
  VAR_19->flags &= ~VAR_17;
  VAR_20 = 1;
  break;
 case 'N':
  VAR_19->flags |= VAR_17;
  VAR_20 = 1;
  break;
 case 'l':
  if (VAR_19->addr.x > 0) {

   if (VAR_19->addr.x < VAR_18->bwidth)
    VAR_18->ops->write_cmd(VAR_18, VAR_9);
   VAR_19->addr.x--;
  }
  VAR_20 = 1;
  break;
 case 'r':
  if (VAR_19->addr.x < VAR_18->width) {

   if (VAR_19->addr.x < (VAR_18->bwidth - 1))
    VAR_18->ops->write_cmd(VAR_18,
     VAR_9 | VAR_10);
   VAR_19->addr.x++;
  }
  VAR_20 = 1;
  break;
 case 'L':
  VAR_18->ops->write_cmd(VAR_18, VAR_9 | VAR_5);
  VAR_20 = 1;
  break;
 case 'R':
  VAR_18->ops->write_cmd(VAR_18,
        VAR_9 | VAR_5 |
        VAR_10);
  VAR_20 = 1;
  break;
 case 'k': {
  int VAR_23;

  for (VAR_23 = VAR_19->addr.x; VAR_23 < VAR_18->bwidth; VAR_23++)
   VAR_18->ops->write_data(VAR_18, ' ');


  FUNC_1(VAR_18);
  VAR_20 = 1;
  break;
 }
 case 'I':
  FUNC_2(VAR_18);
  VAR_20 = 1;
  break;
 case 'G': {
  unsigned char VAR_24[8];
  unsigned char VAR_25;
  int VAR_26;
  int VAR_27;
  char VAR_28;
  int VAR_29;

  if (!FUNC_6(VAR_21, ';'))
   break;

  VAR_21++;

  VAR_25 = *(VAR_21++) - '0';
  if (VAR_25 > 7) {
   VAR_20 = 1;
   break;
  }

  VAR_26 = 0;
  VAR_27 = 0;
  VAR_28 = 0;
  while (*VAR_21 && VAR_26 < 8) {
   VAR_27 ^= 4;
   if (*VAR_21 >= '0' && *VAR_21 <= '9') {
    VAR_28 |= (*VAR_21 - '0') << VAR_27;
   } else if (*VAR_21 >= 'A' && *VAR_21 <= 'F') {
    VAR_28 |= (*VAR_21 - 'A' + 10) << VAR_27;
   } else if (*VAR_21 >= 'a' && *VAR_21 <= 'f') {
    VAR_28 |= (*VAR_21 - 'a' + 10) << VAR_27;
   } else {
    VAR_21++;
    continue;
   }

   if (VAR_27 == 0) {
    VAR_24[VAR_26++] = VAR_28;
    VAR_28 = 0;
   }

   VAR_21++;
  }

  VAR_18->ops->write_cmd(VAR_18, VAR_8 | (VAR_25 * 8));
  for (VAR_29 = 0; VAR_29 < VAR_26; VAR_29++)
   VAR_18->ops->write_data(VAR_18, VAR_24[VAR_29]);


  FUNC_1(VAR_18);
  VAR_20 = 1;
  break;
 }
 case 'x':
 case 'y':
  if (VAR_19->esc_seq.buf[VAR_19->esc_seq.len - 1] != ';')
   break;


  if (FUNC_5(VAR_21, &VAR_19->addr.x, &VAR_19->addr.y))
   FUNC_1(VAR_18);


  VAR_20 = 1;
  break;
 }



 if (VAR_22 == VAR_19->flags)
  return VAR_20;


 if ((VAR_22 ^ VAR_19->flags) &
     (VAR_12 | VAR_13 | VAR_14))

  VAR_18->ops->write_cmd(VAR_18,
   VAR_3 |
   ((VAR_19->flags & VAR_14) ? VAR_4 : 0) |
   ((VAR_19->flags & VAR_13) ? VAR_1 : 0) |
   ((VAR_19->flags & VAR_12) ? VAR_0 : 0));

 else if ((VAR_22 ^ VAR_19->flags) & (VAR_15 | VAR_17))
  VAR_18->ops->write_cmd(VAR_18,
   VAR_7 |
   ((VAR_18->ifwidth == 8) ? VAR_2 : 0) |
   ((VAR_19->flags & VAR_15) ? VAR_6 : 0) |
   ((VAR_19->flags & VAR_17) ? VAR_11 : 0));

 else if ((VAR_22 ^ VAR_19->flags) & VAR_16)
  FUNC_0(VAR_18, !!(VAR_19->flags & VAR_16));

 return VAR_20;
}
