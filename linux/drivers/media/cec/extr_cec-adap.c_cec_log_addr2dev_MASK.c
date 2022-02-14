
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int* primary_device_type; } ;
struct cec_adapter {TYPE_1__ log_addrs; } ;


 int FUNC_0 (struct cec_adapter const*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct cec_adapter *VAR_0, u8 VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_0->log_addrs.primary_device_type[VAR_2 < 0 ? 0 : VAR_2];
}
