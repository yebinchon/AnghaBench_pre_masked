
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct iotlb_entry {int pgsz; scalar_t__ mixed; int elsz; int endian; int valid; void* pa; void* da; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct iotlb_entry*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct iotlb_entry *VAR_3, u32 VAR_4, u32 VAR_5, int VAR_6)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->da = VAR_4;
 VAR_3->pa = VAR_5;
 VAR_3->valid = VAR_0;
 VAR_3->pgsz = VAR_6;
 VAR_3->endian = VAR_2;
 VAR_3->elsz = VAR_1;
 VAR_3->mixed = 0;

 return FUNC_0(VAR_3->pgsz);
}
