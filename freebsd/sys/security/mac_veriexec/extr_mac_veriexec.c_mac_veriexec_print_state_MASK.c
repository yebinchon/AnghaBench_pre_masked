
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sbuf*,char*) ;
 int FUNC_1 (struct sbuf*) ;

__attribute__((used)) static void
FUNC_2(struct sbuf *VAR_6)
{

 if (VAR_5 & VAR_2)
  FUNC_0(VAR_6, "inactive ");
 if (VAR_5 & VAR_3)
  FUNC_0(VAR_6, "loaded ");
 if (VAR_5 & VAR_0)
  FUNC_0(VAR_6, "active ");
 if (VAR_5 & VAR_1)
  FUNC_0(VAR_6, "enforce ");
 if (VAR_5 & VAR_4)
  FUNC_0(VAR_6, "locked ");
 if (VAR_5 != 0)
  FUNC_1(VAR_6);
}
