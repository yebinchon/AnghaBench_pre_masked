
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct paace {size_t fspi; int impl_attr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 struct paace* VAR_1 ;

__attribute__((used)) static struct paace *FUNC_2(struct paace *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 struct paace *VAR_5 = ((void*)0);

 VAR_4 = 1UL << (FUNC_0(VAR_2->impl_attr, VAR_0) + 1);

 if (VAR_3 < VAR_4)
  VAR_5 = &VAR_1[VAR_2->fspi + VAR_3];
 else
  FUNC_1("secondary paace out of bounds\n");

 return VAR_5;
}
