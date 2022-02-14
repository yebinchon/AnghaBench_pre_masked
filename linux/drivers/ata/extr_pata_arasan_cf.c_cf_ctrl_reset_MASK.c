
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arasan_cf_dev {scalar_t__ vbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct arasan_cf_dev *VAR_2)
{
 FUNC_1(FUNC_0(VAR_2->vbase + VAR_1) & ~VAR_0,
   VAR_2->vbase + VAR_1);
 FUNC_1(FUNC_0(VAR_2->vbase + VAR_1) | VAR_0,
   VAR_2->vbase + VAR_1);
}
