
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int32_t
FUNC_3(char *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 char VAR_4[3];
 size_t VAR_5;
 int32_t VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9;


 if ((VAR_6 = FUNC_0(VAR_1)) > 2 && VAR_1[0] == '0' && VAR_1[1] == 'x')
  VAR_7 = 2;
 else
  VAR_7 = 0;

 VAR_8 = VAR_0;
 VAR_0 = 0;
 for (VAR_5 = 0; VAR_7 < VAR_6; VAR_7 += 2) {

  VAR_4[0] = VAR_1[VAR_7];
  VAR_4[1] = VAR_1[VAR_7 + 1];
  VAR_4[2] = '\0';
  if ((VAR_9 = FUNC_1(VAR_4, ((void*)0), 16)) > 0xFF || VAR_0 != 0) {
   VAR_0 = VAR_8;
   return (-1);
  }
  VAR_2[VAR_5] = (uint8_t) VAR_9;
  if (++VAR_5 >= VAR_3) {
   FUNC_2("Key %s too long - truncating to %zu octets",
       VAR_1, VAR_3);
   break;
  }
 }

 return (VAR_5);
}
