
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long long rate; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned long long,int) ;

__attribute__((used)) static unsigned long FUNC_1(u32 VAR_1)
{
 unsigned long long VAR_2;
 int VAR_3;

 VAR_2 = VAR_0.rate;
 VAR_2 *= ((VAR_1 >> 11) & 0x1f) + 1;
 VAR_2 *= ((VAR_1 >> 5) & 0x3f) + 1;
 FUNC_0(VAR_2, (VAR_1 & 0x1f) + 1);
 for (VAR_3 = 0; VAR_3 < ((VAR_1 >> 16) & 3); VAR_3++)
  VAR_2 >>= 1;

 return (unsigned long)VAR_2;
}
