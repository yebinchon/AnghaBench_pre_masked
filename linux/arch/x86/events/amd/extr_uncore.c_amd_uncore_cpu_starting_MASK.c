
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_uncore {unsigned int id; } ;


 struct amd_uncore* FUNC_0 (struct amd_uncore*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 struct amd_uncore** FUNC_3 (scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 struct amd_uncore *VAR_8;

 if (VAR_1) {
  VAR_8 = *FUNC_3(VAR_1, VAR_3);
  FUNC_1(0x8000001e, &VAR_4, &VAR_5, &VAR_6, &VAR_7);
  VAR_8->id = VAR_6 & 0xff;

  VAR_8 = FUNC_0(VAR_8, VAR_1);
  *FUNC_3(VAR_1, VAR_3) = VAR_8;
 }

 if (VAR_0) {
  VAR_8 = *FUNC_3(VAR_0, VAR_3);
  VAR_8->id = FUNC_2(VAR_2, VAR_3);

  VAR_8 = FUNC_0(VAR_8, VAR_0);
  *FUNC_3(VAR_0, VAR_3) = VAR_8;
 }

 return 0;
}
