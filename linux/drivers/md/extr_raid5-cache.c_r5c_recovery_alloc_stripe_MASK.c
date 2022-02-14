
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int dummy; } ;
struct r5conf {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct stripe_head*) ;
 struct stripe_head* FUNC_1 (struct r5conf*,int ,int ,int,int ) ;

__attribute__((used)) static struct stripe_head *
FUNC_2(
  struct r5conf *VAR_0,
  sector_t VAR_1,
  int VAR_2)
{
 struct stripe_head *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, 0, VAR_2, 0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_3);

 return VAR_3;
}
