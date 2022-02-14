
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iowait {int * wait; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline u32 FUNC_1(struct iowait *VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 = FUNC_0(&VAR_2->wait[VAR_0]);
 VAR_3 += FUNC_0(&VAR_2->wait[VAR_1]);
 return VAR_3;
}
