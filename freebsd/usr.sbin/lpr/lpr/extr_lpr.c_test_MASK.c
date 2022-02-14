
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct exec {int dummy; } ;
typedef int execb ;
struct TYPE_3__ {int st_mode; scalar_t__ st_size; } ;


 int FUNC_0 (struct exec) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*,...) ;
 char* VAR_3 ;
 int FUNC_8 (int,struct exec*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (char const*,TYPE_1__*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_10 (char*,char const*,size_t) ;
 char* FUNC_11 (char const*,char) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_6)
{
 struct exec VAR_7;
 size_t VAR_8;
 int VAR_9;
 char *VAR_10, *VAR_11;

 if (FUNC_1(VAR_6, 4) < 0) {
  FUNC_7("%s: cannot access %s\n", VAR_3, VAR_6);
  return(-1);
 }
 if (FUNC_9(VAR_6, &VAR_5) < 0) {
  FUNC_7("%s: cannot stat %s\n", VAR_3, VAR_6);
  return(-1);
 }
 if ((VAR_5.st_mode & VAR_2) == VAR_1) {
  FUNC_7("%s: %s is a directory\n", VAR_3, VAR_6);
  return(-1);
 }
 if (VAR_5.st_size == 0) {
  FUNC_7("%s: %s is an empty file\n", VAR_3, VAR_6);
  return(-1);
  }
 if ((VAR_9 = FUNC_6(VAR_6, VAR_0)) < 0) {
  FUNC_7("%s: cannot open %s\n", VAR_3, VAR_6);
  return(-1);
 }



 if (FUNC_8(VAR_9, &VAR_7, sizeof(VAR_7)) == sizeof(VAR_7) &&
     !FUNC_0(VAR_7)) {
  FUNC_7("%s: %s is an executable program", VAR_3, VAR_6);
  goto error1;
 }
 (void) FUNC_3(VAR_9);
 if (VAR_4) {





  if ((VAR_10 = FUNC_11(VAR_6, '/')) == ((void*)0)) {
   if (FUNC_2(VAR_6,".") == 0)
    return(1);
  } else {
   if (VAR_10 == VAR_6) {
    VAR_9 = FUNC_2(VAR_6,"/");
   } else {

    VAR_8 = VAR_10 - VAR_6 + 1;
    VAR_11 = FUNC_5(VAR_8);
    FUNC_10(VAR_11, VAR_6, VAR_8);
    VAR_9 = FUNC_2(VAR_6, VAR_11);
    FUNC_4(VAR_11);
   }
   if (VAR_9 == 0)
    return(1);
  }
  FUNC_7("%s: %s: is not removable by you\n", VAR_3, VAR_6);
 }
 return(0);

error1:
 FUNC_7(" and is unprintable\n");
 (void) FUNC_3(VAR_9);
 return(-1);
}
