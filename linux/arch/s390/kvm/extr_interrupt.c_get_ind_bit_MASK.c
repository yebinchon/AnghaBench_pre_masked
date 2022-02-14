
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned long FUNC_0(__u64 VAR_2, unsigned long VAR_3, bool VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = VAR_3 + (VAR_2 % VAR_1) * 8;

 return VAR_4 ? (VAR_5 ^ (VAR_0 - 1)) : VAR_5;
}
