
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,unsigned long long,...) ;
 char* VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
 if (VAR_3 == 0)
  return;
 if (VAR_0) {
  if (VAR_2) {
   int VAR_5 = (int)((100.0 * VAR_1) / VAR_2);

   FUNC_0(VAR_4, "%s: done %llu/%llu bytes %d%%\n",
    VAR_0, (unsigned long long)VAR_1,
    (unsigned long long)VAR_2, VAR_5);
  } else
   FUNC_0(VAR_4, "%s: done %llu bytes\n",
    VAR_0, (unsigned long long)VAR_1);
 }
 VAR_3 = 0;
}
