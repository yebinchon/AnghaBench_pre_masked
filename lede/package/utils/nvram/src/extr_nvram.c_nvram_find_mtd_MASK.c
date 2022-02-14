
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int dev ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,int*,int*) ;
 int FUNC_6 (char*,struct stat*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (char*,char*) ;

char * FUNC_10(void)
{
 FILE *VAR_3;
 int VAR_4, VAR_5;
 char VAR_6[VAR_0];
 char *VAR_7 = ((void*)0);
 struct stat VAR_8;

 if ((VAR_3 = FUNC_2("/proc/mtd", "r")))
 {
  while( FUNC_1(VAR_6, sizeof(VAR_6), VAR_3) )
  {
   if( FUNC_9(VAR_6, "nvram") && FUNC_5(VAR_6, "mtd%d: %08x", &VAR_4, &VAR_5) )
   {
    VAR_2 = VAR_5;

    FUNC_4(VAR_6, "/dev/mtdblock%d", VAR_4);
    if( FUNC_6(VAR_6, &VAR_8) > -1 && (VAR_8.st_mode & VAR_1) )
    {
     if( (VAR_7 = (char *) FUNC_3(FUNC_7(VAR_6)+1)) != ((void*)0) )
     {
      FUNC_8(VAR_7, VAR_6, FUNC_7(VAR_6)+1);
      break;
     }
    }
   }
  }
  FUNC_0(VAR_3);
 }

 return VAR_7;
}
