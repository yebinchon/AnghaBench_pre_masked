
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {size_t write_pos; int write_count; int * write_data; } ;


 int FUNC_0 (struct si_sm_data*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct si_sm_data *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->write_data[VAR_0->write_pos]);
 (VAR_0->write_pos)++;
 (VAR_0->write_count)--;
}
