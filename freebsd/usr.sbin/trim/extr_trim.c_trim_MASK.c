
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int,int ,scalar_t__*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_5, off_t VAR_6, off_t VAR_7, bool VAR_8, bool VAR_9)
{
 off_t VAR_10[2];
 int VAR_11, VAR_12;

 if (VAR_7 == 0)
  VAR_7 = FUNC_2(VAR_5);

 if (VAR_9)
  FUNC_5("trim %s offset %ju length %ju\n",
      VAR_5, (uintmax_t)VAR_6, (uintmax_t)VAR_7);

 if (VAR_8) {
  FUNC_5("dry run: add -f to actually perform the operation\n");
  return (0);
 }

 VAR_12 = FUNC_4(VAR_5, VAR_3 | VAR_2);
 VAR_10[0] = VAR_6;
 VAR_10[1] = VAR_7;

 VAR_11 = FUNC_3(VAR_12, VAR_0, VAR_10);
 if (VAR_11 < 0) {
  if (VAR_4 == VAR_1 && VAR_9 && !FUNC_0(VAR_12))
   FUNC_7("%s: TRIM/UNMAP not supported by driver", VAR_5);
  else
   FUNC_6("ioctl(DIOCGDELETE) failed: %s", VAR_5);
 }
 FUNC_1(VAR_12);
 return (VAR_11);
}
