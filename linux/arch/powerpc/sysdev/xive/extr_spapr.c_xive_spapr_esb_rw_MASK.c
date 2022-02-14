
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 long FUNC_0 (int ,int ,int ,int,unsigned long*) ;

__attribute__((used)) static u64 FUNC_1(u32 VAR_1, u32 VAR_2, u64 VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 long VAR_6;

 VAR_6 = FUNC_0(VAR_4 ? VAR_0 : 0,
      VAR_1, VAR_2, VAR_3, &VAR_5);
 if (VAR_6)
  return -1;

 return VAR_4 ? 0 : VAR_5;
}
