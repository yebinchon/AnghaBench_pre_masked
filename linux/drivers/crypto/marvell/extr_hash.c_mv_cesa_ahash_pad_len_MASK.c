
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_ahash_req {unsigned int len; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mv_cesa_ahash_req *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_2 = VAR_1->len & VAR_0;
 VAR_3 = (VAR_2 < 56) ? (56 - VAR_2) : (64 + 56 - VAR_2);

 return VAR_3;
}
