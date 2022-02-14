
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_data_desc {int size; int compressed_size; int crc32; int magic; } ;
struct zip64_data_desc {int size; int compressed_size; int crc32; int magic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int,struct zip_data_desc*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3,
    unsigned long VAR_4,
    unsigned long VAR_5)
{
 if (VAR_3 >= 0xffffffff || VAR_4 >= 0xffffffff) {
  struct zip64_data_desc VAR_6;
  FUNC_0(VAR_6.magic, 0x08074b50);
  FUNC_0(VAR_6.crc32, VAR_5);
  FUNC_1(VAR_6.compressed_size, VAR_4);
  FUNC_1(VAR_6.size, VAR_3);
  FUNC_2(1, &VAR_6, VAR_0);
  VAR_2 += VAR_0;
 } else {
  struct zip_data_desc VAR_7;
  FUNC_0(VAR_7.magic, 0x08074b50);
  FUNC_0(VAR_7.crc32, VAR_5);
  FUNC_0(VAR_7.compressed_size, VAR_4);
  FUNC_0(VAR_7.size, VAR_3);
  FUNC_2(1, &VAR_7, VAR_1);
  VAR_2 += VAR_1;
 }
}
