
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int root; } ;
struct writeset {TYPE_1__ md; int bits; } ;
struct dm_disk_bitset {int dummy; } ;


 int FUNC_0 (struct dm_disk_bitset*,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dm_disk_bitset *VAR_0,
     struct writeset *VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 if (!FUNC_1(VAR_2, VAR_1->bits)) {
  VAR_3 = FUNC_0(VAR_0, VAR_1->md.root, VAR_2, &VAR_1->md.root);
  if (VAR_3) {

   return VAR_3;
  }

  return 0;
 }

 return 1;
}
