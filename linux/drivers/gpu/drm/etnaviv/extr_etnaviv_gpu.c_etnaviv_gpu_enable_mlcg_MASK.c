
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision; scalar_t__ model; int minor_features3; int minor_features0; int minor_features1; } ;
struct etnaviv_gpu {TYPE_1__ identity; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (struct etnaviv_gpu*,int ,int) ;
 int FUNC_2 (struct etnaviv_gpu*,int ) ;
 int FUNC_3 (struct etnaviv_gpu*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct etnaviv_gpu *VAR_16)
{
 u32 VAR_17, VAR_18;


 VAR_18 = FUNC_2(VAR_16, VAR_8);
 VAR_18 |= VAR_10;


 if (VAR_16->identity.revision == 0x4301 ||
     VAR_16->identity.revision == 0x4302)
  VAR_18 |= VAR_9;

 FUNC_3(VAR_16, VAR_8, VAR_18);

 VAR_17 = FUNC_2(VAR_16, VAR_2);


 if (VAR_16->identity.model >= VAR_14 &&
     VAR_16->identity.model != VAR_15 &&
     !(VAR_16->identity.minor_features3 & VAR_13))
  VAR_17 |= VAR_3;





 if (VAR_16->identity.revision < 0x5000 &&
     VAR_16->identity.minor_features0 & VAR_11 &&
     !(VAR_16->identity.minor_features1 &
       VAR_12))
  VAR_17 |= VAR_4;

 if (VAR_16->identity.revision < 0x5422)
  VAR_17 |= FUNC_0(15);


 if (FUNC_1(VAR_16, VAR_1, 0x5222) ||
     FUNC_1(VAR_16, VAR_0, 0x5108))
  VAR_17 |= VAR_7;

 VAR_17 |= VAR_6;
 VAR_17 |= VAR_5;

 FUNC_3(VAR_16, VAR_2, VAR_17);
}
