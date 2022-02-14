
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int *,int ,int,int ,int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_7, const char *VAR_8, int VAR_9,
    const int *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 char *VAR_15;





 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_14 = VAR_10[VAR_13];
  VAR_12 = FUNC_6(VAR_8, VAR_14);
  if (VAR_12 < 0) {
   FUNC_4(VAR_7, "open", VAR_14);
   continue;
  }
  VAR_15 = FUNC_2(((void*)0), FUNC_1(), VAR_5 | VAR_6,
      VAR_1, VAR_12, 0);
  if (VAR_15 == VAR_0) {
   if (VAR_9)
    FUNC_5(VAR_7, "mmap dir failed", VAR_14);
   else if ((VAR_14 & VAR_2) == VAR_3 ||
       (VAR_14 & VAR_2) == VAR_4)
    FUNC_4(VAR_7, "mmap file failed",
        VAR_14);
   else
    FUNC_5(VAR_7, "mmap file failed", VAR_14);
  } else {
   if (VAR_9)
    FUNC_4(VAR_7, "mmap dir succeeded",
        VAR_14);
   else if ((VAR_14 & VAR_2) == VAR_3 ||
       (VAR_14 & VAR_2) == VAR_4)
    FUNC_5(VAR_7, "mmap file succeeded",
        VAR_14);
   else
    FUNC_4(VAR_7, "mmap file succeeded",
        VAR_14);
   (void)FUNC_3(VAR_15, FUNC_1());
  }
  FUNC_0(VAR_12);
 }
}
