
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_1, unsigned int VAR_2,
       u8 *VAR_3, unsigned int *VAR_4, void *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_2, *VAR_4);

 if (VAR_6 < 0)
  return -VAR_0;

 *VAR_4 = VAR_6;
 return 0;
}
