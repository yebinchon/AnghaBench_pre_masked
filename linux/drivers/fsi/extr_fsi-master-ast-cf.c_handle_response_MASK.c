
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u8 ;
struct fsi_msg {int dummy; } ;
struct fsi_master_acf {scalar_t__ trace_enabled; int dev; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct fsi_msg*,int) ;
 int FUNC_1 (struct fsi_msg*,int) ;
 int FUNC_2 (struct fsi_master_acf*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct fsi_master_acf*) ;
 int FUNC_8 (struct fsi_master_acf*,int,int *,int*) ;
 int FUNC_9 (struct fsi_master_acf*,struct fsi_msg*,int) ;
 int FUNC_10 (struct fsi_master_acf*,int) ;
 int FUNC_11 (struct fsi_master_acf*,int) ;
 int FUNC_12 (struct fsi_master_acf*,int) ;

__attribute__((used)) static int FUNC_13(struct fsi_master_acf *VAR_6,
      uint8_t VAR_7, uint8_t VAR_8, void *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 int VAR_12 = 0;
 struct fsi_msg VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15;
retry:
 VAR_11 = FUNC_8(VAR_6, VAR_8, &VAR_14, &VAR_15);


 if (VAR_11 == -VAR_0) {

  if (VAR_12++ > VAR_2) {




   VAR_11 = -VAR_1;
   goto bail;
  }
  FUNC_11(VAR_6, VAR_12);
  if (VAR_6->trace_enabled)
   FUNC_7(VAR_6);
  VAR_11 = FUNC_2(VAR_6, VAR_4);
  if (VAR_11) {
   FUNC_6(VAR_6->dev,
     "Error %d clocking zeros for E_POLL\n", VAR_11);
   return VAR_11;
  }
  FUNC_1(&VAR_13, VAR_7);
  VAR_11 = FUNC_9(VAR_6, &VAR_13, VAR_8);
  if (VAR_11) {
   FUNC_6(VAR_6->dev, "Error %d sending E_POLL\n", VAR_11);
   return -VAR_1;
  }
  goto retry;
 }
 if (VAR_11)
  return VAR_11;

 switch (VAR_15) {
 case 131:
  if (VAR_8 && VAR_9) {
   if (VAR_8 == 32)
    *(__be32 *)VAR_9 = FUNC_4(VAR_14);
   else if (VAR_8 == 16)
    *(__be16 *)VAR_9 = FUNC_3(VAR_14);
   else
    *(u8 *)VAR_9 = VAR_14;
  }
  break;
 case 130:





  FUNC_5(VAR_6->dev, "Busy, retrying...\n");
  if (VAR_6->trace_enabled)
   FUNC_7(VAR_6);
  VAR_11 = FUNC_2(VAR_6, VAR_3);
  if (VAR_11) {
   FUNC_6(VAR_6->dev,
     "Error %d clocking zeros for D_POLL\n", VAR_11);
   break;
  }
  if (VAR_10++ < VAR_5) {
   FUNC_0(&VAR_13, VAR_7);
   VAR_11 = FUNC_9(VAR_6, &VAR_13, VAR_8);
   if (VAR_11) {
    FUNC_6(VAR_6->dev, "Error %d sending D_POLL\n", VAR_11);
    break;
   }
   goto retry;
  }
  FUNC_5(VAR_6->dev,
   "ERR slave is stuck in busy state, issuing TERM\n");
  FUNC_10(VAR_6, VAR_7);
  VAR_11 = -VAR_1;
  break;

 case 129:
  FUNC_5(VAR_6->dev, "ERRA received\n");
  if (VAR_6->trace_enabled)
   FUNC_7(VAR_6);
  VAR_11 = -VAR_1;
  break;
 case 128:
  FUNC_5(VAR_6->dev, "ERRC received\n");
  if (VAR_6->trace_enabled)
   FUNC_7(VAR_6);
  VAR_11 = -VAR_0;
  break;
 }
 bail:
 if (VAR_10 > 0) {
  FUNC_12(VAR_6, VAR_10);
 }

 return VAR_11;
}
