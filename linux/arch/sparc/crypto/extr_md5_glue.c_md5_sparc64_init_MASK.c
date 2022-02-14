
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct md5_state {scalar_t__ byte_count; void** hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 struct md5_state* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_4)
{
 struct md5_state *VAR_5 = FUNC_1(VAR_4);

 VAR_5->hash[0] = FUNC_0(VAR_0);
 VAR_5->hash[1] = FUNC_0(VAR_1);
 VAR_5->hash[2] = FUNC_0(VAR_2);
 VAR_5->hash[3] = FUNC_0(VAR_3);
 VAR_5->byte_count = 0;

 return 0;
}
