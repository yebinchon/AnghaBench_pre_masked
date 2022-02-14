
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testgroup_t {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct testgroup_t*,char const*) ;
 int FUNC_2 (struct testgroup_t*,char const*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct testgroup_t *VAR_3, const char *VAR_4)
{
 int VAR_5 = VAR_0;
 int VAR_6 = 0;
 if (VAR_4[0] == '@') {
  return FUNC_1(VAR_3, VAR_4 + 1);
 } else if (VAR_4[0] == ':') {
  ++VAR_4;
  VAR_5 = VAR_2;
 } else if (VAR_4[0] == '+') {
  ++VAR_4;
  ++VAR_6;
  if (!FUNC_2(VAR_3, VAR_4, 0, VAR_1)) {
   FUNC_0("No such test as %s!\n", VAR_4);
   return -1;
  }
 } else {
  ++VAR_6;
 }
 if (!FUNC_2(VAR_3, VAR_4, 1, VAR_5)) {
  FUNC_0("No such test as %s!\n", VAR_4);
  return -1;
 }
 return VAR_6;
}
