
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ib_vendor_mad {int * data; int * oui; } ;
struct ib_sa_mad {int * data; } ;
struct TYPE_6__ {scalar_t__ rmpp_type; } ;
struct ib_rmpp_mad {TYPE_3__ rmpp_hdr; } ;
struct TYPE_5__ {TYPE_1__* mad; } ;
struct ib_mad_recv_wc {TYPE_2__ recv_buf; } ;
struct ib_mad_hdr {scalar_t__ mgmt_class; int attr_id; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_4__ {int * data; struct ib_mad_hdr mad_hdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ib_mad_hdr*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct ib_mad_hdr*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(struct ib_mad_agent *VAR_9,
        struct ib_mad_recv_wc *VAR_10)
{
 struct ib_mad_hdr *VAR_11 = &VAR_10->recv_buf.mad->mad_hdr;
 struct ib_rmpp_mad *VAR_12 = ((void*)0);
 struct ib_sa_mad *VAR_13;
 struct ib_vendor_mad *VAR_14;
 u8 *VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_7 && VAR_11->mgmt_class != VAR_8)
  return;
 if (VAR_5 && FUNC_0(VAR_10->recv_buf.mad->mad_hdr.attr_id) != VAR_5)
  return;

 FUNC_4("Madeye:recv GMP\n");
 FUNC_2(VAR_11);

 if (FUNC_1(VAR_11)) {
  VAR_12 = (struct ib_rmpp_mad *) VAR_11;
  FUNC_3(&VAR_12->rmpp_hdr);
 }

 if (VAR_6) {
  if (VAR_11->mgmt_class == VAR_0) {
   VAR_17 = VAR_3;

   if (FUNC_1(VAR_11) &&
       VAR_12->rmpp_hdr.rmpp_type != VAR_2)
    return;
   VAR_13 = (struct ib_sa_mad *)
     &VAR_10->recv_buf.mad;
   VAR_15 = VAR_13->data;
  } else {
   if (FUNC_1(VAR_11)) {
    VAR_17 = VAR_4;

    VAR_14 = (struct ib_vendor_mad *)
          &VAR_10->recv_buf.mad;
    FUNC_4("Vendor OUI......%01x %01x %01x\n",
     VAR_14->oui[0],
     VAR_14->oui[1],
     VAR_14->oui[2]);
    VAR_15 = VAR_14->data;
   } else {
    VAR_17 = VAR_1;
    VAR_15 = VAR_10->recv_buf.mad->data;
   }
  }
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   if (VAR_16 % 16 == 0)
    FUNC_4("\nData...........");
   FUNC_4("%01x ", VAR_15[VAR_16]);
  }
  FUNC_4("\n");
 }
}
