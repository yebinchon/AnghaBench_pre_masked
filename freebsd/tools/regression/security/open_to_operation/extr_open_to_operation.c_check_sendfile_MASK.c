
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (int,int,int ,int,int *,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_5, const char *VAR_6, int VAR_7,
    const int *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13[2];
 off_t VAR_14;





 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_12 = VAR_8[VAR_11];
  VAR_10 = FUNC_3(VAR_6, VAR_12);
  if (VAR_10 < 0) {
   FUNC_1(VAR_5, "open", VAR_12);
   continue;
  }
  if (FUNC_5(VAR_3, VAR_4, 0, VAR_13) < 0) {
   FUNC_1(VAR_5, "socketpair", VAR_12);
   continue;
  }
  if (FUNC_4(VAR_10, VAR_13[0], 0, 1, ((void*)0), &VAR_14, 0) == 0) {
   if (VAR_7)
    FUNC_1(VAR_5, "directory succeeded",
        VAR_12);
   else if (((VAR_12 & VAR_0) == VAR_1) ||
       ((VAR_12 & VAR_0) == VAR_2))
    FUNC_2(VAR_5, "succeeded", VAR_12);
   else
    FUNC_1(VAR_5, "succeeded", VAR_12);
  } else {
   if (VAR_7)
    FUNC_2(VAR_5, "directory failed", VAR_12);
   else if (((VAR_12 & VAR_0) == VAR_1) ||
       ((VAR_12 & VAR_0) == VAR_2))
    FUNC_1(VAR_5, "failed", VAR_12);
   else
    FUNC_2(VAR_5, "failed", VAR_12);
  }
  FUNC_0(VAR_13[0]);
  FUNC_0(VAR_13[1]);
  FUNC_0(VAR_10);
 }
}
