
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*,int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_0, uint16_t *VAR_1)
{
 unsigned int VAR_2[8];
 FILE *VAR_3;
 char VAR_4[1024];
 int VAR_5;

 VAR_3 = FUNC_4(VAR_0, "r");
 if (!VAR_3)
  FUNC_0(1, "fopen");

 while (!FUNC_2(VAR_3)) {
  if (FUNC_3(VAR_4, 1024, VAR_3) == ((void*)0))
   break;
  if (FUNC_2(VAR_3))
   break;
  if (FUNC_6(VAR_4) > 0)
   VAR_4[FUNC_6(VAR_4)-1] = '\0';
  if (FUNC_6(VAR_4) == 0)
   break;
  FUNC_5(VAR_4, "%x: %x %x %x %x %x %x %x %x\n",
      &VAR_5, &VAR_2[0], &VAR_2[1], &VAR_2[2], &VAR_2[3], &VAR_2[4],
      &VAR_2[5], &VAR_2[6], &VAR_2[7]);
  VAR_1[VAR_5++] = VAR_2[0];
  VAR_1[VAR_5++] = VAR_2[1];
  VAR_1[VAR_5++] = VAR_2[2];
  VAR_1[VAR_5++] = VAR_2[3];
  VAR_1[VAR_5++] = VAR_2[4];
  VAR_1[VAR_5++] = VAR_2[5];
  VAR_1[VAR_5++] = VAR_2[6];
  VAR_1[VAR_5++] = VAR_2[7];
 }
 FUNC_1(VAR_3);
}
