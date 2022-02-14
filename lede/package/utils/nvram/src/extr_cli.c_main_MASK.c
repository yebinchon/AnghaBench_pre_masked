
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvram_handle_t ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_0 ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 () ;

int FUNC_13( int VAR_1, const char *VAR_2[] )
{
 nvram_handle_t *VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 1;
 int VAR_7 = 0;
 int VAR_8;

 if( VAR_1 < 2 ) {
  FUNC_12();
  return 1;
 }


 if( ( !FUNC_11(VAR_2[1], "set") && 2 < VAR_1 ) ||
  ( !FUNC_11(VAR_2[1], "unset") && 2 < VAR_1 ) ||
  !FUNC_11(VAR_2[1], "commit") )
  VAR_5 = 1;


 VAR_3 = VAR_5 ? FUNC_9() : FUNC_8();

 if( VAR_3 != ((void*)0) && VAR_1 > 1 )
 {
  for( VAR_8 = 1; VAR_8 < VAR_1; VAR_8++ )
  {
   if( !FUNC_11(VAR_2[VAR_8], "show") )
   {
    VAR_6 = FUNC_3(VAR_3);
    VAR_7++;
   }
   else if( !FUNC_11(VAR_2[VAR_8], "info") )
   {
    VAR_6 = FUNC_1(VAR_3);
    VAR_7++;
   }
   else if( !FUNC_11(VAR_2[VAR_8], "get") || !FUNC_11(VAR_2[VAR_8], "unset") || !FUNC_11(VAR_2[VAR_8], "set") )
   {
    if( (VAR_8+1) < VAR_1 )
    {
     switch(VAR_2[VAR_8++][0])
     {
      case 'g':
       VAR_6 = FUNC_0(VAR_3, VAR_2[VAR_8]);
       break;

      case 'u':
       VAR_6 = FUNC_4(VAR_3, VAR_2[VAR_8]);
       break;

      case 's':
       VAR_6 = FUNC_2(VAR_3, VAR_2[VAR_8]);
       break;
     }
     VAR_7++;
    }
    else
    {
     FUNC_5(VAR_0, "Command '%s' requires an argument!\n", VAR_2[VAR_8]);
     VAR_7 = 0;
     break;
    }
   }
   else if( !FUNC_11(VAR_2[VAR_8], "commit") )
   {
    VAR_4 = 1;
    VAR_7++;
   }
   else
   {
    FUNC_5(VAR_0, "Unknown option '%s' !\n", VAR_2[VAR_8]);
    VAR_7 = 0;
    break;
   }
  }

  if( VAR_5 )
   VAR_6 = FUNC_7(VAR_3);

  FUNC_6(VAR_3);

  if( VAR_4 )
   VAR_6 = FUNC_10();
 }

 if( !VAR_3 )
 {
  FUNC_5(VAR_0,
   "Could not open nvram! Possible reasons are:\n"
   "	- No device found (/proc not mounted or no nvram present)\n"
   "	- Insufficient permissions to open mtd device\n"
   "	- Insufficient memory to complete operation\n"
   "	- Memory mapping failed or not supported\n"
   "	- Nvram magic not found in specific nvram partition\n"
  );

  VAR_6 = 1;
 }
 else if( !VAR_7 )
 {
  FUNC_12();
  VAR_6 = 1;
 }

 return VAR_6;
}
