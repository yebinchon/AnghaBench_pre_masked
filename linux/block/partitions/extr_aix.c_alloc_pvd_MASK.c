
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pvd {int dummy; } ;
struct parsed_partitions {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvd*) ;
 struct pvd* FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (struct parsed_partitions*,int ,int *,size_t) ;

__attribute__((used)) static struct pvd *FUNC_3(struct parsed_partitions *VAR_1, u32 VAR_2)
{
 size_t VAR_3 = sizeof(struct pvd);
 struct pvd *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_2(VAR_1, VAR_2, (u8 *) VAR_4, VAR_3) < VAR_3) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
