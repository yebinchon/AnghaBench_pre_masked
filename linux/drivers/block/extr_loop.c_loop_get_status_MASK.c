
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int dummy; } ;
struct loop_info64 {void* lo_rdevice; int lo_inode; void* lo_device; int lo_encrypt_key; scalar_t__ lo_encrypt_key_size; int lo_encrypt_type; int lo_crypt_name; int lo_file_name; int lo_flags; int lo_sizelimit; int lo_offset; int lo_number; } ;
struct loop_device {scalar_t__ lo_state; TYPE_2__* lo_backing_file; scalar_t__ lo_encrypt_key_size; int lo_encrypt_key; TYPE_1__* lo_encryption; int lo_crypt_name; int lo_file_name; int lo_flags; int lo_sizelimit; int lo_offset; int lo_number; } ;
struct kstat {int rdev; int ino; int dev; } ;
struct TYPE_4__ {struct path f_path; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct loop_info64*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct path*) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (struct path*,struct kstat*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct loop_device *VAR_7, struct loop_info64 *VAR_8)
{
 struct path VAR_9;
 struct kstat VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(&VAR_6);
 if (VAR_11)
  return VAR_11;
 if (VAR_7->lo_state != VAR_4) {
  FUNC_5(&VAR_6);
  return -VAR_2;
 }

 FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->lo_number = VAR_7->lo_number;
 VAR_8->lo_offset = VAR_7->lo_offset;
 VAR_8->lo_sizelimit = VAR_7->lo_sizelimit;
 VAR_8->lo_flags = VAR_7->lo_flags;
 FUNC_2(VAR_8->lo_file_name, VAR_7->lo_file_name, VAR_3);
 FUNC_2(VAR_8->lo_crypt_name, VAR_7->lo_crypt_name, VAR_3);
 VAR_8->lo_encrypt_type =
  VAR_7->lo_encryption ? VAR_7->lo_encryption->number : 0;
 if (VAR_7->lo_encrypt_key_size && FUNC_0(VAR_1)) {
  VAR_8->lo_encrypt_key_size = VAR_7->lo_encrypt_key_size;
  FUNC_2(VAR_8->lo_encrypt_key, VAR_7->lo_encrypt_key,
         VAR_7->lo_encrypt_key_size);
 }


 VAR_9 = VAR_7->lo_backing_file->f_path;
 FUNC_6(&VAR_9);
 FUNC_5(&VAR_6);
 VAR_11 = FUNC_8(&VAR_9, &VAR_10, VAR_5, VAR_0);
 if (!VAR_11) {
  VAR_8->lo_device = FUNC_1(VAR_10.dev);
  VAR_8->lo_inode = VAR_10.ino;
  VAR_8->lo_rdevice = FUNC_1(VAR_10.rdev);
 }
 FUNC_7(&VAR_9);
 return VAR_11;
}
