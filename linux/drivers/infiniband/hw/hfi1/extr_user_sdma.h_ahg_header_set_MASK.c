
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(u32 *VAR_1, int VAR_2, size_t VAR_3,
     u8 VAR_4, u8 VAR_5, u8 VAR_6, u16 VAR_7)
{
 if ((size_t)VAR_2 >= VAR_3)
  return -VAR_0;
 VAR_1[VAR_2++] = FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6);
 return VAR_2;
}
