
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct plt_entry {int br; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct plt_entry FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;

struct plt_entry FUNC_3(u64 VAR_2, void *VAR_3)
{
 struct plt_entry VAR_4;
 static u32 VAR_5;

 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_1,
       VAR_0);

 VAR_4 = FUNC_0(VAR_2, (u64)VAR_3, VAR_1);
 VAR_4.br = FUNC_2(VAR_5);

 return VAR_4;
}
