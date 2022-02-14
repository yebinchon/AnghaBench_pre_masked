
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct ofw_pcib_gen_softc {TYPE_1__ ops_pcib_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct ofw_pcib_gen_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct ofw_pcib_gen_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 switch (FUNC_2(VAR_3)) {






 case 129:
  VAR_4->ops_pcib_sc.flags |= VAR_0;
  break;
 }

 switch (FUNC_3(VAR_3)) {





 case 128:
  FUNC_5(VAR_3, VAR_1,
      FUNC_4(VAR_3, VAR_2, 1) << 8 |
      FUNC_4(VAR_3, VAR_1, 1), 2);
  break;
 }

 FUNC_1(VAR_3);
 FUNC_7(VAR_3);
 return (FUNC_6(VAR_3));
}
