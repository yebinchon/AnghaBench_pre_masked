
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pcpu {int address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pcpu *VAR_1, u8 VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0; ; VAR_5++) {
  VAR_4 = FUNC_0(VAR_1->address, VAR_2, VAR_3, ((void*)0));
  if (VAR_4 != VAR_0)
   break;
  if (VAR_5 >= 3)
   FUNC_1(10);
 }
 return VAR_4;
}
