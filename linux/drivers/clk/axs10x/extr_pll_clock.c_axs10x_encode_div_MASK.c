
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static inline u32 FUNC_5(unsigned int VAR_0, int VAR_1)
{
 u32 VAR_2 = 0;

 FUNC_3(VAR_2, (VAR_0 % 2 == 0) ? VAR_0 >> 1 : (VAR_0 >> 1) + 1);
 FUNC_2(VAR_2, VAR_0 >> 1);
 FUNC_1(VAR_2, VAR_0 % 2);
 FUNC_0(VAR_2, VAR_0 == 1 ? 1 : 0);
 FUNC_4(VAR_2, VAR_1 == 0 ? 1 : 0);

 return VAR_2;
}
