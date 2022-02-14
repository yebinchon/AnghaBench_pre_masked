
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2if {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct ps2if *VAR_5,
        unsigned int VAR_6)
{
 unsigned int VAR_7;

 FUNC_2(VAR_1 | VAR_6, VAR_5->base + VAR_0);

 FUNC_1(10);

 VAR_7 = FUNC_0(VAR_5->base + VAR_2);
 return VAR_7 & (VAR_3 | VAR_4);
}
