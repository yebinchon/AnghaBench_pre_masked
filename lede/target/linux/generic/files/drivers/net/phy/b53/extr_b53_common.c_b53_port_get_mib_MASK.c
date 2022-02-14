
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__* s; } ;
struct switch_val {int port_vlan; int len; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct b53_mib_desc {int size; char* name; int offset; } ;
struct b53_device {int enabled_ports; scalar_t__* buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct b53_mib_desc* VAR_1 ;
 struct b53_mib_desc* VAR_2 ;
 struct b53_mib_desc* VAR_3 ;
 int FUNC_2 (struct b53_device*,int ,int ,int *) ;
 int FUNC_3 (struct b53_device*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__,char*,char*,int ) ;
 struct b53_device* FUNC_7 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_8(struct switch_dev *VAR_4,
       const struct switch_attr *VAR_5,
       struct switch_val *VAR_6)
{
 struct b53_device *VAR_7 = FUNC_7(VAR_4);
 const struct b53_mib_desc *VAR_8;
 int VAR_9 = VAR_6->port_vlan;
 int VAR_10 = 0;

 if (!(FUNC_1(VAR_9) & VAR_7->enabled_ports))
  return -1;

 if (FUNC_4(VAR_7)) {
  if (VAR_9 == 5)
   VAR_9 = 8;

  VAR_8 = VAR_3;
 } else if (FUNC_5(VAR_7)) {
  VAR_8 = VAR_2;
 } else {
  VAR_8 = VAR_1;
 }

 VAR_7->buf[0] = 0;

 for (; VAR_8->size > 0; VAR_8++) {
  u64 VAR_11;

  if (VAR_8->size == 8) {
   FUNC_3(VAR_7, FUNC_0(VAR_9), VAR_8->offset, &VAR_11);
  } else {
   u32 VAR_12;

   FUNC_2(VAR_7, FUNC_0(VAR_9), VAR_8->offset,
       &VAR_12);
   VAR_11 = VAR_12;
  }

  VAR_10 += FUNC_6(VAR_7->buf + VAR_10, VAR_0 - VAR_10,
    "%-20s: %llu\n", VAR_8->name, VAR_11);
 }

 VAR_6->len = VAR_10;
 VAR_6->value.s = VAR_7->buf;

 return 0;
}
