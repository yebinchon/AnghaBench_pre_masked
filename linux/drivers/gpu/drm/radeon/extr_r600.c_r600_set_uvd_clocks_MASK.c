
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (unsigned int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (unsigned int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int VAR_16 ;
 int FUNC_7 (int) ;
 int VAR_17 ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct radeon_device*,int ,int ,int,int,unsigned int,int,int,int,int ,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_11 (struct radeon_device*,int ) ;

int FUNC_12(struct radeon_device *VAR_18, u32 VAR_19, u32 VAR_20)
{
 unsigned VAR_21 = 0, VAR_22, VAR_23 = 0, VAR_24 = 0;
 int VAR_25;


 FUNC_8(VAR_1,
   FUNC_7(1) | FUNC_0(1),
   ~(VAR_17 | VAR_4));


 FUNC_8(VAR_0, VAR_7, ~(
   VAR_14 | VAR_15 | VAR_8));

 if (VAR_18->family >= VAR_2)
  FUNC_8(VAR_5, VAR_6,
    ~VAR_6);

 if (!VAR_19 || !VAR_20) {

  FUNC_8(VAR_0, VAR_15, ~VAR_15);
  return 0;
 }

 if (VAR_18->clock.spll.reference_freq == 10000)
  VAR_22 = 34;
 else
  VAR_22 = 4;

 VAR_25 = FUNC_10(VAR_18, VAR_19, VAR_20, 50000, 160000,
       VAR_22 + 1, 0xFFF, 2, 30, ~0,
       &VAR_21, &VAR_23, &VAR_24);
 if (VAR_25)
  return VAR_25;

 if (VAR_18->family >= VAR_3 && VAR_18->family < VAR_2)
  VAR_21 >>= 1;
 else
  VAR_21 |= 1;

 VAR_25 = FUNC_11(VAR_18, VAR_0);
 if (VAR_25)
  return VAR_25;


 FUNC_8(VAR_0, VAR_14, ~VAR_14);


 if (VAR_18->family >= VAR_2)
  FUNC_8(VAR_0, VAR_12,
    ~VAR_12);


 FUNC_8(VAR_0,
   FUNC_1(VAR_21) |
   FUNC_2(VAR_22),
   ~(VAR_11 | VAR_13));
 FUNC_8(VAR_1,
   FUNC_3(VAR_23 >> 1) |
   FUNC_5((VAR_23 >> 1) + (VAR_23 & 1)) |
   FUNC_4(VAR_24 >> 1) |
   FUNC_6((VAR_24 >> 1) + (VAR_24 & 1)) |
   VAR_10 | VAR_9,
   ~VAR_16);


 FUNC_9(15);


 FUNC_8(VAR_0, 0, ~VAR_14);

 FUNC_9(15);


 FUNC_8(VAR_0, 0, ~VAR_7);

 if (VAR_18->family >= VAR_2)
  FUNC_8(VAR_5, 0, ~VAR_6);

 VAR_25 = FUNC_11(VAR_18, VAR_0);
 if (VAR_25)
  return VAR_25;


 FUNC_8(VAR_1,
   FUNC_7(2) | FUNC_0(2),
   ~(VAR_17 | VAR_4));

 FUNC_9(100);

 return 0;
}
