
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct common_firmware_header {int crc32; int ucode_array_offset_bytes; int ucode_size_bytes; int ucode_version; int ip_version_minor; int ip_version_major; int header_version_minor; int header_version_major; int header_size_bytes; int size_bytes; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct common_firmware_header *VAR_0)
{
 FUNC_0("size_bytes: %u\n", FUNC_2(VAR_0->size_bytes));
 FUNC_0("header_size_bytes: %u\n", FUNC_2(VAR_0->header_size_bytes));
 FUNC_0("header_version_major: %u\n", FUNC_1(VAR_0->header_version_major));
 FUNC_0("header_version_minor: %u\n", FUNC_1(VAR_0->header_version_minor));
 FUNC_0("ip_version_major: %u\n", FUNC_1(VAR_0->ip_version_major));
 FUNC_0("ip_version_minor: %u\n", FUNC_1(VAR_0->ip_version_minor));
 FUNC_0("ucode_version: 0x%08x\n", FUNC_2(VAR_0->ucode_version));
 FUNC_0("ucode_size_bytes: %u\n", FUNC_2(VAR_0->ucode_size_bytes));
 FUNC_0("ucode_array_offset_bytes: %u\n",
    FUNC_2(VAR_0->ucode_array_offset_bytes));
 FUNC_0("crc32: 0x%08x\n", FUNC_2(VAR_0->crc32));
}
