
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {scalar_t__ out_of_data_space; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static blk_status_t FUNC_0(struct pool *VAR_2)
{
 return VAR_2->out_of_data_space ? VAR_1 : VAR_0;
}
