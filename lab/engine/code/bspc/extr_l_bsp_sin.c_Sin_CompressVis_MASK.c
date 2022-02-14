
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ byte ;
struct TYPE_2__ {int numclusters; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0 (byte *VAR_1, byte *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 byte *VAR_6;

 VAR_6 = VAR_2;

 VAR_5 = (VAR_0->numclusters + 7)>>3;

 for (VAR_3=0 ; VAR_3<VAR_5 ; VAR_3++)
 {
  *VAR_6++ = VAR_1[VAR_3];
  if (VAR_1[VAR_3])
   continue;

  VAR_4 = 1;
  for ( VAR_3++; VAR_3<VAR_5 ; VAR_3++)
   if (VAR_1[VAR_3] || VAR_4 == 255)
    break;
   else
    VAR_4++;
  *VAR_6++ = VAR_4;
  VAR_3--;
 }

 return VAR_6 - VAR_2;
}
