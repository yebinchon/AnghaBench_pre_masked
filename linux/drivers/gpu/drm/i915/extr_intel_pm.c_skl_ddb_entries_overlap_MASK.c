
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_ddb_entry {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static inline bool FUNC_0(const struct skl_ddb_entry *VAR_0,
        const struct skl_ddb_entry *VAR_1)
{
 return VAR_0->start < VAR_1->end && VAR_1->start < VAR_0->end;
}
