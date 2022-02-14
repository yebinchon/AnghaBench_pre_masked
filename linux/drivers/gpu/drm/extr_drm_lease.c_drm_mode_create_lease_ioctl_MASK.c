
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int lessee_id; struct drm_file* private_data; scalar_t__ lessor; } ;
typedef struct file uint32_t ;
struct idr {int dummy; } ;
struct drm_mode_create_lease {size_t object_count; int flags; int fd; int lessee_id; int object_ids; } ;
struct drm_master {int lessee_id; struct drm_file* private_data; scalar_t__ lessor; } ;
struct drm_file {int is_master; int authenticated; struct file* master; struct file* filp; } ;
struct drm_device {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (struct drm_device*,int ) ;
 struct file* FUNC_5 (struct file*,struct idr*) ;
 int FUNC_6 (struct file**) ;
 int FUNC_7 (int,struct file*) ;
 struct file* FUNC_8 (struct file*) ;
 int FUNC_9 (struct drm_device*,struct drm_file*,struct idr*,size_t,struct file*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct idr*) ;
 int FUNC_12 (struct idr*) ;
 int FUNC_13 (struct file*) ;
 struct file* FUNC_14 (int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;

int FUNC_17(struct drm_device *VAR_5,
    void *VAR_6, struct drm_file *VAR_7)
{
 struct drm_mode_create_lease *VAR_8 = VAR_6;
 size_t VAR_9;
 int VAR_10 = 0;
 struct idr VAR_11;
 struct drm_master *VAR_12 = VAR_7->master;
 struct drm_master *VAR_13 = ((void*)0);
 struct file *VAR_14 = ((void*)0);
 struct file *VAR_15 = VAR_7->filp;
 struct drm_file *VAR_16;
 int VAR_17 = -1;
 uint32_t *VAR_18;


 if (!FUNC_4(VAR_5, VAR_0))
  return -VAR_2;


 if (VAR_12->lessor) {
  FUNC_0("recursive leasing not allowed\n");
  return -VAR_1;
 }


 if (VAR_8->object_count == 0) {
  FUNC_0("no objects in lease\n");
  return -VAR_1;
 }

 if (VAR_8->flags && (VAR_8->flags & ~(VAR_3 | VAR_4))) {
  FUNC_0("invalid flags\n");
  return -VAR_1;
 }

 VAR_9 = VAR_8->object_count;

 VAR_18 = FUNC_14(FUNC_16(VAR_8->object_ids),
   FUNC_3(VAR_9, sizeof(__u32)));
 if (FUNC_1(VAR_18))
  return FUNC_2(VAR_18);

 FUNC_12(&VAR_11);


 VAR_10 = FUNC_9(VAR_5, VAR_7, &VAR_11,
         VAR_9, VAR_18);
 FUNC_13(VAR_18);
 if (VAR_10) {
  FUNC_0("lease object lookup failed: %i\n", VAR_10);
  FUNC_11(&VAR_11);
  return VAR_10;
 }


 VAR_17 = FUNC_10(VAR_8->flags & (VAR_3 | VAR_4));
 if (VAR_17 < 0) {
  FUNC_11(&VAR_11);
  return VAR_17;
 }

 FUNC_0("Creating lease\n");
 VAR_13 = FUNC_5(VAR_12, &VAR_11);

 if (FUNC_1(VAR_13)) {
  VAR_10 = FUNC_2(VAR_13);
  goto out_leases;
 }


 FUNC_0("Allocating lease file\n");
 VAR_14 = FUNC_8(VAR_15);
 if (FUNC_1(VAR_14)) {
  VAR_10 = FUNC_2(VAR_14);
  goto out_lessee;
 }

 VAR_16 = VAR_14->private_data;

 FUNC_6(&VAR_16->master);
 VAR_16->master = VAR_13;
 VAR_16->is_master = 1;
 VAR_16->authenticated = 1;


 FUNC_0("Returning fd %d id %d\n", VAR_17, VAR_13->lessee_id);
 VAR_8->fd = VAR_17;
 VAR_8->lessee_id = VAR_13->lessee_id;


 FUNC_7(VAR_17, VAR_14);

 FUNC_0("drm_mode_create_lease_ioctl succeeded\n");
 return 0;

out_lessee:
 FUNC_6(&VAR_13);

out_leases:
 FUNC_15(VAR_17);
 FUNC_11(&VAR_11);

 FUNC_0("drm_mode_create_lease_ioctl failed: %d\n", VAR_10);
 return VAR_10;
}
