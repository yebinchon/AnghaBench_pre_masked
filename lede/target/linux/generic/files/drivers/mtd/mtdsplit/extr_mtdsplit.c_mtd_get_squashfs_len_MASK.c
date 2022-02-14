
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_super_block {int bytes_used; int s_magic; } ;
struct mtd_info {size_t size; int name; } ;
typedef int sb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct mtd_info*,size_t,int,size_t*,void*) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct mtd_info *VAR_4,
    size_t VAR_5,
    size_t *VAR_6)
{
 struct squashfs_super_block VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4, VAR_5, sizeof(VAR_7), &VAR_8, (void *)&VAR_7);
 if (VAR_9 || (VAR_8 != sizeof(VAR_7))) {
  FUNC_3("error occured while reading from \"%s\"\n",
    VAR_4->name);
  return -VAR_1;
 }

 if (FUNC_0(VAR_7.s_magic) != VAR_3) {
  FUNC_3("no squashfs found in \"%s\"\n", VAR_4->name);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_7.bytes_used);
 if (VAR_8 <= 0) {
  FUNC_3("squashfs is empty in \"%s\"\n", VAR_4->name);
  return -VAR_2;
 }

 if (VAR_5 + VAR_8 > VAR_4->size) {
  FUNC_3("squashfs has invalid size in \"%s\"\n",
    VAR_4->name);
  return -VAR_0;
 }

 *VAR_6 = VAR_8;
 return 0;
}
