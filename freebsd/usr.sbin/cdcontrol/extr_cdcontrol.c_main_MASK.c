
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 char* FUNC_4 (int*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_6 (char*,int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,char*) ;
 int VAR_5 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (char*) ;
 int VAR_6 ;
 int FUNC_14 (int *) ;

int
FUNC_15(int VAR_7, char **VAR_8)
{
 int VAR_9;
 char *VAR_10;

 for (;;) {
  switch (FUNC_3 (VAR_7, VAR_8, "svhf:")) {
  case -1:
   break;
  case 's':
   VAR_6 = 0;
   continue;
  case 'v':
   VAR_6 = 2;
   continue;
  case 'f':
   VAR_1 = VAR_3;
   continue;
  case 'h':
  default:
   FUNC_12 ();
  }
  break;
 }
 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;

 if (VAR_7 > 0 && ! FUNC_9 (*VAR_8, "help"))
  FUNC_12 ();

 if (! VAR_1) {
  VAR_1 = FUNC_2("CDROM");
 }

 if (! VAR_1)
  VAR_1 = FUNC_13("MUSIC_CD");
 if (! VAR_1)
  VAR_1 = FUNC_13("CD_DRIVE");
 if (! VAR_1)
  VAR_1 = FUNC_13("DISC");
 if (! VAR_1)
  VAR_1 = FUNC_13("CDPLAY");

 if (VAR_7 > 0) {
  char VAR_11[80], *VAR_12;
  int VAR_13, VAR_14;

  for (VAR_12=VAR_11; VAR_7-->0; ++VAR_8) {
   VAR_13 = FUNC_11 (*VAR_8);

   if (VAR_12 + VAR_13 >= VAR_11 + sizeof (VAR_11) - 1)
    FUNC_12 ();

   if (VAR_12 > VAR_11)
    *VAR_12++ = ' ';

   FUNC_10 (VAR_12, *VAR_8);
   VAR_12 += VAR_13;
  }
  *VAR_12 = 0;
  VAR_10 = FUNC_6 (VAR_11, &VAR_9);
  VAR_14 = FUNC_8 (VAR_9, VAR_10);
  if (VAR_14 < 0 && VAR_6)
   FUNC_14(((void*)0));

  return (VAR_14);
 }

 if (VAR_6 == 1)
  VAR_6 = FUNC_5 (0);

 if (VAR_6) {
  FUNC_7 ("Compact Disc Control utility, version %s\n", VAR_0);
  FUNC_7 ("Type `?' for command list\n\n");
 }

 for (;;) {
  VAR_10 = FUNC_4 (&VAR_9);
  if (FUNC_8 (VAR_9, VAR_10) < 0) {
   if (VAR_6)
    FUNC_14(((void*)0));
   FUNC_0 (VAR_2);
   VAR_2 = -1;
  }
  FUNC_1 (VAR_5);
 }
}
