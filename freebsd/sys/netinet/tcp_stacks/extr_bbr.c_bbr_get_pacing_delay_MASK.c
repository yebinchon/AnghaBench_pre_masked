
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int bbr_google_discount; } ;
struct tcp_bbr {int rc_last_options; scalar_t__ rc_use_google; TYPE_2__ r_ctl; TYPE_1__* rc_tp; } ;
typedef int int32_t ;
struct TYPE_3__ {int t_maxseg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct tcp_bbr*,scalar_t__) ;
 int FUNC_2 (struct tcp_bbr*) ;
 int FUNC_3 (struct tcp_bbr*) ;
 int FUNC_4 (struct tcp_bbr*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct tcp_bbr*,scalar_t__,int,int,int,int,int,int) ;

__attribute__((used)) static uint32_t
FUNC_6(struct tcp_bbr *VAR_6, uint16_t VAR_7, int32_t VAR_8, uint32_t VAR_9, int VAR_10)
{
 uint64_t VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16 = 0;
 uint32_t VAR_17, VAR_18, VAR_19;

 if (VAR_8 == 0)
  return (0);

 VAR_19 = VAR_6->rc_tp->t_maxseg - VAR_6->rc_last_options;
 VAR_18 = (VAR_8 + VAR_19 - 1) / VAR_19;
 if (VAR_6->rc_use_google == 0) {
  VAR_17 = FUNC_3(VAR_6);
  VAR_8 += (VAR_18 * VAR_17);
 }
 VAR_7 = FUNC_1(VAR_6, VAR_7);
 VAR_11 = FUNC_2(VAR_6);
 if (VAR_6->rc_use_google) {
  uint64_t VAR_20;





  VAR_20 = VAR_11 * (uint64_t)(1000 - VAR_6->r_ctl.bbr_google_discount);
  VAR_20 /= (uint64_t)1000;

  if (VAR_20 > 0)
   VAR_11 = VAR_20;
 }
 VAR_12 = ((uint64_t)VAR_8 *
    (uint64_t)VAR_2 *
    (uint64_t)VAR_1);
 VAR_13 = VAR_12 / ((uint64_t)VAR_7 * VAR_11);
 if (VAR_13 == 0)
  VAR_13 = 1;
 VAR_14 = (uint32_t)VAR_13;
 VAR_15 = FUNC_4(VAR_6, VAR_0);
 if (VAR_5 && VAR_4 &&
     (VAR_6->rc_use_google == 0) &&
     (VAR_14 > ((VAR_15 * VAR_5) / VAR_4))) {




  VAR_16 = VAR_14 = (VAR_15 * VAR_5) / VAR_4;
  FUNC_0(VAR_3);
 }
 if (!VAR_10)
  FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_14, VAR_11, VAR_16, 1);
 return (VAR_14);
}
