
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_1(unsigned VAR_2, u8 VAR_3[])
{
 if (VAR_2)
  return VAR_1;

 VAR_3[0] = VAR_0;

 FUNC_0(VAR_1, "\tDMAWMB\n");

 return VAR_1;
}
