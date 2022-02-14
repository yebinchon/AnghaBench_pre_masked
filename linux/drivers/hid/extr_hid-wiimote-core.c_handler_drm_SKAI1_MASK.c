
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* accel_split; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int __u8 ;


 int FUNC_0 (struct wiimote_data*,int const*) ;
 int FUNC_1 (struct wiimote_data*,int const*,int) ;
 int FUNC_2 (struct wiimote_data*,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct wiimote_data *VAR_0, const __u8 *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 VAR_0->state.accel_split[0] = VAR_1[2];
 VAR_0->state.accel_split[1] = (VAR_1[0] >> 1) & (0x10 | 0x20);
 VAR_0->state.accel_split[1] |= (VAR_1[1] << 1) & (0x40 | 0x80);

 FUNC_1(VAR_0, &VAR_1[3], 0);
 FUNC_2(VAR_0, &VAR_1[12], 0);
}
