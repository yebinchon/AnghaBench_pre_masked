
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
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int *,int ,int ,int ,int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_6, const char *VAR_7, int VAR_8,
    const int *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 char *VAR_14;





 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = VAR_9[VAR_12];
  VAR_11 = FUNC_6(VAR_7, VAR_13);
  if (VAR_11 < 0) {
   FUNC_4(VAR_6, "open", VAR_13);
   continue;
  }
  VAR_14 = FUNC_2(((void*)0), FUNC_1(), VAR_5, VAR_1, VAR_11,
      0);
  if (VAR_14 == VAR_0) {
   if (VAR_8)
    FUNC_5(VAR_6, "mmap dir failed", VAR_13);
   else if ((VAR_13 & VAR_2) == VAR_3 ||
       (VAR_13 & VAR_2) == VAR_4)
    FUNC_4(VAR_6, "mmap file failed",
        VAR_13);
   else
    FUNC_5(VAR_6, "mmap file failed", VAR_13);
  } else {
   if (VAR_8)
    FUNC_4(VAR_6, "mmap dir succeeded",
        VAR_13);
   else
    FUNC_5(VAR_6, "mmap file succeeded",
        VAR_13);
   (void)FUNC_3(VAR_14, FUNC_1());
  }
  FUNC_0(VAR_11);
 }
}
