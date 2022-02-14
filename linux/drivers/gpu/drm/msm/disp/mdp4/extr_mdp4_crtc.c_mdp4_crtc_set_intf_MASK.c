
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp4_kms {int dummy; } ;
struct mdp4_crtc {int dma; int mixer; int name; } ;
struct drm_crtc {int dummy; } ;
typedef enum mdp4_intf { ____Placeholder_mdp4_intf } mdp4_intf ;


 int FUNC_0 (char*,int ,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct drm_crtc*) ;
 struct mdp4_kms* FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct mdp4_kms*,int ) ;
 int FUNC_7 (struct mdp4_kms*,int ,int ) ;
 struct mdp4_crtc* FUNC_8 (struct drm_crtc*) ;

void FUNC_9(struct drm_crtc *VAR_8, enum mdp4_intf VAR_9, int VAR_10)
{
 struct mdp4_crtc *VAR_11 = FUNC_8(VAR_8);
 struct mdp4_kms *VAR_12 = FUNC_5(VAR_8);
 uint32_t VAR_13;

 VAR_13 = FUNC_6(VAR_12, VAR_7);

 switch (VAR_11->dma) {
 case 129:
  VAR_13 &= ~VAR_5;
  VAR_13 |= FUNC_2(VAR_9);
  break;
 case 128:
  VAR_13 &= ~VAR_6;
  VAR_13 |= FUNC_3(VAR_9);
  break;
 case 130:
  VAR_13 &= ~VAR_4;
  VAR_13 |= FUNC_1(VAR_9);
  break;
 }

 if (VAR_9 == VAR_1) {
  VAR_13 &= ~VAR_2;
  VAR_13 |= VAR_3;
 } else if (VAR_9 == VAR_0) {
  VAR_13 &= ~VAR_3;
  VAR_13 |= VAR_2;
 }

 VAR_11->mixer = VAR_10;

 FUNC_4(VAR_8);

 FUNC_0("%s: intf_sel=%08x", VAR_11->name, VAR_13);

 FUNC_7(VAR_12, VAR_7, VAR_13);
}
