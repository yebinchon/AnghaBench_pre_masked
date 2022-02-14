
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct send_context {int credits; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

u32 FUNC_1(struct send_context *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;


 VAR_2 += VAR_3 << 2;
 VAR_4 = FUNC_0(VAR_2, VAR_0);


 if (VAR_1->credits <= VAR_4)
  VAR_5 = 1;
 else
  VAR_5 = VAR_1->credits - VAR_4;

 return VAR_5;
}
