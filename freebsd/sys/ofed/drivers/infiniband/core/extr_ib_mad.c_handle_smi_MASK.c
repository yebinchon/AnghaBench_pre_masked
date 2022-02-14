
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {int dummy; } ;
struct ib_mad_qp_info {int dummy; } ;
struct ib_mad_private {scalar_t__ mad; } ;
struct ib_mad_port_private {int dummy; } ;
struct ib_mad_hdr {scalar_t__ base_version; scalar_t__ class_version; } ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ib_mad_port_private*,struct ib_mad_qp_info*,struct ib_wc*,int,struct ib_mad_private*,struct ib_mad_private*) ;
 int FUNC_1 (struct ib_mad_port_private*,struct ib_mad_qp_info*,struct ib_wc*,int,struct ib_mad_private*,struct ib_mad_private*) ;

__attribute__((used)) static enum smi_action
FUNC_2(struct ib_mad_port_private *VAR_2,
    struct ib_mad_qp_info *VAR_3,
    struct ib_wc *VAR_4,
    int VAR_5,
    struct ib_mad_private *VAR_6,
    struct ib_mad_private *VAR_7,
    bool VAR_8)
{
 struct ib_mad_hdr *VAR_9 = (struct ib_mad_hdr *)VAR_6->mad;

 if (VAR_8 && VAR_9->base_version == VAR_0 &&
     VAR_9->class_version == VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7);

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
