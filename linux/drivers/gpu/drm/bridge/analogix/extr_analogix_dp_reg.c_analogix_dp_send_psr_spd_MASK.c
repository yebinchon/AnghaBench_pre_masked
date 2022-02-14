
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int HB0; unsigned int HB1; unsigned int HB2; unsigned int HB3; } ;
struct dp_sdp {unsigned int* db; TYPE_1__ sdp_header; } ;
struct analogix_dp_device {int dev; scalar_t__ reg_base; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct analogix_dp_device*,scalar_t__,int,int,int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

int FUNC_4(struct analogix_dp_device *VAR_22,
        struct dp_sdp *VAR_23, bool VAR_24)
{
 unsigned int VAR_25;
 int VAR_26;
 ssize_t VAR_27;


 VAR_25 = FUNC_1(VAR_22->reg_base + VAR_0);
 VAR_25 &= ~VAR_16;
 FUNC_3(VAR_25, VAR_22->reg_base + VAR_0);


 FUNC_3(VAR_19 | VAR_18,
        VAR_22->reg_base + VAR_1);


 FUNC_3(VAR_23->sdp_header.HB0, VAR_22->reg_base + VAR_2);
 FUNC_3(VAR_23->sdp_header.HB1, VAR_22->reg_base + VAR_3);
 FUNC_3(VAR_23->sdp_header.HB2, VAR_22->reg_base + VAR_4);
 FUNC_3(VAR_23->sdp_header.HB3, VAR_22->reg_base + VAR_5);


 FUNC_3(0x00, VAR_22->reg_base + VAR_6);
 FUNC_3(0x16, VAR_22->reg_base + VAR_7);
 FUNC_3(0xCE, VAR_22->reg_base + VAR_8);
 FUNC_3(0x5D, VAR_22->reg_base + VAR_9);


 FUNC_3(VAR_23->db[0], VAR_22->reg_base + VAR_11);
 FUNC_3(VAR_23->db[1], VAR_22->reg_base + VAR_12);


 VAR_25 = FUNC_1(VAR_22->reg_base + VAR_10);
 VAR_25 |= VAR_20;
 FUNC_3(VAR_25, VAR_22->reg_base + VAR_10);


 VAR_25 = FUNC_1(VAR_22->reg_base + VAR_0);
 VAR_25 = (VAR_25 | VAR_17) & ~VAR_16;
 FUNC_3(VAR_25, VAR_22->reg_base + VAR_0);


 VAR_25 = FUNC_1(VAR_22->reg_base + VAR_0);
 VAR_25 |= VAR_16;
 FUNC_3(VAR_25, VAR_22->reg_base + VAR_0);

 if (!VAR_24)
  return 0;

 VAR_26 = FUNC_2(VAR_21, VAR_22, VAR_27,
  VAR_27 >= 0 &&
  ((VAR_23->db[1] && VAR_27 == VAR_13) ||
  (!VAR_23->db[1] && VAR_27 == VAR_14)), 1500,
  VAR_15 * 1000);
 if (VAR_26) {
  FUNC_0(VAR_22->dev, "Failed to apply PSR %d\n", VAR_26);
  return VAR_26;
 }
 return 0;
}
