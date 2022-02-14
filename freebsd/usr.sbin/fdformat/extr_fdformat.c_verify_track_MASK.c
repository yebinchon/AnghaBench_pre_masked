
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int*) ;
 scalar_t__ FUNC_2 (int,long,int ) ;
 int FUNC_3 (int,char*,int) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_4, int VAR_5, int VAR_6)
{
 static char *VAR_7;
 static int VAR_8;
 int VAR_9 = -1, VAR_10, VAR_11 = 0;

 if (FUNC_1(VAR_4, VAR_2, &VAR_9) < 0)
  FUNC_5("warning: ioctl(FD_GOPTS)");
 else {
  VAR_10 = VAR_9;
  VAR_9 |= VAR_1;
  (void)FUNC_1(VAR_4, VAR_3, &VAR_9);
 }

 if (VAR_8 < VAR_6)
  VAR_7 = FUNC_4(VAR_7, VAR_8 = VAR_6);
 if (VAR_7 == ((void*)0))
  FUNC_0(VAR_0, "out of memory");
 if (FUNC_2 (VAR_4, (long) VAR_5 * VAR_6, 0) < 0)
  VAR_11 = -1;

 else if (FUNC_3 (VAR_4, VAR_7, VAR_6) != VAR_6
   && FUNC_3 (VAR_4, VAR_7, VAR_6) != VAR_6)
  VAR_11 = -1;
 if (VAR_9 != -1)
  (void)FUNC_1(VAR_4, VAR_3, &VAR_10);
 return (VAR_11);
}
