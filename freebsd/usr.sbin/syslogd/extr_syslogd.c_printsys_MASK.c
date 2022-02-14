
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,int *,int ,char*,int *,int *,int *,char*,int) ;
 long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_9)
{
 char *VAR_10, *VAR_11;
 long VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = VAR_7;
 VAR_10 = VAR_9;
 VAR_15 = VAR_0;
 VAR_14 = 1;
 if (*VAR_10 == '<') {
  VAR_8 = 0;
  VAR_12 = FUNC_1(VAR_10 + 1, &VAR_11, 10);
  if (*VAR_11 == '>' && VAR_12 >= 0 && VAR_12 < VAR_2 && VAR_8 == 0) {
   VAR_10 = VAR_11 + 1;
   VAR_15 = VAR_12;
   VAR_14 = 0;
  }
 }




 if (VAR_14 || (VAR_15 & VAR_4) == VAR_3)
  VAR_13 |= VAR_1;
 if (VAR_15 &~ (VAR_4|VAR_5))
  VAR_15 = VAR_0;
 FUNC_0(VAR_15, ((void*)0), VAR_6, "kernel", ((void*)0), ((void*)0), ((void*)0), VAR_10, VAR_13);
}
