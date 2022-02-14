
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static u64 *FUNC_2(u64 *VAR_0, unsigned long *VAR_1,
    unsigned long *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 u64 *VAR_6;

 VAR_4 = FUNC_1(*VAR_0);
 VAR_5 = FUNC_0(VAR_4);
 VAR_3 = ~((VAR_5 << 3) - 1);
 VAR_6 = (u64 *)(((unsigned long)VAR_0) & VAR_3);

 if (VAR_1)
  *VAR_1 = VAR_4;

 if (VAR_2)
  *VAR_2 = VAR_5;

 return VAR_6;
}
