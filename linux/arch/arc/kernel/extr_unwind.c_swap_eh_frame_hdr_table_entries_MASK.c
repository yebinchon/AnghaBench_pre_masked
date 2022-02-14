
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eh_frame_hdr_table_entry {unsigned long start; unsigned long fde; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, int VAR_2)
{
 struct eh_frame_hdr_table_entry *VAR_3 = VAR_0;
 struct eh_frame_hdr_table_entry *VAR_4 = VAR_1;
 unsigned long VAR_5;

 VAR_5 = VAR_3->start;
 VAR_3->start = VAR_4->start;
 VAR_4->start = VAR_5;
 VAR_5 = VAR_3->fde;
 VAR_3->fde = VAR_4->fde;
 VAR_4->fde = VAR_5;
}
