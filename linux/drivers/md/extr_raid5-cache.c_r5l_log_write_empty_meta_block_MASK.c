
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct r5l_meta_block {int checksum; } ;
struct r5l_log {int rdev; int uuid_checksum; } ;
struct page {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct r5l_meta_block*,int ) ;
 struct r5l_meta_block* FUNC_4 (struct page*) ;
 int FUNC_5 (struct r5l_log*,struct page*,int ,int ) ;
 int FUNC_6 (int ,int ,int ,struct page*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct r5l_log *VAR_7, sector_t VAR_8,
       u64 VAR_9)
{
 struct page *VAR_10;
 struct r5l_meta_block *VAR_11;

 VAR_10 = FUNC_1(VAR_2);
 if (!VAR_10)
  return -VAR_1;
 FUNC_5(VAR_7, VAR_10, VAR_8, VAR_9);
 VAR_11 = FUNC_4(VAR_10);
 VAR_11->checksum = FUNC_2(FUNC_3(VAR_7->uuid_checksum,
          VAR_11, VAR_3));
 if (!FUNC_6(VAR_7->rdev, VAR_8, VAR_3, VAR_10, VAR_5,
     VAR_6 | VAR_4, 0)) {
  FUNC_0(VAR_10);
  return -VAR_0;
 }
 FUNC_0(VAR_10);
 return 0;
}
