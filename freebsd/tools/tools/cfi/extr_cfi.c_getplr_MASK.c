
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int *) ;

__attribute__((used)) static uint32_t
FUNC_4(void)
{
 uint32_t VAR_2;
 int VAR_3 = FUNC_2(VAR_1);
 if (FUNC_3(VAR_3, VAR_0, &VAR_2) < 0)
  FUNC_1(-1, "ioctl(CFIOCGPLR)");
 FUNC_0(VAR_3);
 return VAR_2;
}
