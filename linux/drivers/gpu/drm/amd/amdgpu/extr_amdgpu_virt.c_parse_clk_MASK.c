
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (char*,int,int*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static uint32_t FUNC_2(char *VAR_0, bool VAR_1)
{
        char *VAR_2 = VAR_0;
        uint32_t VAR_3 = 0;

        do {
                VAR_2 = FUNC_1(VAR_2, ':');
                if (!VAR_2)
                        break;
                VAR_2+=2;
  if (FUNC_0(VAR_2, 10, &VAR_3))
   return 0;
        } while (!VAR_1);

        return VAR_3 * 100;
}
