
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_2(double VAR_14, bool VAR_15)
{

 if (VAR_6)
  FUNC_1("%s", VAR_8);
 else if (VAR_10 && VAR_11) {
  if (VAR_14 <= (double)VAR_5 && VAR_14 >= (double)0)
   FUNC_1(VAR_8, (unsigned long)VAR_14);
  else
   return (1);
 } else if (VAR_10) {
  if (VAR_14 <= (double)VAR_2 && VAR_14 >= (double)VAR_3)
   FUNC_1(VAR_8, (long)VAR_14);
  else
   return (1);
 } else if (VAR_7 || (VAR_9 && !VAR_11)) {
  if (VAR_14 <= (double)VAR_0 && VAR_14 >= (double)VAR_1)
   FUNC_1(VAR_8, (int)VAR_14);
  else
   return (1);
 } else if (VAR_9) {
  if (VAR_14 <= (double)VAR_4 && VAR_14 >= (double)0)
   FUNC_1(VAR_8, (unsigned int)VAR_14);
  else
   return (1);

 } else
  FUNC_1(VAR_8, VAR_14);
 if (!VAR_15)
  FUNC_0(VAR_12, VAR_13);

 return (0);
}
