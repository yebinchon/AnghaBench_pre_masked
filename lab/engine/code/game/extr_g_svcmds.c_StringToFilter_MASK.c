
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {unsigned int mask; unsigned int compare; } ;
typedef TYPE_1__ ipFilter_t ;
typedef int byte ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_2 (char *VAR_2, ipFilter_t *VAR_3)
{
 char VAR_4[128];
 int VAR_5, VAR_6;
 byte VAR_7[4];
 byte VAR_8[4];

 for (VAR_5=0 ; VAR_5<4 ; VAR_5++)
 {
  VAR_7[VAR_5] = 0;
  VAR_8[VAR_5] = 0;
 }

 for (VAR_5=0 ; VAR_5<4 ; VAR_5++)
 {
  if (*VAR_2 < '0' || *VAR_2 > '9')
  {
   if (*VAR_2 == '*')
   {

    VAR_2++;
    if (!*VAR_2)
     break;
    VAR_2++;
    continue;
   }
   FUNC_0( "Bad filter address: %s\n", VAR_2 );
   return VAR_0;
  }

  VAR_6 = 0;
  while (*VAR_2 >= '0' && *VAR_2 <= '9')
  {
   VAR_4[VAR_6++] = *VAR_2++;
  }
  VAR_4[VAR_6] = 0;
  VAR_7[VAR_5] = FUNC_1(VAR_4);
  VAR_8[VAR_5] = 255;

  if (!*VAR_2)
   break;
  VAR_2++;
 }

 VAR_3->mask = *(unsigned *)VAR_8;
 VAR_3->compare = *(unsigned *)VAR_7;

 return VAR_1;
}
