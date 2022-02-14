
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_params {unsigned int desc_size; int * desc_ptr; } ;
struct hid_device {unsigned int dev_rsize; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hid_device*,char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,unsigned int,int ) ;
 int FUNC_3 (struct uclogic_params*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct uclogic_params *VAR_3,
          struct hid_device *VAR_4,
          unsigned int VAR_5,
          __u8 *VAR_6,
          unsigned int VAR_7)
{
 __u8 *VAR_8 = ((void*)0);
 unsigned int VAR_9;
 int VAR_10;


 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) ||
     (VAR_6 == ((void*)0) && VAR_7 != 0)) {
  VAR_10 = -VAR_0;
  goto cleanup;
 }


 if (VAR_4->dev_rsize == VAR_5) {
  FUNC_0(VAR_4,
   "device report descriptor matches the expected size, replacing\n");
  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_2);
  if (VAR_8 == ((void*)0)) {
   VAR_10 = -VAR_1;
   goto cleanup;
  }
  VAR_9 = VAR_7;
 } else {
  FUNC_0(VAR_4,
   "device report descriptor doesn't match the expected size (%u != %u), preserving\n",
   VAR_4->dev_rsize, VAR_5);
  VAR_8 = ((void*)0);
  VAR_9 = 0;
 }


 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->desc_ptr = VAR_8;
 VAR_8 = ((void*)0);
 VAR_3->desc_size = VAR_9;

 VAR_10 = 0;
cleanup:
 FUNC_1(VAR_8);
 return VAR_10;
}
