
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isar_hw {struct isar_ch* ch; } ;
struct isar_ch {int dpath; } ;



__attribute__((used)) static inline struct isar_ch *
FUNC_0(struct isar_hw *VAR_0, u8 VAR_1)
{
 struct isar_ch *VAR_2 = &VAR_0->ch[0];

 if ((!VAR_1) || (VAR_1 > 2))
  return ((void*)0);
 if (VAR_2->dpath == VAR_1)
  return VAR_2;
 VAR_2++;
 if (VAR_2->dpath == VAR_1)
  return VAR_2;
 return ((void*)0);
}
