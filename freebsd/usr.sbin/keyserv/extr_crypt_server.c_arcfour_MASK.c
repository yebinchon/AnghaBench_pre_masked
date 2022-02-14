
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char x; unsigned char y; unsigned char* state; } ;
typedef TYPE_1__ arcfour_key ;


 int FUNC_0 (unsigned char*,unsigned char*) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, int VAR_1, arcfour_key *VAR_2)
{
   unsigned char VAR_3;
   unsigned char VAR_4;
   unsigned char* VAR_5;
   unsigned char VAR_6;
   short VAR_7;

   VAR_3 = VAR_2->x;
   VAR_4 = VAR_2->y;

   VAR_5 = &VAR_2->state[0];
   for(VAR_7 = 0; VAR_7 < VAR_1; VAR_7 ++)
   {
      VAR_3 = (VAR_3 + 1) % 256;
      VAR_4 = (VAR_5[VAR_3] + VAR_4) % 256;
      FUNC_0(&VAR_5[VAR_3], &VAR_5[VAR_4]);

      VAR_6 = (VAR_5[VAR_3] + VAR_5[VAR_4]) % 256;

      VAR_0[VAR_7] ^= VAR_5[VAR_6];
   }
   VAR_2->x = VAR_3;
   VAR_2->y = VAR_4;
}
