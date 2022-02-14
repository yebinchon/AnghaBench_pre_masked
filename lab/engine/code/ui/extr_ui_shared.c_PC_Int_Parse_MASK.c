
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {char* string; scalar_t__ type; int intvalue; } ;
typedef TYPE_1__ pc_token_t ;


 int FUNC_0 (int,char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,TYPE_1__*) ;

qboolean FUNC_2(int VAR_3, int *VAR_4) {
 pc_token_t VAR_5;
 int VAR_6 = VAR_1;

 if (!VAR_4)
  return VAR_1;
 if (!FUNC_1(VAR_3, &VAR_5))
  return VAR_1;
 if (VAR_5.string[0] == '-') {
  if (!FUNC_1(VAR_3, &VAR_5))
   return VAR_1;
  VAR_6 = VAR_2;
 }
 if (VAR_5.type != VAR_0) {
  FUNC_0(VAR_3, "expected integer but found %s", VAR_5.string);
  return VAR_1;
 }
 *VAR_4 = VAR_5.intvalue;
 if (VAR_6)
  *VAR_4 = - *VAR_4;
 return VAR_2;
}
