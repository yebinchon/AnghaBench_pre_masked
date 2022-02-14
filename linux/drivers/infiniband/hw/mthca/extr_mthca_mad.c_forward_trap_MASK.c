
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mthca_dev {int sm_lock; int * sm_ah; struct ib_mad_agent*** send_agent; } ;
struct ib_mad_send_buf {int ah; int mad; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_2__ {scalar_t__ mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 struct ib_mad_send_buf* FUNC_1 (struct ib_mad_agent*,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ib_mad_send_buf*) ;
 int FUNC_3 (struct ib_mad_send_buf*,int *) ;
 int FUNC_4 (int ,struct ib_mad const*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct mthca_dev *VAR_6,
    u8 VAR_7,
    const struct ib_mad *VAR_8)
{
 int VAR_9 = VAR_8->mad_hdr.mgmt_class != VAR_3;
 struct ib_mad_send_buf *VAR_10;
 struct ib_mad_agent *VAR_11 = VAR_6->send_agent[VAR_7 - 1][VAR_9];
 int VAR_12;
 unsigned long VAR_13;

 if (VAR_11) {
  VAR_10 = FUNC_1(VAR_11, VAR_9, 0, 0, VAR_5,
           VAR_4, VAR_1,
           VAR_2);
  if (FUNC_0(VAR_10))
   return;






  FUNC_5(&VAR_6->sm_lock, VAR_13);
  FUNC_4(VAR_10->mad, VAR_8, sizeof *VAR_8);
  if ((VAR_10->ah = VAR_6->sm_ah[VAR_7 - 1]))
   VAR_12 = FUNC_3(VAR_10, ((void*)0));
  else
   VAR_12 = -VAR_0;
  FUNC_6(&VAR_6->sm_lock, VAR_13);

  if (VAR_12)
   FUNC_2(VAR_10);
 }
}
