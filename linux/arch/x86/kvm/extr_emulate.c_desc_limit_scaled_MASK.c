
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct desc_struct {scalar_t__ g; } ;


 int FUNC_0 (struct desc_struct*) ;

__attribute__((used)) static u32 FUNC_1(struct desc_struct *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0);

 return VAR_0->g ? (VAR_1 << 12) | 0xfff : VAR_1;
}
