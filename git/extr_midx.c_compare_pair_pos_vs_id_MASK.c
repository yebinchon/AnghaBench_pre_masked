
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pair_pos_vs_id {int pack_int_id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct pair_pos_vs_id *VAR_2 = (struct pair_pos_vs_id *)VAR_0;
 struct pair_pos_vs_id *VAR_3 = (struct pair_pos_vs_id *)VAR_1;

 return VAR_3->pack_int_id - VAR_2->pack_int_id;
}
