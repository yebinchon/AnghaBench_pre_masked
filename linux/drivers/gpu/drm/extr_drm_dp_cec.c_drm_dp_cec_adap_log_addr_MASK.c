
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct drm_dp_aux {int dummy; } ;
struct TYPE_2__ {int log_addr_mask; } ;
struct cec_adapter {TYPE_1__ log_addrs; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_dp_aux* FUNC_0 (struct cec_adapter*) ;
 scalar_t__ FUNC_1 (struct drm_dp_aux*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_3, u8 VAR_4)
{
 struct drm_dp_aux *VAR_5 = FUNC_0(VAR_3);

 u16 VAR_6 = 1 << VAR_0;
 u8 VAR_7[2];
 ssize_t VAR_8;

 if (VAR_4 != VAR_1)
  VAR_6 |= VAR_3->log_addrs.log_addr_mask | (1 << VAR_4);
 VAR_7[0] = VAR_6 & 0xff;
 VAR_7[1] = VAR_6 >> 8;
 VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_7, 2);
 return (VAR_4 != VAR_1 && VAR_8 < 0) ? VAR_8 : 0;
}
