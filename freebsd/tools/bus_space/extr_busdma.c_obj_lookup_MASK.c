
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct obj {scalar_t__ refcnt; scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct obj** VAR_6 ;

__attribute__((used)) static struct obj *
FUNC_0(int VAR_7, u_int VAR_8)
{
 struct obj *VAR_9;

 if (VAR_7 < 0 || VAR_7 >= VAR_5) {
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 VAR_9 = VAR_6[VAR_7];
 if (VAR_9->refcnt == 0) {
  VAR_4 = VAR_2;
  return (((void*)0));
 }
 if (VAR_8 != VAR_3 && VAR_9->type != VAR_8) {
  VAR_4 = VAR_1;
  return (((void*)0));
 }
 return (VAR_9);
}
