
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct scmi_msg_reset_domain_reset* buf; } ;
struct scmi_xfer {TYPE_1__ tx; } ;
struct scmi_reset_info {struct reset_dom_info* dom_info; } ;
struct scmi_msg_reset_domain_reset {void* reset_state; void* flags; void* domain_id; } ;
struct scmi_handle {struct scmi_reset_info* reset_priv; } ;
struct reset_dom_info {scalar_t__ async_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_5(const struct scmi_handle *VAR_3, u32 VAR_4,
        u32 VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct scmi_xfer *VAR_8;
 struct scmi_msg_reset_domain_reset *VAR_9;
 struct scmi_reset_info *VAR_10 = VAR_3->reset_priv;
 struct reset_dom_info *VAR_11 = VAR_10->dom_info + VAR_4;

 if (VAR_11->async_reset)
  VAR_5 |= VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_1, VAR_2,
     sizeof(*VAR_9), 0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_9 = VAR_8->tx.buf;
 VAR_9->domain_id = FUNC_0(VAR_4);
 VAR_9->flags = FUNC_0(VAR_5);
 VAR_9->reset_state = FUNC_0(VAR_6);

 if (VAR_11->async_reset)
  VAR_7 = FUNC_2(VAR_3, VAR_8);
 else
  VAR_7 = FUNC_1(VAR_3, VAR_8);

 FUNC_4(VAR_3, VAR_8);
 return VAR_7;
}
