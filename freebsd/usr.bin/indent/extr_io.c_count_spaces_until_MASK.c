
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tabsize; } ;


 TYPE_1__ VAR_0 ;

int
FUNC_0(int VAR_1, char *VAR_2, char *VAR_3)




{
    char *VAR_4;

    for (VAR_4 = VAR_2; *VAR_4 != '\0' && VAR_4 != VAR_3; ++VAR_4) {
 switch (*VAR_4) {

 case '\n':
 case 014:
     VAR_1 = 1;
     break;

 case '\t':
     VAR_1 = VAR_0.tabsize * (1 + (VAR_1 - 1) / VAR_0.tabsize) + 1;
     break;

 case 010:
     --VAR_1;
     break;

 default:
     ++VAR_1;
     break;
 }
    }
    return (VAR_1);
}
