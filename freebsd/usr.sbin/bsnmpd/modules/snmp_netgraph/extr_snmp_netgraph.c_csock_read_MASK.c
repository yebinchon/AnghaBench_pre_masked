
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_mesg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct ng_mesg*,int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ng_mesg*) ;
 struct ng_mesg* FUNC_3 (int) ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static struct ng_mesg *
FUNC_5(char *VAR_13)
{
 struct ng_mesg *VAR_14;
 int VAR_15, VAR_16;

 if ((VAR_14 = FUNC_3(VAR_11 + 1)) == ((void*)0)) {
  VAR_12[VAR_4]++;
  FUNC_4(VAR_6, "out of memory");
  VAR_10 = VAR_1;
  return (((void*)0));
 }
 if ((VAR_15 = FUNC_0(VAR_9, VAR_14, VAR_11 + 1, VAR_13)) < 0) {
  VAR_16 = VAR_10;
  FUNC_2(VAR_14);
  if (VAR_10 == VAR_2) {
   VAR_10 = VAR_16;
   return (((void*)0));
  }
  VAR_12[VAR_3]++;
  FUNC_4(VAR_8, "read from csock: %m");
  VAR_10 = VAR_16;
  return (((void*)0));
 }
 if (VAR_15 == 0) {
  FUNC_4(VAR_7, "node closed -- exiting");
  FUNC_1(0);
 }
 if ((size_t)VAR_15 > VAR_11) {
  VAR_12[VAR_5]++;
  FUNC_4(VAR_8, "ng message too large");
  FUNC_2(VAR_14);
  VAR_10 = VAR_0;
  return (((void*)0));
 }
 return (VAR_14);
}
