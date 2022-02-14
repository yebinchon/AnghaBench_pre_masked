
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_id {scalar_t__ len; scalar_t__ type; } ;
struct dn_flow {int dummy; } ;


 int FUNC_0 (char*,scalar_t__,char const*,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__,char const*,int,int) ;
 int FUNC_2 (char*,void*,int) ;

__attribute__((used)) static int
FUNC_3(char **VAR_1, char *VAR_2, void *VAR_3, const char *VAR_4, int VAR_5)
{
 struct dn_id *VAR_6 = VAR_3;
 int VAR_7 = VAR_2 - *VAR_1;
 int VAR_8 = sizeof(struct dn_flow);

 if (VAR_7 < VAR_8 || VAR_6->len == 0 || VAR_6->type != VAR_0) {
  FUNC_0("ERROR type %d %s %d have %d need %d",
   VAR_6->type, VAR_4, VAR_5, VAR_7, VAR_8);
  return 1;
 }
 FUNC_1("type %d %s %d len %d", VAR_6->type, VAR_4, VAR_5, VAR_8);
 FUNC_2(*VAR_1, VAR_3, VAR_8);
 ((struct dn_id*)(*VAR_1))->len = VAR_8;
 *VAR_1 += VAR_8;
 return 0;
}
