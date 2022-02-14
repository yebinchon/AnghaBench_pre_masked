
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anx78xx {int * map; } ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct anx78xx*) ;
 int FUNC_3 (struct anx78xx*) ;
 int FUNC_4 (struct anx78xx*) ;
 int FUNC_5 (struct anx78xx*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct anx78xx *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_1(VAR_6->map[VAR_0],
     VAR_4,
     VAR_2 | VAR_1 | VAR_5 |
     VAR_3);

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7) {
  FUNC_0("Failed to enable interrupts: %d\n", VAR_7);
  goto err_poweroff;
 }

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  FUNC_0("Failed receiver initialization: %d\n", VAR_7);
  goto err_poweroff;
 }

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7) {
  FUNC_0("Failed transmitter initialization: %d\n", VAR_7);
  goto err_poweroff;
 }





 FUNC_6(10000, 15000);

 return 0;

err_poweroff:
 FUNC_0("Failed SlimPort transmitter initialization: %d\n", VAR_7);
 FUNC_3(VAR_6);

 return VAR_7;
}
