
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct persistent_gnt {int last_used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct persistent_gnt *VAR_3)
{
 return VAR_2 &&
        (VAR_1 - VAR_3->last_used >=
  VAR_0 * VAR_2);
}
