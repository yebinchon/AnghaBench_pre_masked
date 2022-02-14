
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct img_hash_dev {int cpu_addr; int flags; int dev; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (size_t const,int ) ;

__attribute__((used)) static int FUNC_3(struct img_hash_dev *VAR_2, const u8 *VAR_3,
        size_t VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;
 const u32 *VAR_8 = (const u32 *)VAR_3;

 FUNC_1(VAR_2->dev, "xmit_cpu:  length: %zu bytes\n", VAR_4);

 if (VAR_5)
  VAR_2->flags |= VAR_0;

 VAR_7 = FUNC_0(VAR_4, sizeof(u32));

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_2(VAR_8[VAR_6], VAR_2->cpu_addr);

 return -VAR_1;
}
