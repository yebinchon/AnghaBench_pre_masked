
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofs_delta_entry {scalar_t__ offset; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct ofs_delta_entry *VAR_2 = VAR_0;
 const struct ofs_delta_entry *VAR_3 = VAR_1;

 return VAR_2->offset < VAR_3->offset ? -1 :
        VAR_2->offset > VAR_3->offset ? 1 :
        0;
}
