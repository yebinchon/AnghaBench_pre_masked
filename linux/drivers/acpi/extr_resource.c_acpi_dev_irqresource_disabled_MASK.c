
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct resource {int flags; void* end; void* start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct resource *VAR_3, u32 VAR_4)
{
 VAR_3->start = VAR_4;
 VAR_3->end = VAR_4;
 VAR_3->flags = VAR_1 | VAR_0 | VAR_2;
}
