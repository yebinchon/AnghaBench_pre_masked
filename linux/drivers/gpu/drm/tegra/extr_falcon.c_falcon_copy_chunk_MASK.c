
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct falcon {int dummy; } ;
typedef unsigned long phys_addr_t ;
typedef enum falcon_memory { ____Placeholder_falcon_memory } falcon_memory ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct falcon*) ;
 int FUNC_1 (struct falcon*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct falcon *VAR_6,
        phys_addr_t VAR_7,
        unsigned long VAR_8,
        enum falcon_memory VAR_9)
{
 u32 VAR_10 = VAR_2;

 if (VAR_9 == VAR_5)
  VAR_10 |= VAR_1;

 FUNC_1(VAR_6, VAR_8, VAR_4);
 FUNC_1(VAR_6, VAR_7, VAR_3);
 FUNC_1(VAR_6, VAR_10, VAR_0);

 return FUNC_0(VAR_6);
}
