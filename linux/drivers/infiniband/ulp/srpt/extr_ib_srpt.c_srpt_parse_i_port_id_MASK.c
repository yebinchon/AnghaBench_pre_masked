
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,unsigned int) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_5(u8 VAR_1[16], const char *VAR_2)
{
 const char *VAR_3;
 unsigned VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_3 = VAR_2;
 if (FUNC_4(VAR_3, "0x", 2) == 0)
  VAR_3 += 2;
 VAR_7 = -VAR_0;
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 % 2)
  goto out;
 VAR_5 = FUNC_2(VAR_4 / 2, 16U);
 VAR_6 = 16 - VAR_5;
 FUNC_1(VAR_1, 0, VAR_6);
 VAR_7 = FUNC_0(VAR_1 + VAR_6, VAR_3, VAR_5);

out:
 return VAR_7;
}
