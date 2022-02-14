
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char const**,int,int) ;
 int FUNC_1 (char const**,int) ;
 int VAR_3 ;
 int FUNC_2 (size_t) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,char const*) ;
 size_t FUNC_4 (char const**,int,scalar_t__) ;

void
FUNC_5(const char *VAR_6[], int VAR_7, int VAR_8, int VAR_9)
{
 size_t VAR_10 = VAR_2;

 VAR_3++;
 if (VAR_8 & VAR_1)
  FUNC_3(1, "expanding recursive definition for %s.", VAR_6[1]);
 if (VAR_9)
  VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_5+VAR_4);
 if (VAR_8 == VAR_0)
  FUNC_1(VAR_6, VAR_7);
 else
  FUNC_0(VAR_6, VAR_7, VAR_8);
 if (VAR_10 != VAR_2)
  FUNC_2(VAR_10);
}
