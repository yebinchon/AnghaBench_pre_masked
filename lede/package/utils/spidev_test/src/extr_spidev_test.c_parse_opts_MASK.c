
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; int member_1; char member_3; int member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (void*) ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_2 (char*) ;
 void* VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_3(int VAR_20, char *VAR_21[])
{
 while (1) {
  static const struct option VAR_22[] = {
   { "device", 1, 0, 'D' },
   { "speed", 1, 0, 's' },
   { "delay", 1, 0, 'd' },
   { "bpw", 1, 0, 'b' },
   { "loop", 0, 0, 'l' },
   { "cpha", 0, 0, 'H' },
   { "cpol", 0, 0, 'O' },
   { "lsb", 0, 0, 'L' },
   { "cs-high", 0, 0, 'C' },
   { "3wire", 0, 0, '3' },
   { "no-cs", 0, 0, 'N' },
   { "ready", 0, 0, 'R' },
   { "dual", 0, 0, '2' },
   { "verbose", 0, 0, 'v' },
   { "quad", 0, 0, '4' },
   { ((void*)0), 0, 0, 0 },
  };
  int VAR_23;

  VAR_23 = FUNC_1(VAR_20, VAR_21, "D:s:d:b:lHOLC3NR24p:v", VAR_22, ((void*)0));

  if (VAR_23 == -1)
   break;

  switch (VAR_23) {
  case 'D':
   VAR_14 = VAR_17;
   break;
  case 's':
   VAR_18 = FUNC_0(VAR_17);
   break;
  case 'd':
   VAR_13 = FUNC_0(VAR_17);
   break;
  case 'b':
   VAR_12 = FUNC_0(VAR_17);
   break;
  case 'l':
   VAR_16 |= VAR_4;
   break;
  case 'H':
   VAR_16 |= VAR_1;
   break;
  case 'O':
   VAR_16 |= VAR_2;
   break;
  case 'L':
   VAR_16 |= VAR_5;
   break;
  case 'C':
   VAR_16 |= VAR_3;
   break;
  case '3':
   VAR_16 |= VAR_0;
   break;
  case 'N':
   VAR_16 |= VAR_6;
   break;
  case 'v':
   VAR_19 = 1;
   break;
  case 'R':
   VAR_16 |= VAR_7;
   break;
  case 'p':
   VAR_15 = VAR_17;
   break;
  case '2':
   VAR_16 |= VAR_10;
   break;
  case '4':
   VAR_16 |= VAR_11;
   break;
  default:
   FUNC_2(VAR_21[0]);
   break;
  }
 }
 if (VAR_16 & VAR_4) {
  if (VAR_16 & VAR_10)
   VAR_16 |= VAR_8;
  if (VAR_16 & VAR_11)
   VAR_16 |= VAR_9;
 }
}
