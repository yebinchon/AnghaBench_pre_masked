
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_info64 {scalar_t__ lo_encrypt_type; int lo_encrypt_key; int lo_file_name; int lo_crypt_name; int * lo_init; int lo_flags; int lo_encrypt_key_size; scalar_t__ lo_sizelimit; int lo_offset; int lo_rdevice; int lo_inode; int lo_device; int lo_number; } ;
struct loop_info {scalar_t__ lo_encrypt_type; int lo_encrypt_key; int lo_name; int * lo_init; int lo_flags; int lo_encrypt_key_size; int lo_offset; int lo_rdevice; int lo_inode; int lo_device; int lo_number; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct loop_info64*,int ,int) ;

__attribute__((used)) static void
FUNC_2(const struct loop_info *VAR_3, struct loop_info64 *VAR_4)
{
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->lo_number = VAR_3->lo_number;
 VAR_4->lo_device = VAR_3->lo_device;
 VAR_4->lo_inode = VAR_3->lo_inode;
 VAR_4->lo_rdevice = VAR_3->lo_rdevice;
 VAR_4->lo_offset = VAR_3->lo_offset;
 VAR_4->lo_sizelimit = 0;
 VAR_4->lo_encrypt_type = VAR_3->lo_encrypt_type;
 VAR_4->lo_encrypt_key_size = VAR_3->lo_encrypt_key_size;
 VAR_4->lo_flags = VAR_3->lo_flags;
 VAR_4->lo_init[0] = VAR_3->lo_init[0];
 VAR_4->lo_init[1] = VAR_3->lo_init[1];
 if (VAR_3->lo_encrypt_type == VAR_0)
  FUNC_0(VAR_4->lo_crypt_name, VAR_3->lo_name, VAR_2);
 else
  FUNC_0(VAR_4->lo_file_name, VAR_3->lo_name, VAR_2);
 FUNC_0(VAR_4->lo_encrypt_key, VAR_3->lo_encrypt_key, VAR_1);
}
