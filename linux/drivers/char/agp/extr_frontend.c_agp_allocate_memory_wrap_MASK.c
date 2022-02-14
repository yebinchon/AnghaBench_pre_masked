
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct agp_memory {int dummy; } ;


 struct agp_memory* FUNC_0 (int ,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct agp_memory*) ;

struct agp_memory *FUNC_2(size_t VAR_1, u32 VAR_2)
{
 struct agp_memory *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_3);
 return VAR_3;
}
