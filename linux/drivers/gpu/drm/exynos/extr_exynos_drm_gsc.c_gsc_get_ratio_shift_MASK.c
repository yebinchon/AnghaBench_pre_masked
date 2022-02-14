
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct gsc_context *VAR_1, u32 VAR_2, u32 VAR_3,
          u32 *VAR_4)
{
 FUNC_0(VAR_1->dev, "src[%d]dst[%d]\n", VAR_2, VAR_3);

 if (VAR_2 >= VAR_3 * 8) {
  FUNC_1(VAR_1->dev, "failed to make ratio and shift.\n");
  return -VAR_0;
 } else if (VAR_2 >= VAR_3 * 4)
  *VAR_4 = 4;
 else if (VAR_2 >= VAR_3 * 2)
  *VAR_4 = 2;
 else
  *VAR_4 = 1;

 return 0;
}
