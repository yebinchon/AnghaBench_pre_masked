
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,unsigned int,int *,size_t*,void*) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_2, unsigned int VAR_3,
     u8 *VAR_4, unsigned int *VAR_5, void *VAR_6)
{
 size_t VAR_7 = *VAR_5;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_7, VAR_6);

 if (VAR_8 != VAR_1)
  return -VAR_0;

 *VAR_5 = VAR_7;
 return 0;
}
