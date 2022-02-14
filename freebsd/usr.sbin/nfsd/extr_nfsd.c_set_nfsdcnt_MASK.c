
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_4)
{

 if (VAR_4 < 1) {
  FUNC_0("nfsd count too low %d; reset to %d", VAR_4,
      VAR_0);
  VAR_2 = VAR_0;
 } else if (VAR_4 > VAR_1) {
  FUNC_0("nfsd count too high %d; truncated to %d", VAR_4,
      VAR_1);
  VAR_2 = VAR_1;
 } else
  VAR_2 = VAR_4;
 VAR_3 = 1;
}
