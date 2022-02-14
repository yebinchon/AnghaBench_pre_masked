
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char rawsz; unsigned int hexsz; } ;


 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(const char *VAR_1,
  unsigned char VAR_2, char *VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5 = 0;
 if (VAR_2 >= VAR_0->rawsz)
  FUNC_0("Too large fanout (%u)", VAR_2);
 while (VAR_2) {
  VAR_3[VAR_4++] = VAR_1[VAR_5++];
  VAR_3[VAR_4++] = VAR_1[VAR_5++];
  VAR_3[VAR_4++] = '/';
  VAR_2--;
 }
 FUNC_1(VAR_3 + VAR_4, VAR_1 + VAR_5, VAR_0->hexsz - VAR_5);
 VAR_3[VAR_4 + VAR_0->hexsz - VAR_5] = '\0';
}
