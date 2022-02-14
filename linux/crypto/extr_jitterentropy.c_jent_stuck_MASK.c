
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {void* last_delta; void* last_delta2; } ;
typedef void* __u64 ;
typedef void* __s64 ;



__attribute__((used)) static int FUNC_0(struct rand_data *VAR_0, __u64 VAR_1)
{
 __s64 VAR_2 = VAR_0->last_delta - VAR_1;
 __s64 VAR_3 = VAR_2 - VAR_0->last_delta2;

 VAR_0->last_delta = VAR_1;
 VAR_0->last_delta2 = VAR_2;

 if (!VAR_1 || !VAR_2 || !VAR_3)
  return 1;

 return 0;
}
