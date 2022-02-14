
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_ssi_controller {int max_speed; int fck_rate; } ;
struct hsi_controller {int device; } ;


 int FUNC_0 (int *,char*,int,int ,int) ;
 struct omap_ssi_controller* FUNC_1 (struct hsi_controller*) ;

__attribute__((used)) static u32 FUNC_2(struct hsi_controller *VAR_0)
{
 struct omap_ssi_controller *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = (u32) VAR_1->fck_rate;


 VAR_2 >>= 1;

 VAR_2--;
 FUNC_0(&VAR_0->device, "TX div %d for fck_rate %lu Khz speed %d Kb/s\n",
  VAR_2 / VAR_1->max_speed, VAR_1->fck_rate,
  VAR_1->max_speed);

 return VAR_2 / VAR_1->max_speed;
}
