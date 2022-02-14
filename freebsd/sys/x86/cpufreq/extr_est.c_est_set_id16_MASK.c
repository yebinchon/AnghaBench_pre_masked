
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, uint16_t VAR_5, int VAR_6)
{
 uint64_t VAR_7;
 uint16_t VAR_8;
 int VAR_9 = 0;


 VAR_7 = FUNC_3(VAR_2);
 VAR_7 = (VAR_7 & ~0xffff) | VAR_5;
 FUNC_4(VAR_2, VAR_7);

 if (VAR_6) {

  FUNC_0(VAR_1);
  FUNC_2(&VAR_8);
  if (VAR_8 != VAR_5) {
   if (VAR_3)
    FUNC_1(VAR_4, "Invalid id16 (set, cur) "
        "= (%u, %u)\n", VAR_5, VAR_8);
   VAR_9 = VAR_0;
  }
 }
 return (VAR_9);
}
