
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct protection_domain {scalar_t__ mode; int glx; int gcr3_tbl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct protection_domain*,int) ;
 scalar_t__* FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct protection_domain *VAR_2, int VAR_3)
{
 u64 *VAR_4;

 if (VAR_2->mode != VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2->gcr3_tbl, VAR_2->glx, VAR_3, 0);
 if (VAR_4 == ((void*)0))
  return 0;

 *VAR_4 = 0;

 return FUNC_0(VAR_2, VAR_3);
}
