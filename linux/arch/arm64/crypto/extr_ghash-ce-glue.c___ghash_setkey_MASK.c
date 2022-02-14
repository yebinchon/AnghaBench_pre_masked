
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ghash_key {int h4; int k; int h3; int h2; int h; } ;
typedef int be128 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int const*,int ) ;

__attribute__((used)) static int FUNC_3(struct ghash_key *VAR_1,
     const u8 *VAR_2, unsigned int VAR_3)
{
 be128 VAR_4;


 FUNC_2(&VAR_1->k, VAR_2, VAR_0);

 FUNC_1(VAR_1->h, &VAR_1->k);

 VAR_4 = VAR_1->k;
 FUNC_0(&VAR_4, &VAR_1->k);
 FUNC_1(VAR_1->h2, &VAR_4);

 FUNC_0(&VAR_4, &VAR_1->k);
 FUNC_1(VAR_1->h3, &VAR_4);

 FUNC_0(&VAR_4, &VAR_1->k);
 FUNC_1(VAR_1->h4, &VAR_4);

 return 0;
}
