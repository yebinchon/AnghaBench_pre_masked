
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_params_pen {int* desc_ptr; int fragmented_hires; int inrange; int id; int desc_size; } ;
struct hid_device {int dummy; } ;
typedef int s32 ;
typedef int __u8 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct hid_device*,char*,...) ;
 int FUNC_3 (struct hid_device*,char*,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct uclogic_params_pen*,int ,int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int**,struct hid_device*,int,int const) ;
 int VAR_11 ;
 int VAR_12 ;
 int* FUNC_8 (int ,int ,int*,int ) ;

__attribute__((used)) static int FUNC_9(struct uclogic_params_pen *VAR_13,
     bool *VAR_14,
     struct hid_device *VAR_15)
{
 int VAR_16;
 bool VAR_17 = 0;

 __u8 *VAR_18 = ((void*)0);

 const int VAR_19 = 18;
 s32 VAR_20;

 s32 VAR_21[VAR_4];
 __u8 *VAR_22 = ((void*)0);


 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0) || VAR_15 == ((void*)0)) {
  VAR_16 = -VAR_0;
  goto cleanup;
 }







 VAR_16 = FUNC_7(&VAR_18, VAR_15, 200, VAR_19);
 if (VAR_16 == -VAR_2) {
  FUNC_2(VAR_15,
   "string descriptor with pen parameters not found, assuming not compatible\n");
  goto finish;
 } else if (VAR_16 < 0) {
  FUNC_3(VAR_15, "failed retrieving pen parameters: %d\n", VAR_16);
  goto cleanup;
 } else if (VAR_16 != VAR_19) {
  FUNC_2(VAR_15,
   "string descriptor with pen parameters has invalid length (got %d, expected %d), assuming not compatible\n",
   VAR_16, VAR_19);
  goto finish;
 } else {
  size_t VAR_23;





  for (VAR_23 = 2;
       VAR_23 < VAR_19 &&
   (VAR_18[VAR_23] >= 0x20 && VAR_18[VAR_23] < 0x7f && VAR_18[VAR_23 + 1] == 0);
       VAR_23 += 2);
  if (VAR_23 >= VAR_19) {
   FUNC_2(VAR_15,
    "string descriptor with pen parameters seems to contain only text, assuming not compatible\n");
   goto finish;
  }
 }




 VAR_21[VAR_6] =
  FUNC_6(VAR_18 + 2);
 VAR_21[VAR_8] =
  FUNC_6(VAR_18 + 5);
 VAR_21[VAR_5] =
  FUNC_1(VAR_18 + 8);
 VAR_20 = FUNC_1(VAR_18 + 10);
 if (VAR_20 == 0) {
  VAR_21[VAR_7] = 0;
  VAR_21[VAR_9] = 0;
 } else {
  VAR_21[VAR_7] =
   VAR_21[VAR_6] * 1000 /
   VAR_20;
  VAR_21[VAR_9] =
   VAR_21[VAR_8] * 1000 /
   VAR_20;
 }
 FUNC_4(VAR_18);
 VAR_18 = ((void*)0);




 VAR_22 = FUNC_8(
    VAR_11,
    VAR_12,
    VAR_21, FUNC_0(VAR_21));
 if (VAR_22 == ((void*)0)) {
  VAR_16 = -VAR_1;
  goto cleanup;
 }




 FUNC_5(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->desc_ptr = VAR_22;
 VAR_22 = ((void*)0);
 VAR_13->desc_size = VAR_12;
 VAR_13->id = VAR_10;
 VAR_13->inrange = VAR_3;
 VAR_13->fragmented_hires = 1;
 VAR_17 = 1;
finish:
 *VAR_14 = VAR_17;
 VAR_16 = 0;
cleanup:
 FUNC_4(VAR_22);
 FUNC_4(VAR_18);
 return VAR_16;
}
