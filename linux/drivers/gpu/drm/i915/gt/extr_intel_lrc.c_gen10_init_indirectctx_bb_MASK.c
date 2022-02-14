
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int dummy; } ;


 unsigned long VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static u32 *
FUNC_1(struct intel_engine_cs *VAR_3, u32 *VAR_4)
{
 int VAR_5;







 VAR_4 = FUNC_0(VAR_4,
           VAR_2,
           0);
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++)
  *VAR_4++ = VAR_1;


 while ((unsigned long)VAR_4 % VAR_0)
  *VAR_4++ = VAR_1;

 return VAR_4;
}
