
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct mdp5_smp_state {int assigned; } ;
struct mdp5_smp {int dummy; } ;
struct mdp5_kms {struct drm_device* dev; } ;
struct drm_device {int dev; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 struct mdp5_kms* FUNC_2 (struct mdp5_smp*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mdp5_smp*,struct mdp5_smp_state*,int ,int) ;

int FUNC_7(struct mdp5_smp *VAR_0, struct mdp5_smp_state *VAR_1,
  enum mdp5_pipe VAR_2, uint32_t VAR_3)
{
 struct mdp5_kms *VAR_4 = FUNC_2(VAR_0);
 struct drm_device *VAR_5 = VAR_4->dev;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_5(VAR_2); VAR_6++) {
  u32 VAR_8 = FUNC_3(VAR_2, VAR_6);
  int VAR_9 = VAR_3 & 0xff;

  if (!VAR_9)
   continue;

  FUNC_0("%s[%d]: request %d SMP blocks", FUNC_4(VAR_2), VAR_6, VAR_9);
  VAR_7 = FUNC_6(VAR_0, VAR_1, VAR_8, VAR_9);
  if (VAR_7) {
   FUNC_1(VAR_5->dev, "Cannot allocate %d SMP blocks: %d\n",
     VAR_9, VAR_7);
   return VAR_7;
  }

  VAR_3 >>= 8;
 }

 VAR_1->assigned |= (1 << VAR_2);

 return 0;
}
