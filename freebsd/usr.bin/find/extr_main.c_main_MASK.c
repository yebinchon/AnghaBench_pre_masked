
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char**) ;
 int FUNC_2 (char**) ;
 int VAR_11 ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (char*,int,int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_19, char *VAR_20[])
{
 char **VAR_21, **VAR_22;
 int VAR_23, VAR_24, VAR_25;

 (void)FUNC_5(VAR_6, "");

 (void)FUNC_6(&VAR_15);

 VAR_21 = VAR_22 = VAR_20;
 VAR_23 = VAR_24 = 0;
 VAR_11 = VAR_3 | VAR_4;
 while ((VAR_25 = FUNC_3(VAR_19, VAR_20, "EHLPXdf:sx")) != -1)
  switch (VAR_25) {
  case 'E':
   VAR_18 |= VAR_9;
   break;
  case 'H':
   VAR_23 = 1;
   VAR_24 = 0;
   break;
  case 'L':
   VAR_24 = 1;
   VAR_23 = 0;
   break;
  case 'P':
   VAR_23 = VAR_24 = 0;
   break;
  case 'X':
   VAR_14 = 1;
   break;
  case 'd':
   VAR_12 = 1;
   break;
  case 'f':
   *VAR_21++ = VAR_16;
   break;
  case 's':
   VAR_13 = 1;
   break;
  case 'x':
   VAR_11 |= VAR_5;
   break;
  case '?':
  default:
   FUNC_7();
  }

 VAR_19 -= VAR_17;
 VAR_20 += VAR_17;

 if (VAR_23)
  VAR_11 |= VAR_0;
 if (VAR_24) {
  VAR_11 &= ~VAR_4;
  VAR_11 |= VAR_1;
 }






 for (; *VAR_20 != ((void*)0); *VAR_21++ = *VAR_20++) {
  if (VAR_20[0][0] == '-')
   break;
  if ((VAR_20[0][0] == '!' || VAR_20[0][0] == '(') &&
      VAR_20[0][1] == '\0')
   break;
 }

 if (VAR_21 == VAR_22)
  FUNC_7();
 *VAR_21 = ((void*)0);

 if ((VAR_10 = FUNC_4(".", VAR_8 | VAR_7, 0)) < 0)
  VAR_11 |= VAR_2;

 FUNC_0(FUNC_1(FUNC_2(VAR_20), VAR_22));
}
