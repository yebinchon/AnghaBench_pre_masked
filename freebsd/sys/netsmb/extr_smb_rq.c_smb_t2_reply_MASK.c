
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct smb_t2rq {int t2_flags; int t2_rparam; int t2_rdata; struct smb_rq* t2_rq; } ;
struct mdchain {int md_top; } ;
struct smb_rq {struct mdchain sr_rp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct smb_rq*) ;
 int FUNC_2 (struct smb_rq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mdchain*,int *) ;
 int FUNC_5 (struct mdchain*,scalar_t__*) ;
 int FUNC_6 (struct mdchain*,int*) ;
 int FUNC_7 (struct mdchain*) ;
 int FUNC_8 (struct smb_rq*) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_10(struct smb_t2rq *VAR_4)
{
 struct mdchain *VAR_5;
 struct smb_rq *VAR_6 = VAR_4->t2_rq;
 int VAR_7, VAR_8, VAR_9;
 u_int16_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u_int16_t VAR_17, VAR_18, VAR_19;
 u_int8_t VAR_20;

 VAR_7 = FUNC_8(VAR_6);
 if (VAR_7)
  return VAR_7;
 if ((VAR_4->t2_flags & VAR_3) == 0) {



  FUNC_1(VAR_6);
  FUNC_7(&VAR_6->sr_rp);
  FUNC_2(VAR_6);
  return 0;
 }





 VAR_8 = VAR_9 = 0;
 VAR_10 = VAR_11 = 0xffff;
 VAR_5 = &VAR_6->sr_rp;
 for (;;) {
  FUNC_3(VAR_5->md_top);
  if ((VAR_7 = FUNC_6(VAR_5, &VAR_20)) != 0)
   break;
  if (VAR_20 < 10) {
   VAR_7 = VAR_1;
   break;
  }
  if ((VAR_7 = FUNC_5(VAR_5, &VAR_17)) != 0)
   break;
  if (VAR_10 > VAR_17)
   VAR_10 = VAR_17;
  FUNC_5(VAR_5, &VAR_17);
  if (VAR_11 > VAR_17)
   VAR_11 = VAR_17;
  if ((VAR_7 = FUNC_5(VAR_5, &VAR_17)) != 0 ||
      (VAR_7 = FUNC_5(VAR_5, &VAR_12)) != 0 ||
      (VAR_7 = FUNC_5(VAR_5, &VAR_13)) != 0 ||
      (VAR_7 = FUNC_5(VAR_5, &VAR_15)) != 0)
   break;
  if (VAR_12 != 0 && VAR_15 != VAR_8) {
   FUNC_0("Can't handle disordered parameters %d:%d\n",
       VAR_15, VAR_8);
   VAR_7 = VAR_0;
   break;
  }
  if ((VAR_7 = FUNC_5(VAR_5, &VAR_19)) != 0 ||
      (VAR_7 = FUNC_5(VAR_5, &VAR_14)) != 0 ||
      (VAR_7 = FUNC_5(VAR_5, &VAR_16)) != 0)
   break;
  if (VAR_19 != 0 && VAR_16 != VAR_9) {
   FUNC_0("Can't handle disordered data\n");
   VAR_7 = VAR_0;
   break;
  }
  FUNC_6(VAR_5, &VAR_20);
  FUNC_6(VAR_5, ((void*)0));
  VAR_17 = VAR_20;
  while (VAR_17--)
   FUNC_4(VAR_5, ((void*)0));
  if ((VAR_7 = FUNC_5(VAR_5, &VAR_18)) != 0)
   break;

  if (VAR_19) {
   VAR_7 = FUNC_9(VAR_5->md_top, VAR_14, VAR_19,
       &VAR_4->t2_rdata);
   if (VAR_7)
    break;
  }
  if (VAR_12) {
   VAR_7 = FUNC_9(VAR_5->md_top, VAR_13, VAR_12,
       &VAR_4->t2_rparam);
   if (VAR_7)
    break;
  }
  VAR_8 += VAR_12;
  VAR_9 += VAR_19;
  if (VAR_8 >= VAR_10 && VAR_9 >= VAR_11) {
   VAR_7 = 0;
   VAR_4->t2_flags |= VAR_2;
   break;
  }



  FUNC_1(VAR_6);
  FUNC_7(&VAR_6->sr_rp);
  FUNC_2(VAR_6);
  VAR_7 = FUNC_8(VAR_6);
  if (VAR_7)
   break;
 }
 return VAR_7;
}
