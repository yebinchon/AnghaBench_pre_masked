
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct base_data {int ref_last; int ofs_last; } ;


 struct base_data* FUNC_0 (int,int) ;

__attribute__((used)) static struct base_data *FUNC_1(void)
{
 struct base_data *VAR_0 = FUNC_0(1, sizeof(struct base_data));
 VAR_0->ref_last = -1;
 VAR_0->ofs_last = -1;
 return VAR_0;
}
