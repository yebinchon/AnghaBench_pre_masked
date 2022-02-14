
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_local_header {int size; int compressed_size; int crc32; } ;


 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct zip_local_header *VAR_0,
         unsigned long VAR_1,
         unsigned long VAR_2,
         unsigned long VAR_3)
{
 FUNC_0(VAR_0->crc32, VAR_3);
 FUNC_0(VAR_0->compressed_size, VAR_2);
 FUNC_0(VAR_0->size, VAR_1);
}
