
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mode_t ;
typedef int git_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,int,scalar_t__) ;
 int FUNC_7 (int,int ,int ) ;

int FUNC_8(
 const git_buf *VAR_6, const char *VAR_7, int VAR_8, mode_t VAR_9)
{
 int VAR_10, VAR_11 = 0, VAR_12 = 0;

 if (!VAR_8)
  VAR_8 = VAR_2 | VAR_4 | VAR_5;

 if ((VAR_8 & VAR_3) != 0)
  VAR_11 = 1;

 VAR_8 &= ~VAR_3;

 if (!VAR_9)
  VAR_9 = VAR_1;

 if ((VAR_10 = FUNC_6(VAR_7, VAR_8, VAR_9)) < 0) {
  FUNC_2(VAR_0, "could not open '%s' for writing", VAR_7);
  return VAR_10;
 }

 if ((VAR_12 = FUNC_7(VAR_10, FUNC_0(VAR_6), FUNC_1(VAR_6))) < 0) {
  FUNC_2(VAR_0, "could not write to '%s'", VAR_7);
  (void)FUNC_4(VAR_10);
  return VAR_12;
 }

 if (VAR_11 && (VAR_12 = FUNC_5(VAR_10)) < 0) {
  FUNC_2(VAR_0, "could not fsync '%s'", VAR_7);
  FUNC_4(VAR_10);
  return VAR_12;
 }

 if ((VAR_12 = FUNC_4(VAR_10)) < 0) {
  FUNC_2(VAR_0, "error while closing '%s'", VAR_7);
  return VAR_12;
 }

 if (VAR_11 && (VAR_8 & VAR_2))
  VAR_12 = FUNC_3(VAR_7);

 return VAR_12;
}
