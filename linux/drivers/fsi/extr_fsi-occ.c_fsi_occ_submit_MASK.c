
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct occ_response {scalar_t__ seq_no; struct occ_response* data; int return_status; int data_length; } ;
struct occ {int occ_lock; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__) ;
 struct occ* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct occ*,scalar_t__,struct occ_response*,int) ;
 int FUNC_8 (struct occ*,int ,void const*,size_t) ;
 int FUNC_9 (struct occ*) ;
 int FUNC_10 (struct occ_response*,int) ;
 int FUNC_11 (unsigned long const) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;

int FUNC_14(struct device *VAR_11, const void *VAR_12, size_t VAR_13,
     void *VAR_14, size_t *VAR_15)
{
 const unsigned long VAR_16 = FUNC_4(VAR_8);
 const unsigned long VAR_17 =
  FUNC_4(VAR_4);
 struct occ *VAR_18 = FUNC_2(VAR_11);
 struct occ_response *VAR_19 = VAR_14;
 u8 VAR_20;
 u16 VAR_21;
 unsigned long VAR_22;
 int VAR_23;

 if (!VAR_18)
  return -VAR_2;

 if (*VAR_15 < 7) {
  FUNC_0(VAR_11, "Bad resplen %zd\n", *VAR_15);
  return -VAR_0;
 }

 FUNC_5(&VAR_18->occ_lock);


 VAR_20 = *(const u8 *)VAR_12;
 VAR_23 = FUNC_8(VAR_18, VAR_6, VAR_12, VAR_13);
 if (VAR_23)
  goto done;

 VAR_23 = FUNC_9(VAR_18);
 if (VAR_23)
  goto done;


 VAR_22 = VAR_10;
 do {
  VAR_23 = FUNC_7(VAR_18, VAR_7, VAR_19, 8);
  if (VAR_23)
   goto done;

  if (VAR_19->return_status == VAR_5 ||
      VAR_19->seq_no != VAR_20) {
   VAR_23 = -VAR_3;

   if (FUNC_13(VAR_10, VAR_22 + VAR_16)) {
    FUNC_1(VAR_18->dev, "resp timeout status=%02x "
     "resp seq_no=%d our seq_no=%d\n",
     VAR_19->return_status, VAR_19->seq_no,
     VAR_20);
    goto done;
   }

   FUNC_12(VAR_9);
   FUNC_11(VAR_17);
  }
 } while (VAR_23);


 VAR_21 = FUNC_3(&VAR_19->data_length);


 if ((VAR_21 + 7) > *VAR_15) {
  VAR_23 = -VAR_1;
  goto done;
 }

 FUNC_0(VAR_11, "resp_status=%02x resp_data_len=%d\n",
  VAR_19->return_status, VAR_21);


 if (VAR_21 > 1) {

  VAR_23 = FUNC_7(VAR_18, VAR_7 + 8,
     &VAR_19->data[3], VAR_21 - 1);
  if (VAR_23)
   goto done;
 }

 *VAR_15 = VAR_21 + 7;
 VAR_23 = FUNC_10(VAR_19, VAR_21);

 done:
 FUNC_6(&VAR_18->occ_lock);

 return VAR_23;
}
