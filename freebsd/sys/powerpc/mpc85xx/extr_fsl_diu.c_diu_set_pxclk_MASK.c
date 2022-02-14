
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (int ,int) ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, unsigned int VAR_6)
{
 phandle_t VAR_7;
 unsigned long VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_7 = FUNC_7(FUNC_2(VAR_5));
 if ((VAR_8 = FUNC_6()) <= 0) {
  FUNC_3(VAR_5, "Unable to get bus frequency\n");
  return (VAR_0);
 }


 VAR_6 *= 1000;

 VAR_9 = FUNC_5(FUNC_4((VAR_8 + VAR_6/2) / VAR_6, 2), 255) << 16;
 VAR_9 |= VAR_2;
 VAR_10 = FUNC_0(VAR_1);
 VAR_10 &= ~(VAR_2 | VAR_3 |
  VAR_4);
 FUNC_1(VAR_1, VAR_10);
 FUNC_1(VAR_1, VAR_10 | VAR_9);

 return (0);
}
