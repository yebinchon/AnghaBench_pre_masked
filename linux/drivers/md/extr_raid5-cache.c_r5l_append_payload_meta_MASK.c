
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {void* flags; void* type; } ;
struct r5l_payload_data_parity {void** checksum; int location; void* size; TYPE_1__ header; } ;
struct r5l_log {struct r5l_io_unit* current_io; } ;
struct r5l_io_unit {int meta_offset; int meta_page; } ;
typedef int sector_t ;
typedef int __le32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct r5l_payload_data_parity* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct r5l_log *VAR_1, u16 VAR_2,
        sector_t VAR_3,
        u32 VAR_4, u32 VAR_5,
        bool VAR_6)
{
 struct r5l_io_unit *VAR_7 = VAR_1->current_io;
 struct r5l_payload_data_parity *VAR_8;

 VAR_8 = FUNC_3(VAR_7->meta_page) + VAR_7->meta_offset;
 VAR_8->header.type = FUNC_0(VAR_2);
 VAR_8->header.flags = FUNC_0(0);
 VAR_8->size = FUNC_1((1 + !!VAR_6) <<
        (VAR_0 - 9));
 VAR_8->location = FUNC_2(VAR_3);
 VAR_8->checksum[0] = FUNC_1(VAR_4);
 if (VAR_6)
  VAR_8->checksum[1] = FUNC_1(VAR_5);

 VAR_7->meta_offset += sizeof(struct r5l_payload_data_parity) +
  sizeof(__le32) * (1 + !!VAR_6);
}
