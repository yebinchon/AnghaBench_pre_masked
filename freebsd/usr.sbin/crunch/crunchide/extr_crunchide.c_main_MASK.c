
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;

int
FUNC_5(int VAR_4, char **VAR_5)
{
    int VAR_6, VAR_7;

    if(VAR_4 > 0) VAR_2 = VAR_5[0];

    while ((VAR_6 = FUNC_2(VAR_4, VAR_5, "k:f:v")) != -1)
 switch(VAR_6) {
 case 'k':
     FUNC_1(VAR_0);
     break;
 case 'f':
     FUNC_0(VAR_0);
     break;
 case 'v':
     VAR_3 = 1;
     break;
 default:
     FUNC_4();
 }

    VAR_4 -= VAR_1;
    VAR_5 += VAR_1;

    if(VAR_4 == 0) FUNC_4();

    VAR_7 = 0;
    while(VAR_4) {
 if (FUNC_3(*VAR_5))
  VAR_7 = 1;
 VAR_4--, VAR_5++;
    }

    return VAR_7;
}
