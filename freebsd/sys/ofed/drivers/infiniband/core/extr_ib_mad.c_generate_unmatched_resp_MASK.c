
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct opa_smp {int dummy; } ;
struct TYPE_4__ {int * grh; struct ib_mad* mad; } ;
struct TYPE_5__ {TYPE_1__ recv_buf; int * wc; } ;
struct TYPE_6__ {TYPE_2__ recv_wc; int wc; } ;
struct ib_mad_private {scalar_t__ mad; int grh; TYPE_3__ header; } ;
struct ib_mad_hdr {scalar_t__ method; scalar_t__ mgmt_class; scalar_t__ base_version; int status; } ;
struct ib_mad {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mad_private*) ;
 int FUNC_2 (struct ib_mad_private*,struct ib_mad_private const*,int ) ;
 size_t FUNC_3 (struct opa_smp const*) ;

__attribute__((used)) static bool FUNC_4(const struct ib_mad_private *VAR_8,
        struct ib_mad_private *VAR_9,
        size_t *VAR_10, bool VAR_11)
{
 const struct ib_mad_hdr *VAR_12 = (const struct ib_mad_hdr *)VAR_8->mad;
 struct ib_mad_hdr *VAR_13 = (struct ib_mad_hdr *)VAR_9->mad;

 if (VAR_12->method == VAR_3 ||
     VAR_12->method == VAR_5) {
  FUNC_2(VAR_9, VAR_8, FUNC_1(VAR_9));
  VAR_9->header.recv_wc.wc = &VAR_9->header.wc;
  VAR_9->header.recv_wc.recv_buf.mad = (struct ib_mad *)VAR_9->mad;
  VAR_9->header.recv_wc.recv_buf.grh = &VAR_9->grh;
  VAR_13->method = VAR_4;
  VAR_13->status = FUNC_0(VAR_2);
  if (VAR_12->mgmt_class == VAR_0)
   VAR_13->status |= VAR_6;

  if (VAR_11 && VAR_12->base_version == VAR_7) {
   if (VAR_12->mgmt_class ==
       VAR_1 ||
       VAR_12->mgmt_class ==
       VAR_0)
    *VAR_10 = FUNC_3(
       (const struct opa_smp *)VAR_8->mad);
   else
    *VAR_10 = sizeof(struct ib_mad_hdr);
  }

  return 1;
 } else {
  return 0;
 }
}
