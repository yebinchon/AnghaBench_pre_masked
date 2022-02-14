
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct sti_plane {int desc; TYPE_2__ drm_plane; } ;
struct sti_mixer {int dev; } ;
struct TYPE_3__ {int normalized_zpos; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;






 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct sti_mixer*,int ) ;
 int FUNC_4 (struct sti_mixer*,int ,int) ;
 int FUNC_5 (struct sti_mixer*) ;
 int FUNC_6 (struct sti_plane*) ;

int FUNC_7(struct sti_mixer *VAR_8, struct sti_plane *VAR_9)
{
 int VAR_10, VAR_11 = VAR_9->drm_plane.state->normalized_zpos;
 unsigned int VAR_12;
 u32 VAR_13, VAR_14;

 switch (VAR_9->desc) {
 case 132:
  VAR_10 = VAR_0;
  break;
 case 131:
  VAR_10 = VAR_1;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 case 133:

  return 0;
 default:
  FUNC_1("Unknown plane %d\n", VAR_9->desc);
  return 1;
 }


 VAR_14 = FUNC_3(VAR_8, VAR_6);
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_13 = VAR_4 << (3 * VAR_12);
  if ((VAR_14 & VAR_13) == VAR_10 << (3 * VAR_12))
   break;
 }

 VAR_13 |= VAR_4 << (3 * VAR_11);
 VAR_10 = VAR_10 << (3 * VAR_11);

 FUNC_0("%s %s depth=%d\n", FUNC_5(VAR_8),
    FUNC_6(VAR_9), VAR_11);
 FUNC_2(VAR_8->dev, "GAM_MIXER_CRB val 0x%x mask 0x%x\n",
  VAR_10, VAR_13);

 VAR_14 &= ~VAR_13;
 VAR_14 |= VAR_10;
 FUNC_4(VAR_8, VAR_6, VAR_14);

 FUNC_2(VAR_8->dev, "Read GAM_MIXER_CRB 0x%x\n",
  FUNC_3(VAR_8, VAR_6));
 return 0;
}
