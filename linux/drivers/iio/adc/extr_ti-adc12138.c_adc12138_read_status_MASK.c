
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adc12138 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adc12138*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct adc12138 *VAR_1)
{
 u8 VAR_2[2];
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0,
     VAR_2, 2);
 if (VAR_3)
  return VAR_3;

 return (VAR_2[0] << 1) | (VAR_2[1] >> 7);
}
