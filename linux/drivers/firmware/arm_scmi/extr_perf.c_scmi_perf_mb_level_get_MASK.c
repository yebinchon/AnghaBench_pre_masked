
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int buf; } ;
struct TYPE_6__ {int buf; } ;
struct TYPE_5__ {int poll_completion; } ;
struct scmi_xfer {TYPE_1__ rx; TYPE_3__ tx; TYPE_2__ hdr; } ;
struct scmi_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,int ,int ,int,int,struct scmi_xfer**) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_5(const struct scmi_handle *VAR_2, u32 VAR_3,
      u32 *VAR_4, bool VAR_5)
{
 int VAR_6;
 struct scmi_xfer *VAR_7;

 VAR_6 = FUNC_3(VAR_2, VAR_0, VAR_1,
     sizeof(u32), sizeof(u32), &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7->hdr.poll_completion = VAR_5;
 FUNC_1(VAR_3, VAR_7->tx.buf);

 VAR_6 = FUNC_2(VAR_2, VAR_7);
 if (!VAR_6)
  *VAR_4 = FUNC_0(VAR_7->rx.buf);

 FUNC_4(VAR_2, VAR_7);
 return VAR_6;
}
