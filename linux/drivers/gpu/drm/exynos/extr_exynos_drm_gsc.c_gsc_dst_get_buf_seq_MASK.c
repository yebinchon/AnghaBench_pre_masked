
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gsc_context *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5 = VAR_1;
 u32 VAR_6 = 0x00000001;

 VAR_3 = FUNC_1(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3 & (VAR_6 << VAR_4))
   VAR_5--;

 FUNC_0(VAR_2->dev, "buf_num[%d]\n", VAR_5);

 return VAR_5;
}
