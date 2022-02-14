
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct vmctx*) ;
 int FUNC_1 (struct vmctx*) ;

__attribute__((used)) static void
FUNC_2(struct vmctx *VAR_12)
{
 int VAR_13;


 VAR_13 = 0;
 if ((VAR_10 & VAR_8) && (VAR_11 & VAR_9))
  VAR_13 = 1;
 if ((VAR_10 & VAR_0) && (VAR_11 & VAR_1))
  VAR_13 = 1;
 if ((VAR_10 & VAR_2) && (VAR_11 & VAR_3))
  VAR_13 = 1;
 if ((VAR_10 & VAR_6) && (VAR_11 & VAR_7))
  VAR_13 = 1;
 if ((VAR_10 & VAR_4) && (VAR_11 & VAR_5))
  VAR_13 = 1;
 if (VAR_13)
  FUNC_0(VAR_12);
 else
  FUNC_1(VAR_12);
}
