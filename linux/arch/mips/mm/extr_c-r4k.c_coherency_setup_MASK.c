
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 if (VAR_4 < 0 || VAR_4 > 7)
  VAR_4 = FUNC_6() & VAR_0;
 VAR_3 = VAR_4 << VAR_2;

 FUNC_5("Using cache attribute %d\n", VAR_4);
 FUNC_1(VAR_0, VAR_4);
 switch (FUNC_3()) {
 case 133:
 case 132:
 case 134:
 case 130:
 case 129:
 case 131:
  FUNC_2(VAR_1);
  break;





 case 135:
  FUNC_0();
  break;

 case 128:
  FUNC_4();
  break;
 }
}
