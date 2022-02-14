
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void
FUNC_1(int VAR_8)
{

 (void)FUNC_0(VAR_7, "kgmon: kernel read-only: ");
 if (VAR_5 && (VAR_8 == VAR_1 || VAR_8 == VAR_2))
  (void)FUNC_0(VAR_7, "data may be inconsistent\n");
 if (VAR_6)
  (void)FUNC_0(VAR_7, "-r suppressed\n");
 if (VAR_0)
  (void)FUNC_0(VAR_7, "-B suppressed\n");
 if (VAR_3)
  (void)FUNC_0(VAR_7, "-b suppressed\n");
 if (VAR_4)
  (void)FUNC_0(VAR_7, "-h suppressed\n");
 VAR_6 = VAR_0 = VAR_3 = VAR_4 = 0;
}
