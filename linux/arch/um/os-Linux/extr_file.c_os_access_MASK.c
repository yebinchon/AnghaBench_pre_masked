
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,int) ;
 int VAR_8 ;

int FUNC_1(const char *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;

 VAR_11 = (VAR_10 & VAR_2 ? VAR_5 : 0) |
  (VAR_10 & VAR_3 ? VAR_6 : 0) |
  (VAR_10 & VAR_4 ? VAR_7 : 0) |
  (VAR_10 & VAR_1 ? VAR_0 : 0);

 VAR_12 = FUNC_0(VAR_9, VAR_11);
 if (VAR_12 < 0)
  return -VAR_8;

 return 0;
}
