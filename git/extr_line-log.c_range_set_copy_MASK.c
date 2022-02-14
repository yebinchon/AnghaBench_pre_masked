
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range_set {int nr; int ranges; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct range_set*,int ) ;

__attribute__((used)) static void FUNC_2(struct range_set *VAR_0, struct range_set *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->nr);
 FUNC_0(VAR_0->ranges, VAR_1->ranges, VAR_1->nr);
 VAR_0->nr = VAR_1->nr;
}
