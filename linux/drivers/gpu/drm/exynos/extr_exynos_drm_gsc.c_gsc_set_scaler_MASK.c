
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_scaler {int main_vratio; int main_hratio; } ;
struct gsc_context {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gsc_context*,int ) ;
 int FUNC_4 (struct gsc_context*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gsc_context *VAR_2, struct gsc_scaler *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_2->dev, "main_hratio[%ld]main_vratio[%ld]\n",
     VAR_3->main_hratio, VAR_3->main_vratio);

 FUNC_3(VAR_2, VAR_3->main_hratio);
 VAR_4 = FUNC_1(VAR_3->main_hratio);
 FUNC_5(VAR_4, VAR_0);

 FUNC_4(VAR_2, VAR_3->main_vratio);
 VAR_4 = FUNC_2(VAR_3->main_vratio);
 FUNC_5(VAR_4, VAR_1);
}
