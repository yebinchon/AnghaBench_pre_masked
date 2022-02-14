
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long,unsigned long,int) ;
 int FUNC_1 (struct resource*) ;

__attribute__((used)) static u32 *FUNC_2(struct resource *VAR_1, u32 *VAR_2)
{
 u32 VAR_3 = (u32)FUNC_1(VAR_1);

 VAR_3 += VAR_0-1;
 VAR_3 /= VAR_0;

 FUNC_0("Area %08lx..%08lx, %d blocks\n",
    (unsigned long)VAR_1->start, (unsigned long)VAR_1->end, VAR_3);

 *VAR_2 += VAR_3 * sizeof(u32);
 return VAR_2;
}
