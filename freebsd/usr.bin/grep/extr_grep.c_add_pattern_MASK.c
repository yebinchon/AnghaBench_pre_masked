
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pat {int dummy; } ;
struct TYPE_4__ {char* pat; size_t len; } ;


 char* FUNC_0 (size_t) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,size_t) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(char *VAR_4, size_t VAR_5)
{


 if (VAR_5 == 0) {
  VAR_0 = 1;
  return;
 }

 if (VAR_3 == VAR_2) {
  VAR_2 *= 2;
  VAR_1 = FUNC_1(VAR_1, ++VAR_2 *
      sizeof(struct pat));
 }
 if (VAR_5 > 0 && VAR_4[VAR_5 - 1] == '\n')
  --VAR_5;

 VAR_1[VAR_3].pat = FUNC_0(VAR_5 + 1);
 FUNC_2(VAR_1[VAR_3].pat, VAR_4, VAR_5);
 VAR_1[VAR_3].len = VAR_5;
 VAR_1[VAR_3].pat[VAR_5] = '\0';
 ++VAR_3;
}
