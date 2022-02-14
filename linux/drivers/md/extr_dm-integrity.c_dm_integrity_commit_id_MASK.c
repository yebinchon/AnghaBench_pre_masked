
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {int* commit_ids; } ;
typedef int commit_id_t ;
typedef int __u64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static commit_id_t FUNC_1(struct dm_integrity_c *VAR_0, unsigned VAR_1,
       unsigned VAR_2, unsigned char VAR_3)
{




 return VAR_0->commit_ids[VAR_3] ^ FUNC_0(((__u64)VAR_1 << 32) ^ VAR_2);
}
