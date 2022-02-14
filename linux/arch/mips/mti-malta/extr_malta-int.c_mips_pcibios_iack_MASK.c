
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;






 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static inline int FUNC_5(void)
{
 int VAR_5;





 switch (VAR_4) {
 case 130:
 case 131:
 case 129:
 case 128:
  FUNC_1(VAR_2, VAR_5);
  VAR_5 &= 0xff;
  break;
 case 132:
  VAR_5 = FUNC_0(VAR_1);
  VAR_5 &= 0xff;
  break;
 case 133:





  VAR_0 = 0x20000;


  (void) VAR_0;
  FUNC_3();

  VAR_5 = FUNC_2((u32 *)VAR_3);
  FUNC_3();
  VAR_5 &= 0xff;
  VAR_0 = 0;
  break;
 default:
  FUNC_4("Unknown system controller.\n");
  return -1;
 }
 return VAR_5;
}
