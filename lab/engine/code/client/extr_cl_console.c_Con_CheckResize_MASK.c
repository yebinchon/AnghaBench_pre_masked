
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linewidth; int totallines; int* text; int current; int display; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (short*,int*,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_3 (void)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 short VAR_13[VAR_1];

 VAR_8 = (VAR_3 / VAR_4) - 2;

 if (VAR_8 == VAR_5.linewidth)
  return;

 if (VAR_8 < 1)
 {
  VAR_8 = VAR_2;
  VAR_5.linewidth = VAR_8;
  VAR_5.totallines = VAR_1 / VAR_5.linewidth;
  for(VAR_6=0; VAR_6<VAR_1; VAR_6++)

   VAR_5.text[VAR_6] = (FUNC_0(VAR_0)<<8) | ' ';
 }
 else
 {
  VAR_9 = VAR_5.linewidth;
  VAR_5.linewidth = VAR_8;
  VAR_10 = VAR_5.totallines;
  VAR_5.totallines = VAR_1 / VAR_5.linewidth;
  VAR_11 = VAR_10;

  if (VAR_5.totallines < VAR_11)
   VAR_11 = VAR_5.totallines;

  VAR_12 = VAR_9;

  if (VAR_5.linewidth < VAR_12)
   VAR_12 = VAR_5.linewidth;

  FUNC_1 (VAR_13, VAR_5.text, VAR_1 * sizeof(short));
  for(VAR_6=0; VAR_6<VAR_1; VAR_6++)

   VAR_5.text[VAR_6] = (FUNC_0(VAR_0)<<8) | ' ';


  for (VAR_6=0 ; VAR_6<VAR_11 ; VAR_6++)
  {
   for (VAR_7=0 ; VAR_7<VAR_12 ; VAR_7++)
   {
    VAR_5.text[(VAR_5.totallines - 1 - VAR_6) * VAR_5.linewidth + VAR_7] =
      VAR_13[((VAR_5.current - VAR_6 + VAR_10) %
         VAR_10) * VAR_9 + VAR_7];
   }
  }

  FUNC_2 ();
 }

 VAR_5.current = VAR_5.totallines - 1;
 VAR_5.display = VAR_5.current;
}
