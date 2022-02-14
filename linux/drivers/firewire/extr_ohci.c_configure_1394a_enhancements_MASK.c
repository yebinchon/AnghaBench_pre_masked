
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fw_ohci*,int,int) ;
 int FUNC_1 (struct fw_ohci*,int) ;
 int FUNC_2 (struct fw_ohci*,int) ;
 int FUNC_3 (struct fw_ohci*,int,int) ;
 int FUNC_4 (struct fw_ohci*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct fw_ohci *VAR_8)
{
 bool VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;


 if (!(FUNC_2(VAR_8, VAR_1) &
       VAR_3))
  return 0;


 VAR_9 = 0;
 VAR_10 = FUNC_1(VAR_8, 2);
 if (VAR_10 < 0)
  return VAR_10;
 if ((VAR_10 & VAR_6) == VAR_6) {
  VAR_10 = FUNC_0(VAR_8, 1, 8);
  if (VAR_10 < 0)
   return VAR_10;
  if (VAR_10 >= 1)
   VAR_9 = 1;
 }

 if (VAR_8->quirks & VAR_7)
  VAR_9 = 0;


 if (VAR_9) {
  VAR_11 = 0;
  VAR_12 = VAR_4 | VAR_5;
 } else {
  VAR_11 = VAR_4 | VAR_5;
  VAR_12 = 0;
 }
 VAR_10 = FUNC_4(VAR_8, 5, VAR_11, VAR_12);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_0;
 FUNC_3(VAR_8, VAR_13, VAR_2);


 FUNC_3(VAR_8, VAR_0,
    VAR_3);

 return 0;
}
