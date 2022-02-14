
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openflags {scalar_t__ cl; scalar_t__ a; scalar_t__ e; scalar_t__ t; scalar_t__ c; scalar_t__ s; scalar_t__ w; scalar_t__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 int FUNC_2 (char const*,int,int) ;

int FUNC_3(const char *VAR_10, struct openflags VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = 0;

 if (VAR_11.r && VAR_11.w)
  VAR_15 = VAR_5;
 else if (VAR_11.r)
  VAR_15 = VAR_4;
 else if (VAR_11.w)
  VAR_15 = VAR_8;
 else VAR_15 = 0;

 if (VAR_11.s)
  VAR_15 |= VAR_6;
 if (VAR_11.c)
  VAR_15 |= VAR_2;
 if (VAR_11.t)
  VAR_15 |= VAR_7;
 if (VAR_11.e)
  VAR_15 |= VAR_3;
 if (VAR_11.a)
  VAR_15 |= VAR_1;

 VAR_13 = FUNC_2(VAR_10, VAR_15, VAR_12);
 if (VAR_13 < 0)
  return -VAR_9;

 if (VAR_11.cl && FUNC_1(VAR_13, VAR_0, 1)) {
  VAR_14 = -VAR_9;
  FUNC_0(VAR_13);
  return VAR_14;
 }

 return VAR_13;
}
