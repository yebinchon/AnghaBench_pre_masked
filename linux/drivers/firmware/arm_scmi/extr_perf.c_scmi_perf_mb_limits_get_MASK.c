
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct scmi_perf_get_limits* buf; } ;
struct TYPE_4__ {int buf; } ;
struct scmi_xfer {TYPE_1__ rx; TYPE_2__ tx; } ;
struct scmi_perf_get_limits {int min_level; int max_level; } ;
struct scmi_handle {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_5(const struct scmi_handle *VAR_2, u32 VAR_3,
       u32 *VAR_4, u32 *VAR_5)
{
 int VAR_6;
 struct scmi_xfer *VAR_7;
 struct scmi_perf_get_limits *VAR_8;

 VAR_6 = FUNC_3(VAR_2, VAR_0, VAR_1,
     sizeof(__le32), 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_3, VAR_7->tx.buf);

 VAR_6 = FUNC_2(VAR_2, VAR_7);
 if (!VAR_6) {
  VAR_8 = VAR_7->rx.buf;

  *VAR_4 = FUNC_0(VAR_8->max_level);
  *VAR_5 = FUNC_0(VAR_8->min_level);
 }

 FUNC_4(VAR_2, VAR_7);
 return VAR_6;
}
