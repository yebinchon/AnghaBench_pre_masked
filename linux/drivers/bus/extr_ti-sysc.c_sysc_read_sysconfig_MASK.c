
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sysc {int* offsets; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sysc*,int) ;

__attribute__((used)) static u32 FUNC_1(struct sysc *VAR_1)
{
 int VAR_2 = VAR_1->offsets[VAR_0];

 if (VAR_2 < 0)
  return 0;

 return FUNC_0(VAR_1, VAR_2);
}
