
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eh_frame_hdr_table_entry {scalar_t__ start; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct eh_frame_hdr_table_entry *VAR_2 = VAR_0;
 const struct eh_frame_hdr_table_entry *VAR_3 = VAR_1;

 return (VAR_2->start > VAR_3->start) - (VAR_2->start < VAR_3->start);
}
