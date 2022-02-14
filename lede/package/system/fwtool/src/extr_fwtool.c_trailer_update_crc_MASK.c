
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwimage_trailer {int crc32; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct fwimage_trailer *VAR_1, void *VAR_2, int VAR_3)
{
 VAR_1->crc32 = FUNC_1(FUNC_2(FUNC_0(VAR_1->crc32), VAR_2, VAR_3, VAR_0));
}
