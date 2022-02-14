
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char BYTE ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;

BYTE FUNC_2(void)
{
    if(VAR_2 == 0) {
 FUNC_0(VAR_3);
    }

    while(VAR_3[VAR_2] == ' ' || VAR_3[VAR_2] == '\t')
 VAR_2++;

    if(VAR_3[VAR_2] == '\0') {
 VAR_2 = 0;
 return('\n');
    }

    if(!FUNC_1(VAR_3[VAR_2]))
 return(VAR_3[VAR_2++]);

    VAR_1 = VAR_3[VAR_2] - '0';
    while(FUNC_1(VAR_3[++VAR_2]))
 VAR_1 = 10 * VAR_1 + VAR_3[VAR_2] - '0';

    return VAR_0;
}
