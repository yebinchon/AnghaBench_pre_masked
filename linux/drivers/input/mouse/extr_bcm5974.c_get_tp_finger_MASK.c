
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tp_finger {int dummy; } ;
struct bcm5974_config {int tp_header; int tp_delta; int tp_fsize; } ;
struct bcm5974 {int * tp_data; struct bcm5974_config cfg; } ;



__attribute__((used)) static const struct tp_finger *FUNC_0(const struct bcm5974 *VAR_0, int VAR_1)
{
 const struct bcm5974_config *VAR_2 = &VAR_0->cfg;
 u8 *VAR_3 = VAR_0->tp_data + VAR_2->tp_header + VAR_2->tp_delta;

 return (const struct tp_finger *)(VAR_3 + VAR_1 * VAR_2->tp_fsize);
}
