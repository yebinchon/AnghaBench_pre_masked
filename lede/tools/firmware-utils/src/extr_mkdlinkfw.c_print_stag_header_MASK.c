
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stag_header {int cmark; int id; int magic; int time_stamp; int image_length; int image_checksum; int tag_checksum; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int) ;

void FUNC_1(struct stag_header *VAR_0)
{
 FUNC_0("\tcmark: 0x%02X\n"
        "\tid: 0x%02X\n"
        "\tmagic: 0x%04X\n"
        "\ttime_stamp: 0x%08X\n"
        "\timage_length: 0x%04X\n"
        "\timage_checksum: 0x%04X\n"
        "\ttag_checksum: 0x%04X\n",
        VAR_0->cmark,
        VAR_0->id,
        VAR_0->magic,
        VAR_0->time_stamp,
        VAR_0->image_length,
        VAR_0->image_checksum, VAR_0->tag_checksum);
}
