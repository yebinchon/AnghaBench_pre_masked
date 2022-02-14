
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rawsz; } ;


 int FUNC_0 (char const*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(const char *VAR_1, unsigned char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->rawsz; VAR_3++) {
  int VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0)
   return -1;
  *VAR_2++ = VAR_4;
  VAR_1 += 2;
 }
 return 0;
}
