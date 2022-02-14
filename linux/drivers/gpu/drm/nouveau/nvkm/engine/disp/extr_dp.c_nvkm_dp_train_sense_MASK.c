
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_dp {int* dpcd; int outp; int aux; } ;
struct lt_state {int* stat; int pc2stat; struct nvkm_dp* dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,char*,int*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct lt_state *VAR_3, bool VAR_4, u32 VAR_5)
{
 struct nvkm_dp *VAR_6 = VAR_3->dp;
 int VAR_7;

 if (VAR_6->dpcd[VAR_2])
  FUNC_1(VAR_6->dpcd[VAR_2] * 4);
 else
  FUNC_3(VAR_5);

 VAR_7 = FUNC_2(VAR_6->aux, VAR_0, VAR_3->stat, 6);
 if (VAR_7)
  return VAR_7;

 if (VAR_4) {
  VAR_7 = FUNC_2(VAR_6->aux, VAR_1, &VAR_3->pc2stat, 1);
  if (VAR_7)
   VAR_3->pc2stat = 0x00;
  FUNC_0(&VAR_6->outp, "status %6ph pc2 %02x",
      VAR_3->stat, VAR_3->pc2stat);
 } else {
  FUNC_0(&VAR_6->outp, "status %6ph", VAR_3->stat);
 }

 return 0;
}
