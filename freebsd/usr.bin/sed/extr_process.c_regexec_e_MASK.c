
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int regex_t ;
struct TYPE_3__ {size_t rm_so; size_t rm_eo; } ;



 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char const*,scalar_t__,TYPE_1__*,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int
FUNC_3(regex_t *VAR_4, const char *VAR_5, int VAR_6, int VAR_7,
 size_t VAR_8, size_t VAR_9)
{
 int VAR_10;

 if (VAR_4 == ((void*)0)) {
  if (VAR_1 == ((void*)0))
   FUNC_0(1, "first RE may not be empty");
 } else
  VAR_1 = VAR_4;


 VAR_2[0].rm_so = VAR_8;
 VAR_2[0].rm_eo = VAR_9;

 VAR_10 = FUNC_1(VAR_1, VAR_5,
     VAR_7 ? 0 : VAR_3 + 1, VAR_2, VAR_6 | VAR_0);
 switch(VAR_10) {
 case 0:
  return (1);
 case 128:
  return (0);
 }
 FUNC_0(1, "RE error: %s", FUNC_2(VAR_10, VAR_1));

}
