
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,uintptr_t) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void *VAR_4)
{
 uintptr_t VAR_5;

 VAR_5 = (uintptr_t)VAR_4;

 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_3, VAR_1);
  break;
 case 129:
  FUNC_0(VAR_3, VAR_2);
  break;
 case 130:
  FUNC_0(VAR_3, VAR_0);
  break;
 default:
  FUNC_1("Unknown irq %d\n", VAR_5);
 }
}
