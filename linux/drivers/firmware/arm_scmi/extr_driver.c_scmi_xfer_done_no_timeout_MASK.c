
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_xfer {int dummy; } ;
struct scmi_chan_info {int dummy; } ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct scmi_chan_info const*,struct scmi_xfer*) ;

__attribute__((used)) static bool FUNC_3(const struct scmi_chan_info *VAR_0,
          struct scmi_xfer *VAR_1, ktime_t VAR_2)
{
 ktime_t VAR_3 = FUNC_1();

 return FUNC_2(VAR_0, VAR_1) || FUNC_0(VAR_3, VAR_2);
}
