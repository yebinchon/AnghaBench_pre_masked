
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfc_multi {int dummy; } ;


 unsigned short FUNC_0 (struct hfc_multi*,int) ;

__attribute__((used)) static inline unsigned short
FUNC_1(struct hfc_multi *VAR_0)
{
 unsigned short VAR_1;
 unsigned short VAR_2;

 VAR_1 = FUNC_0(VAR_0, 0);
 VAR_2 = FUNC_0(VAR_0, 1);

 VAR_1 = VAR_1 | (VAR_2 << 8);

 return VAR_1 & 0x1ff;
}
