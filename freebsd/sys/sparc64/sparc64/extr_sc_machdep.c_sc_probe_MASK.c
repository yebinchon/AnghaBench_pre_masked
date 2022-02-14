
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_5(FUNC_3(VAR_4), VAR_1) != 0 ||
     VAR_5 >= VAR_3)
  return (VAR_0);

 FUNC_2(VAR_4, "System console");
 return (FUNC_4(VAR_5, FUNC_0(VAR_4) | VAR_2));
}
