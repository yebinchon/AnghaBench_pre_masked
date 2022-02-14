
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
struct switch_port_stats {void* rx_bytes; void* tx_bytes; } ;
struct switch_dev {int dummy; } ;
struct b53_mib_desc {int size; int offset; } ;
struct b53_device {int enabled_ports; scalar_t__* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 struct b53_mib_desc* VAR_5 ;
 struct b53_mib_desc* VAR_6 ;
 struct b53_mib_desc* VAR_7 ;
 int FUNC_2 (struct b53_device*,int ,int ,void**) ;
 int FUNC_3 (struct b53_device*,int ,int ,void**) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;
 struct b53_device* FUNC_6 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_7(struct switch_dev *VAR_8, int VAR_9,
    struct switch_port_stats *VAR_10)
{
 struct b53_device *VAR_11 = FUNC_6(VAR_8);
 const struct b53_mib_desc *VAR_12;
 int VAR_13, VAR_14;
 u64 VAR_15, VAR_16;

 if (!(FUNC_1(VAR_9) & VAR_11->enabled_ports))
  return -VAR_4;

 VAR_13 = VAR_1;
 VAR_14 = VAR_0;

 if (FUNC_4(VAR_11)) {
  if (VAR_9 == 5)
   VAR_9 = 8;

  VAR_12 = VAR_7;
 } else if (FUNC_5(VAR_11)) {
  VAR_12 = VAR_6;
  VAR_13 = VAR_3;
  VAR_14 = VAR_2;
 } else {
  VAR_12 = VAR_5;
 }

 VAR_11->buf[0] = 0;

 if (VAR_12->size == 8) {
  FUNC_3(VAR_11, FUNC_0(VAR_9), VAR_12[VAR_13].offset, &VAR_16);
  FUNC_3(VAR_11, FUNC_0(VAR_9), VAR_12[VAR_14].offset, &VAR_15);
 } else {
  u32 VAR_17;

  FUNC_2(VAR_11, FUNC_0(VAR_9), VAR_12[VAR_13].offset, &VAR_17);
  VAR_16 = VAR_17;

  FUNC_2(VAR_11, FUNC_0(VAR_9), VAR_12[VAR_14].offset, &VAR_17);
  VAR_15 = VAR_17;
 }

 VAR_10->tx_bytes = VAR_16;
 VAR_10->rx_bytes = VAR_15;

 return 0;
}
