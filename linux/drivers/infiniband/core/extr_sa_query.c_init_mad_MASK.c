
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ib_sa_query {int flags; TYPE_1__* mad_buf; } ;
struct TYPE_4__ {int tid; int mgmt_class; int class_version; int base_version; } ;
struct ib_sa_mad {TYPE_2__ mad_hdr; } ;
struct ib_mad_agent {scalar_t__ hi_tid; } ;
struct TYPE_3__ {struct ib_sa_mad* mad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_sa_mad*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct ib_sa_query *VAR_8, struct ib_mad_agent *VAR_9)
{
 struct ib_sa_mad *VAR_10 = VAR_8->mad_buf->mad;
 unsigned long VAR_11;

 FUNC_1(VAR_10, 0, sizeof *VAR_10);

 if (VAR_8->flags & VAR_3) {
  VAR_10->mad_hdr.base_version = VAR_4;
  VAR_10->mad_hdr.class_version = VAR_5;
 } else {
  VAR_10->mad_hdr.base_version = VAR_0;
  VAR_10->mad_hdr.class_version = VAR_2;
 }
 VAR_10->mad_hdr.mgmt_class = VAR_1;
 FUNC_2(&VAR_7, VAR_11);
 VAR_10->mad_hdr.tid =
  FUNC_0(((u64) VAR_9->hi_tid) << 32 | VAR_6++);
 FUNC_3(&VAR_7, VAR_11);
}
