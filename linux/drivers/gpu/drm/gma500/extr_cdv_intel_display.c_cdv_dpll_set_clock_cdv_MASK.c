
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gma_crtc {int pipe; } ;
struct gma_clock_t {int m2; int n; int vco; int p2; int p1; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct drm_device*,int,int*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*,int,int) ;
 struct gma_crtc* FUNC_12 (struct drm_crtc*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(struct drm_device *VAR_35, struct drm_crtc *VAR_36,
         struct gma_clock_t *VAR_37, bool VAR_38, u32 VAR_39)
{
 struct gma_crtc *VAR_40 = FUNC_12(VAR_36);
 int VAR_41 = VAR_40->pipe;
 u32 VAR_42, VAR_43, VAR_44;
 int VAR_45 = 0;
 int VAR_46 = (VAR_41 == 0) ? VAR_2 : VAR_3;
 int VAR_47 = (VAR_41 == 0) ? VAR_33 : VAR_34;
 u32 VAR_48;
 u32 VAR_49, VAR_50;

 FUNC_10(VAR_35);

 FUNC_3(VAR_46, VAR_4 | VAR_5);

 FUNC_13(100);


 VAR_48 = 0x68A701;

 FUNC_11(VAR_35, FUNC_7(VAR_41), VAR_48);
 VAR_45 = FUNC_9(VAR_35, VAR_47, &VAR_48);
 if (VAR_45)
  return VAR_45;
 VAR_48 &= ~(VAR_16);


 if (VAR_41 == 1 && !VAR_38 && !(VAR_39 & VAR_6)) {
  FUNC_0("use DPLLA for pipe B\n");
  VAR_48 |= VAR_15;
 } else {
  FUNC_0("use their DPLL for pipe A/B\n");
  VAR_48 |= VAR_14;
 }
 VAR_45 = FUNC_11(VAR_35, VAR_47, VAR_48);
 if (VAR_45)
  return VAR_45;

 VAR_45 = FUNC_9(VAR_35, FUNC_4(VAR_41), &VAR_42);
 if (VAR_45)
  return VAR_45;
 VAR_42 &= ~VAR_17;
 VAR_42 |= ((VAR_37->m2) << VAR_18);
 VAR_45 = FUNC_11(VAR_35, FUNC_4(VAR_41), VAR_42);
 if (VAR_45)
  return VAR_45;

 VAR_45 = FUNC_9(VAR_35, FUNC_5(VAR_41), &VAR_43);
 if (VAR_45)
  return VAR_45;


 VAR_43 &= 0xFFFF;
 VAR_43 |= 0x107;
 VAR_43 &= ~(VAR_23 |
     VAR_21 |
     VAR_19);

 VAR_43 |= ((VAR_37->n) << VAR_22);

 if (VAR_37->vco < 2250000) {
  VAR_43 |= (2 << VAR_20);
  VAR_43 |= (0 << VAR_24);
 } else if (VAR_37->vco < 2750000) {
  VAR_43 |= (1 << VAR_20);
  VAR_43 |= (1 << VAR_24);
 } else if (VAR_37->vco < 3300000) {
  VAR_43 |= (0 << VAR_20);
  VAR_43 |= (2 << VAR_24);
 } else {
  VAR_43 |= (0 << VAR_20);
  VAR_43 |= (3 << VAR_24);
 }

 VAR_45 = FUNC_11(VAR_35, FUNC_5(VAR_41), VAR_43);
 if (VAR_45)
  return VAR_45;

 VAR_45 = FUNC_9(VAR_35, FUNC_6(VAR_41), &VAR_44);
 if (VAR_45)
  return VAR_45;
 VAR_44 &= ~(VAR_32 | VAR_26);
 VAR_44 |= FUNC_8(VAR_37->p1, VAR_25);
 switch (VAR_37->p2) {
 case 5:
  VAR_44 |= FUNC_8(VAR_29, VAR_31);
  break;
 case 10:
  VAR_44 |= FUNC_8(VAR_27, VAR_31);
  break;
 case 14:
  VAR_44 |= FUNC_8(VAR_28, VAR_31);
  break;
 case 7:
  VAR_44 |= FUNC_8(VAR_30, VAR_31);
  break;
 default:
  FUNC_1("Bad P2 clock: %d\n", VAR_37->p2);
  return -VAR_7;
 }
 VAR_45 = FUNC_11(VAR_35, FUNC_6(VAR_41), VAR_44);
 if (VAR_45)
  return VAR_45;

 if (VAR_39) {
  if ((VAR_39 & VAR_1) == VAR_0) {
   VAR_49 = VAR_10;
   FUNC_9(VAR_35, VAR_49, &VAR_50);
   VAR_50 &= ~(VAR_9);
   VAR_50 |= VAR_8 | FUNC_2(VAR_41);
   FUNC_11(VAR_35, VAR_49, VAR_50);

   VAR_49 = VAR_11;
   FUNC_9(VAR_35, VAR_49, &VAR_50);
   VAR_50 &= ~(VAR_9);
   VAR_50 |= VAR_8 | FUNC_2(VAR_41);
   FUNC_11(VAR_35, VAR_49, VAR_50);
  } else {
   VAR_49 = VAR_12;
   FUNC_9(VAR_35, VAR_49, &VAR_50);
   VAR_50 &= ~(VAR_9);
   VAR_50 |= VAR_8 | FUNC_2(VAR_41);
   FUNC_11(VAR_35, VAR_49, VAR_50);

   VAR_49 = VAR_13;
   FUNC_9(VAR_35, VAR_49, &VAR_50);
   VAR_50 &= ~(VAR_9);
   VAR_50 |= VAR_8 | FUNC_2(VAR_41);
   FUNC_11(VAR_35, VAR_49, VAR_50);
  }
 }
 return 0;
}
