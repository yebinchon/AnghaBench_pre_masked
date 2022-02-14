
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ib_wc {int dummy; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_device*,int ) ;

int FUNC_1(struct ib_device *VAR_2, int VAR_3, u8 VAR_4,
      const struct ib_wc *VAR_5, const struct ib_grh *VAR_6,
      const struct ib_mad_hdr *VAR_7, size_t VAR_8,
      struct ib_mad_hdr *VAR_9, size_t *VAR_10,
      u16 *VAR_11)
{






 if (FUNC_0(VAR_2, VAR_4) < 0)
  return -VAR_0;

 return VAR_1;
}
