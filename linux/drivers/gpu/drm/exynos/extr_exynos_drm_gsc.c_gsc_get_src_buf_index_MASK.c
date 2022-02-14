
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dev; int id; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gsc_context*,int,int) ;

__attribute__((used)) static int FUNC_5(struct gsc_context *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 u32 VAR_7 = VAR_2;

 FUNC_0(VAR_3->dev, "gsc id[%d]\n", VAR_3->id);

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = FUNC_2(VAR_4);

 for (VAR_6 = VAR_5; VAR_6 < VAR_2; VAR_6++) {
  if (!((VAR_4 >> VAR_6) & 0x1)) {
   VAR_7 = VAR_6;
   break;
  }
 }

 FUNC_0(VAR_3->dev, "cfg[0x%x]curr_index[%d]buf_id[%d]\n", VAR_4,
     VAR_5, VAR_7);

 if (VAR_7 == VAR_2) {
  FUNC_1(VAR_3->dev, "failed to get in buffer index.\n");
  return -VAR_0;
 }

 FUNC_4(VAR_3, VAR_7, 0);

 return VAR_7;
}
