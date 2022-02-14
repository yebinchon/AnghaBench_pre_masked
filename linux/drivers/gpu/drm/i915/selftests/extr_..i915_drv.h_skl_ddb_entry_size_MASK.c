
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct skl_ddb_entry {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static inline u16 FUNC_0(const struct skl_ddb_entry *VAR_0)
{
 return VAR_0->end - VAR_0->start;
}
