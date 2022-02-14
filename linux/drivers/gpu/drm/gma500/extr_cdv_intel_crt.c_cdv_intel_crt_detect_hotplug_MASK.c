
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct drm_connector *VAR_10,
        bool VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->dev;
 u32 VAR_13;
 int VAR_14, VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17;





 VAR_15 = 2;

 VAR_17 = VAR_13 = FUNC_0(VAR_7);
 VAR_13 &= ~(VAR_1);
 VAR_13 |= VAR_2;

 VAR_13 |= VAR_0;
 VAR_13 |= VAR_6;

 for (VAR_14 = 0; VAR_14 < VAR_15 ; VAR_14++) {
  unsigned long VAR_18;

  FUNC_1(VAR_7, VAR_13);
  VAR_18 = VAR_9 + FUNC_2(1000);

  do {
   if (!(FUNC_0(VAR_7) &
     VAR_2))
    break;
   FUNC_3(1);
  } while (FUNC_4(VAR_18, VAR_9));
 }

 if ((FUNC_0(VAR_8) & VAR_4) !=
     VAR_5)
  VAR_16 = 1;


 FUNC_1(VAR_8, VAR_3);


 FUNC_1(VAR_7, VAR_17);
 return VAR_16;
}
