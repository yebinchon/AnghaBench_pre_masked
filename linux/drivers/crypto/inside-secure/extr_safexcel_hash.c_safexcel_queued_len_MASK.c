
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct safexcel_ahash_req {scalar_t__ processed; scalar_t__ len; } ;



__attribute__((used)) static inline u64 FUNC_0(struct safexcel_ahash_req *VAR_0)
{
 return VAR_0->len - VAR_0->processed;
}
