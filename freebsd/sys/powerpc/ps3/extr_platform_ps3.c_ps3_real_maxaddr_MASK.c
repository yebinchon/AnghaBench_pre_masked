
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int platform_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__,int,int,scalar_t__,int,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static vm_offset_t
FUNC_4(platform_t VAR_0)
{
 uint64_t VAR_1, VAR_2, VAR_3;
 static uint64_t VAR_4 = 0;

 if (VAR_4 == 0) {

  FUNC_0(&VAR_1);
  FUNC_1(&VAR_3);

  FUNC_2(VAR_1,
      FUNC_3("bi") >> 32,
      FUNC_3("pu"),
      VAR_3, FUNC_3("rm_size"),
      &VAR_4, &VAR_2);
 }

 return (VAR_4);
}
