
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_pd {int dummy; } ;
struct ib_mr {int dummy; } ;


 struct ib_mr* FUNC_0 (struct ib_pd*,int ,int ,int,int *) ;

__attribute__((used)) static struct ib_mr *FUNC_1(struct ib_pd *VAR_0, int VAR_1)
{
 u64 VAR_2 = 0;

 return FUNC_0(VAR_0, 0, 0, VAR_1, &VAR_2);
}
