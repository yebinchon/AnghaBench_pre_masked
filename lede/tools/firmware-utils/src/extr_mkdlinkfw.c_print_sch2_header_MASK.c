
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch2_header {int magic; int cp_type; int version; int ram_addr; int image_len; int image_crc32; int start_addr; int rootfs_addr; int rootfs_len; int rootfs_crc32; int header_crc32; int header_length; int cmd_line_length; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

void FUNC_1(struct sch2_header *VAR_0)
{
 FUNC_0("\tmagic: 0x%04X\n"
        "\tcp_type: 0x%02X\n"
        "\tversion: 0x%02X\n"
        "\tram_addr: 0x%08X\n"
        "\timage_len: 0x%08X\n"
        "\timage_crc32: 0x%08X\n"
        "\tstart_addr: 0x%08X\n"
        "\trootfs_addr: 0x%08X\n"
        "\trootfs_len: 0x%08X\n"
        "\trootfs_crc32: 0x%08X\n"
        "\theader_crc32: 0x%08X\n"
        "\theader_length: 0x%04X\n"
        "\tcmd_line_length: 0x%04X\n",
        VAR_0->magic,
        VAR_0->cp_type,
        VAR_0->version,
        VAR_0->ram_addr,
        VAR_0->image_len,
        VAR_0->image_crc32,
        VAR_0->start_addr,
        VAR_0->rootfs_addr,
        VAR_0->rootfs_len,
        VAR_0->rootfs_crc32,
        VAR_0->header_crc32,
        VAR_0->header_length, VAR_0->cmd_line_length);
}
