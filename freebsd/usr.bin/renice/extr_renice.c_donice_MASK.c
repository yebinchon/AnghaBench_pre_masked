
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_2 = 0;
 VAR_8 = FUNC_1(VAR_4, VAR_5);
 if (VAR_8 == -1 && VAR_2) {
  FUNC_3("%d: getpriority", VAR_5);
  return (1);
 }
 if (VAR_7)
  VAR_6 = VAR_8 + VAR_6;
 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;
 if (VAR_6 < VAR_1)
  VAR_6 = VAR_1;
 if (FUNC_2(VAR_4, VAR_5, VAR_6) < 0) {
  FUNC_3("%d: setpriority", VAR_5);
  return (1);
 }
 FUNC_0(VAR_3, "%d: old priority %d, new priority %d\n", VAR_5,
     VAR_8, VAR_6);
 return (0);
}
