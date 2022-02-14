
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct parsed_partitions {int dummy; } ;
struct lvname {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lvname*) ;
 struct lvname* FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (struct parsed_partitions*,int ,int *,size_t) ;

__attribute__((used)) static struct lvname *FUNC_3(struct parsed_partitions *VAR_2, u32 VAR_3)
{
 size_t VAR_4 = sizeof(struct lvname) * VAR_1;
 struct lvname *VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_2(VAR_2, VAR_3, (u8 *) VAR_5, VAR_4) < VAR_4) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 return VAR_5;
}
