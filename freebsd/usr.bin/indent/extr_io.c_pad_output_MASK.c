
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tabsize; scalar_t__ use_tabs; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3)





{
    int VAR_4;

    if (VAR_2 >= VAR_3)
 return (VAR_2);
    VAR_4 = VAR_2;
    if (VAR_0.use_tabs) {
 int VAR_5;

 while ((VAR_5 = VAR_0.tabsize * (1 + (VAR_4 - 1) / VAR_0.tabsize) + 1) <= VAR_3) {
     FUNC_0('\t', VAR_1);
     VAR_4 = VAR_5;
 }
    }
    while (VAR_4++ < VAR_3)
 FUNC_0(' ', VAR_1);

    return (VAR_3);
}
