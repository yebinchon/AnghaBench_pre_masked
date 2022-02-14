
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {void* l_len; void* l_start; int l_whence; } ;
typedef void* off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ,struct flock*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*) ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (int,char*,size_t) ;

int
FUNC_10(int VAR_9, char *VAR_10[])
{
 char *VAR_11, *VAR_12;
 size_t VAR_13;
 off_t VAR_14, VAR_15;
 int VAR_16, VAR_17;
 struct flock VAR_18;

 while ((VAR_17 = FUNC_4(VAR_9, VAR_10, "l:s:n:")) != VAR_0) {
  switch (VAR_17) {
  case 'l':
   VAR_13 = FUNC_0(VAR_6);
   break;
  case 's':
   VAR_14 = FUNC_0(VAR_6);
   break;
  case 'n':
   VAR_15 = FUNC_0(VAR_6);
   break;
  default:
   FUNC_8(VAR_10[0]);
   break;
  }
 }

 if (VAR_7 == VAR_9 - 1)
  VAR_11 = VAR_10[VAR_7];
 else
  FUNC_8(VAR_10[0]);

 VAR_12 = (char *)FUNC_5(VAR_13);

 if ((VAR_16 = FUNC_6(VAR_11, VAR_3|VAR_2|VAR_4)) < 0) {
  FUNC_7("open");
  return (1);
 }
 if (FUNC_9(VAR_16, VAR_12, VAR_13) < VAR_13) {
  FUNC_7("write");
  return (1);
 }
 FUNC_2(VAR_8, "fcntl: F_FREESP not supported\n");
 return (1);


 FUNC_3(VAR_12);
 return (0);
}
