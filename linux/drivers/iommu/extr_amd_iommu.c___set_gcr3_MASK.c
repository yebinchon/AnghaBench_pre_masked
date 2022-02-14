
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct protection_domain {scalar_t__ mode; int glx; int gcr3_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct protection_domain*,int) ;
 unsigned long* FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct protection_domain *VAR_5, int VAR_6,
        unsigned long VAR_7)
{
 u64 *VAR_8;

 if (VAR_5->mode != VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_5->gcr3_tbl, VAR_5->glx, VAR_6, 1);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 *VAR_8 = (VAR_7 & VAR_3) | VAR_2;

 return FUNC_0(VAR_5, VAR_6);
}
