
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct obj {int oid; int type; } ;


 struct obj* FUNC_0 (int,int) ;
 int FUNC_1 (struct obj*) ;
 int VAR_0 ;
 struct obj** VAR_1 ;
 struct obj** FUNC_2 (struct obj**,int) ;

__attribute__((used)) static struct obj *
FUNC_3(u_int VAR_2)
{
 struct obj **VAR_3, *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(1, sizeof(struct obj));
 VAR_4->type = VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5] == 0)
   break;
 }
 if (VAR_5 == VAR_0) {
  VAR_3 = FUNC_2(VAR_1, sizeof(struct obj *) * (VAR_0 + 1));
  if (VAR_3 == ((void*)0)) {
   FUNC_1(VAR_4);
   return (((void*)0));
  }
  VAR_1 = VAR_3;
  VAR_0++;
 }
 VAR_1[VAR_5] = VAR_4;
 VAR_4->oid = VAR_5;
 return (VAR_4);
}
