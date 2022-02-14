
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {size_t read_pos; int truncated; int * read_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct si_sm_data*) ;
 int FUNC_1 (struct si_sm_data*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct si_sm_data *VAR_2)
{
 if (VAR_2->read_pos >= VAR_1) {

  FUNC_0(VAR_2);
  VAR_2->truncated = 1;
 } else {
  VAR_2->read_data[VAR_2->read_pos] = FUNC_0(VAR_2);
  (VAR_2->read_pos)++;
 }
 FUNC_1(VAR_2, VAR_0);
}
