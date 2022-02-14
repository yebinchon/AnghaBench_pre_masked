
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct r5l_recovery_ctx {int dummy; } ;
struct r5l_log {int uuid_checksum; } ;
struct page {int dummy; } ;
typedef int sector_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct r5l_log*,struct r5l_recovery_ctx*,struct page*,int ) ;

__attribute__((used)) static int
FUNC_5(struct r5l_log *VAR_2,
      struct r5l_recovery_ctx *VAR_3,
      struct page *VAR_4,
      sector_t VAR_5, __le32 VAR_6)
{
 void *VAR_7;
 u32 VAR_8;

 FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_7 = FUNC_1(VAR_4);
 VAR_8 = FUNC_0(VAR_2->uuid_checksum, VAR_7, VAR_1);
 FUNC_2(VAR_7);
 return (FUNC_3(VAR_6) == VAR_8) ? 0 : -VAR_0;
}
