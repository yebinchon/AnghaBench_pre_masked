
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_header {int dummy; } ;


 int FUNC_0 (struct ib_header*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct ib_header *VAR_0, u64 VAR_1)
{
 return FUNC_0(VAR_0) | ((!!(FUNC_1(VAR_1))) << 4);
}
