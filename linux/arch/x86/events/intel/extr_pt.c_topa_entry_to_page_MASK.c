
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topa_page {int dummy; } ;
struct topa_entry {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline struct topa_page *FUNC_0(struct topa_entry *VAR_1)
{
 return (struct topa_page *)((unsigned long)VAR_1 & VAR_0);
}
