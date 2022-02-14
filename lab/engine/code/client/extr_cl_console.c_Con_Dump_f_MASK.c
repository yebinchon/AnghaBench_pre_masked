
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int filename ;
typedef int fileHandle_t ;
struct TYPE_2__ {int current; int totallines; short* text; int linewidth; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int ) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int VAR_0 ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (char*,int ,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_12 (char*) ;

void FUNC_13 (void)
{
 int VAR_2, VAR_3, VAR_4;
 short *VAR_5;
 fileHandle_t VAR_6;
 int VAR_7;
 char *VAR_8;
 char VAR_9[VAR_0];

 if (FUNC_2() != 2)
 {
  FUNC_4 ("usage: condump <filename>\n");
  return;
 }

 FUNC_11( VAR_9, FUNC_3( 1 ), sizeof( VAR_9 ) );
 FUNC_1( VAR_9, sizeof( VAR_9 ), ".txt" );

 if (!FUNC_0(VAR_9, ".txt"))
 {
  FUNC_4("Con_Dump_f: Only the \".txt\" extension is supported by this command!\n");
  return;
 }

 VAR_6 = FUNC_6( VAR_9 );
 if (!VAR_6)
 {
  FUNC_4 ("ERROR: couldn't open %s.\n", VAR_9);
  return;
 }

 FUNC_4 ("Dumped console text to %s.\n", VAR_9 );


 for (VAR_2 = VAR_1.current - VAR_1.totallines + 1 ; VAR_2 <= VAR_1.current ; VAR_2++)
 {
  VAR_5 = VAR_1.text + (VAR_2%VAR_1.totallines)*VAR_1.linewidth;
  for (VAR_3=0 ; VAR_3<VAR_1.linewidth ; VAR_3++)
   if ((VAR_5[VAR_3] & 0xff) != ' ')
    break;
  if (VAR_3 != VAR_1.linewidth)
   break;
 }




 VAR_7 = VAR_1.linewidth + 2 * sizeof ( char );


 VAR_8 = FUNC_8( VAR_7 );


 VAR_8[VAR_7-1] = 0;
 for ( ; VAR_2 <= VAR_1.current ; VAR_2++)
 {
  VAR_5 = VAR_1.text + (VAR_2%VAR_1.totallines)*VAR_1.linewidth;
  for(VAR_4=0; VAR_4<VAR_1.linewidth; VAR_4++)
   VAR_8[VAR_4] = VAR_5[VAR_4] & 0xff;
  for (VAR_3=VAR_1.linewidth-1 ; VAR_3>=0 ; VAR_3--)
  {
   if (VAR_8[VAR_3] == ' ')
    VAR_8[VAR_3] = 0;
   else
    break;
  }



  FUNC_10(VAR_8, VAR_7, "\n");

  FUNC_7(VAR_8, FUNC_12(VAR_8), VAR_6);
 }

 FUNC_9( VAR_8 );
 FUNC_5( VAR_6 );
}
