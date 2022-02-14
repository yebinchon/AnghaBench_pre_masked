
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(uint64_t VAR_0,
 uint64_t VAR_1, int VAR_2, struct resource *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_0, FUNC_1(VAR_2));
 VAR_5 = FUNC_2(VAR_0, FUNC_0(VAR_2));

 VAR_3->start = VAR_1 + ((unsigned long)VAR_4 << 16);
 VAR_3->end = VAR_3->start + (VAR_5 + 1) * 64 * 1024;
}
