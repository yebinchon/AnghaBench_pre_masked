
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ioc_toc_header {int ending_track; int starting_track; } ;
struct cd_toc_entry {int dummy; } ;
struct TYPE_4__ {unsigned char minute; unsigned char second; unsigned char frame; } ;
struct TYPE_5__ {int lba; TYPE_1__ msf; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct ioc_toc_header*) ;
 int FUNC_1 (int,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (int,int,int,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (char*,char*,...) ;
 scalar_t__ FUNC_10 (char*,char) ;
 TYPE_3__* VAR_3 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(char *VAR_4)
{
 struct ioc_toc_header VAR_5;
 unsigned int VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 1, VAR_11 = 1;

 VAR_7 = FUNC_0 (VAR_1, VAR_0, &VAR_5);

 if (VAR_7 < 0)
  return (VAR_7);

 VAR_6 = VAR_5.ending_track - VAR_5.starting_track + 1;
 VAR_7 = FUNC_8 ((VAR_6 + 1) * sizeof (struct cd_toc_entry));

 if (VAR_7 < 0)
  return (VAR_7);

 if (! VAR_4 || ! *VAR_4) {

  if (VAR_2)
   return FUNC_4 (0, FUNC_2 (VAR_3[VAR_6].addr.msf.minute,
       VAR_3[VAR_6].addr.msf.second,
       VAR_3[VAR_6].addr.msf.frame));
  else
   return FUNC_4 (0, FUNC_3(VAR_3[VAR_6].addr.lba));
 }

 if (FUNC_10 (VAR_4, '#')) {

  int VAR_12, VAR_13 = 0;

  if (2 != FUNC_9 (VAR_4, "#%d%d", &VAR_12, &VAR_13) &&
      1 != FUNC_9 (VAR_4, "#%d", &VAR_12))
   goto Clean_up;

  if (VAR_13 == 0) {
   if (VAR_2)
    VAR_13 = FUNC_2 (VAR_3[VAR_6].addr.msf.minute,
            VAR_3[VAR_6].addr.msf.second,
            VAR_3[VAR_6].addr.msf.frame) - VAR_12;
   else
    VAR_13 = FUNC_3(VAR_3[VAR_6].addr.lba) - VAR_12;
  }
  return FUNC_4 (VAR_12, VAR_13);
 }

 if (FUNC_10 (VAR_4, ':')) {
  unsigned VAR_14, VAR_15;
  unsigned VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
  unsigned char VAR_22, VAR_23, VAR_24;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (8 == FUNC_9 (VAR_4, "%d %d:%d.%d %d %d:%d.%d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_20, &VAR_15, &VAR_17, &VAR_19, &VAR_21))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (7 == FUNC_9 (VAR_4, "%d %d:%d %d %d:%d.%d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_15, &VAR_17, &VAR_19, &VAR_21))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (7 == FUNC_9 (VAR_4, "%d %d:%d.%d %d %d:%d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_20, &VAR_15, &VAR_17, &VAR_19))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (7 == FUNC_9 (VAR_4, "%d %d:%d.%d %d:%d.%d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_20, &VAR_17, &VAR_19, &VAR_21))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (6 == FUNC_9 (VAR_4, "%d %d:%d.%d %d:%d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_20, &VAR_17, &VAR_19))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (6 == FUNC_9 (VAR_4, "%d %d:%d %d:%d.%d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_17, &VAR_19, &VAR_21))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (6 == FUNC_9 (VAR_4, "%d %d:%d.%d %d %d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_20, &VAR_15, &VAR_17))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (5 == FUNC_9 (VAR_4, "%d %d:%d %d:%d", &VAR_14, &VAR_16, &VAR_18, &VAR_17, &VAR_19))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (5 == FUNC_9 (VAR_4, "%d %d:%d %d %d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_15, &VAR_17))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (5 == FUNC_9 (VAR_4, "%d %d:%d.%d %d",
      &VAR_14, &VAR_16, &VAR_18, &VAR_20, &VAR_15))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (4 == FUNC_9 (VAR_4, "%d %d:%d %d", &VAR_14, &VAR_16, &VAR_18, &VAR_15))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (4 == FUNC_9 (VAR_4, "%d %d:%d.%d", &VAR_14, &VAR_16, &VAR_18, &VAR_20))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  if (3 == FUNC_9 (VAR_4, "%d %d:%d", &VAR_14, &VAR_16, &VAR_18))
   goto Play_Relative_Addresses;

  VAR_15 = VAR_17 = VAR_19 = VAR_21 = VAR_20 = 0;
  goto Try_Absolute_Timed_Addresses;

Play_Relative_Addresses:
  if (! VAR_14)
   VAR_14 = 1;
  else if (VAR_14 > VAR_6)
   VAR_14 = VAR_6;

  VAR_14--;

  if (VAR_2) {
   VAR_22 = VAR_3[VAR_14].addr.msf.minute;
   VAR_23 = VAR_3[VAR_14].addr.msf.second;
   VAR_24 = VAR_3[VAR_14].addr.msf.frame;
  } else
   FUNC_1(FUNC_3(VAR_3[VAR_14].addr.lba),
    &VAR_22, &VAR_23, &VAR_24);
  if ((VAR_16 > VAR_22)
      || ((VAR_16 == VAR_22)
      && ((VAR_18 > VAR_23)
      || ((VAR_18 == VAR_23)
      && (VAR_20 > VAR_24))))) {
   FUNC_7 ("Track %d is not that long.\n", VAR_14);
   return (0);
  }

  VAR_20 += VAR_24;
  if (VAR_20 >= 75) {
   VAR_18 += VAR_20 / 75;
   VAR_20 %= 75;
  }

  VAR_18 += VAR_23;
  if (VAR_18 >= 60) {
   VAR_16 += VAR_18 / 60;
   VAR_18 %= 60;
  }

  VAR_16 += VAR_22;

  if (! VAR_15) {
   if (VAR_17 || VAR_19 || VAR_21) {
    VAR_15 = VAR_14;
    VAR_21 += VAR_20;
    if (VAR_21 >= 75) {
     VAR_19 += VAR_21 / 75;
     VAR_21 %= 75;
    }

    VAR_19 += VAR_18;
    if (VAR_19 > 60) {
     VAR_17 += VAR_19 / 60;
     VAR_19 %= 60;
    }

    VAR_17 += VAR_16;
   } else {
    VAR_15 = VAR_6;
    if (VAR_2) {
     VAR_17 = VAR_3[VAR_6].addr.msf.minute;
     VAR_19 = VAR_3[VAR_6].addr.msf.second;
     VAR_21 = VAR_3[VAR_6].addr.msf.frame;
    } else {
     FUNC_1(FUNC_3(VAR_3[VAR_6].addr.lba),
      &VAR_22, &VAR_23, &VAR_24);
     VAR_17 = VAR_22;
     VAR_19 = VAR_23;
     VAR_21 = VAR_24;
    }
   }
  } else if (VAR_15 > VAR_6) {
   VAR_15 = VAR_6;
   VAR_17 = VAR_19 = VAR_21 = 0;
  } else {
   if (VAR_17 || VAR_19 || VAR_21)
    VAR_15--;
   if (VAR_2) {
    VAR_22 = VAR_3[VAR_15].addr.msf.minute;
    VAR_23 = VAR_3[VAR_15].addr.msf.second;
    VAR_24 = VAR_3[VAR_15].addr.msf.frame;
   } else
    FUNC_1(FUNC_3(VAR_3[VAR_15].addr.lba),
     &VAR_22, &VAR_23, &VAR_24);
   VAR_21 += VAR_24;
   if (VAR_21 >= 75) {
    VAR_19 += VAR_21 / 75;
    VAR_21 %= 75;
   }

   VAR_19 += VAR_23;
   if (VAR_19 > 60) {
    VAR_17 += VAR_19 / 60;
    VAR_19 %= 60;
   }

   VAR_17 += VAR_22;
  }

  if (VAR_2) {
   VAR_22 = VAR_3[VAR_6].addr.msf.minute;
   VAR_23 = VAR_3[VAR_6].addr.msf.second;
   VAR_24 = VAR_3[VAR_6].addr.msf.frame;
  } else
   FUNC_1(FUNC_3(VAR_3[VAR_6].addr.lba),
    &VAR_22, &VAR_23, &VAR_24);
  if ((VAR_15 < VAR_6)
      && ((VAR_17 > VAR_22)
      || ((VAR_17 == VAR_22)
      && ((VAR_19 > VAR_23)
      || ((VAR_19 == VAR_23)
      && (VAR_21 > VAR_24)))))) {
   FUNC_7 ("The playing time of the disc is not that long.\n");
   return (0);
  }
  return (FUNC_5 (VAR_16, VAR_18, VAR_20, VAR_17, VAR_19, VAR_21));

Try_Absolute_Timed_Addresses:
  if (6 != FUNC_9 (VAR_4, "%d:%d.%d%d:%d.%d",
   &VAR_16, &VAR_18, &VAR_20, &VAR_17, &VAR_19, &VAR_21) &&
      5 != FUNC_9 (VAR_4, "%d:%d.%d%d:%d", &VAR_16, &VAR_18, &VAR_20, &VAR_17, &VAR_19) &&
      5 != FUNC_9 (VAR_4, "%d:%d%d:%d.%d", &VAR_16, &VAR_18, &VAR_17, &VAR_19, &VAR_21) &&
      3 != FUNC_9 (VAR_4, "%d:%d.%d", &VAR_16, &VAR_18, &VAR_20) &&
      4 != FUNC_9 (VAR_4, "%d:%d%d:%d", &VAR_16, &VAR_18, &VAR_17, &VAR_19) &&
      2 != FUNC_9 (VAR_4, "%d:%d", &VAR_16, &VAR_18))
   goto Clean_up;

  if (VAR_17 == 0) {
   if (VAR_2) {
    VAR_17 = VAR_3[VAR_6].addr.msf.minute;
    VAR_19 = VAR_3[VAR_6].addr.msf.second;
    VAR_21 = VAR_3[VAR_6].addr.msf.frame;
   } else {
    FUNC_1(FUNC_3(VAR_3[VAR_6].addr.lba),
     &VAR_22, &VAR_23, &VAR_24);
    VAR_17 = VAR_22;
    VAR_19 = VAR_23;
    VAR_21 = VAR_24;
   }
  }
  return FUNC_5 (VAR_16, VAR_18, VAR_20, VAR_17, VAR_19, VAR_21);
 }




 if (4 != FUNC_9 (VAR_4, "%d.%d%d.%d", &VAR_8, &VAR_10, &VAR_9, &VAR_11) &&
     3 != FUNC_9 (VAR_4, "%d.%d%d", &VAR_8, &VAR_10, &VAR_9) &&
     3 != FUNC_9 (VAR_4, "%d%d.%d", &VAR_8, &VAR_9, &VAR_11) &&
     2 != FUNC_9 (VAR_4, "%d.%d", &VAR_8, &VAR_10) &&
     2 != FUNC_9 (VAR_4, "%d%d", &VAR_8, &VAR_9) &&
     1 != FUNC_9 (VAR_4, "%d", &VAR_8))
  goto Clean_up;

 if (VAR_9 == 0)
  VAR_9 = VAR_6;
 return (FUNC_6 (VAR_8, VAR_10, VAR_9, VAR_11));

Clean_up:
 FUNC_11("invalid command arguments");
 return (0);
}
