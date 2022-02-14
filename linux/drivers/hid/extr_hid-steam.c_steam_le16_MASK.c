
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s16 ;
typedef int __le16 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline s16 FUNC_1(u8 *VAR_0)
{
 s16 VAR_1 = (s16) FUNC_0((__le16 *)VAR_0);

 return VAR_1 == -32768 ? -32767 : VAR_1;
}
