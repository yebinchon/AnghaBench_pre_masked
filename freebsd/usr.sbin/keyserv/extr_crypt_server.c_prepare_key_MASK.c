
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* state; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ arcfour_key ;


 int FUNC_0 (unsigned char*,unsigned char*) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, int VAR_1,
   arcfour_key *VAR_2)
{
   unsigned char VAR_3;
   unsigned char VAR_4;
   unsigned char* VAR_5;
   short VAR_6;

   VAR_5 = &VAR_2->state[0];
   for(VAR_6 = 0; VAR_6 < 256; VAR_6++)
   VAR_5[VAR_6] = VAR_6;
   VAR_2->x = 0;
   VAR_2->y = 0;
   VAR_3 = 0;
   VAR_4 = 0;
   for(VAR_6 = 0; VAR_6 < 256; VAR_6++)
   {
      VAR_4 = (VAR_0[VAR_3] + VAR_5[VAR_6] +
                VAR_4) % 256;
      FUNC_0(&VAR_5[VAR_6], &VAR_5[VAR_4]);

      VAR_3 = (VAR_3 + 1) % VAR_1;
   }
}
