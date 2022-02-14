
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static int
FUNC_3(const char * VAR_2)
{
    int VAR_3;
    const char * VAR_4;
    const char * VAR_5 = FUNC_2(VAR_2, '/');

    VAR_5 = VAR_5 ? VAR_5+1 : VAR_2;
    for (VAR_3 = 0; (VAR_4 = VAR_1[VAR_3].name) != ((void*)0); VAR_3++) {
 while (*VAR_4) {
     int VAR_6 = FUNC_0(VAR_4, "|");

     if (VAR_6 == 0)
  break;
     if (FUNC_1(VAR_5, VAR_4, VAR_6) == 0)
  return VAR_3;
     if (*(VAR_4 += VAR_6))
  ++VAR_4;
 }
    }
    return VAR_0;
}
