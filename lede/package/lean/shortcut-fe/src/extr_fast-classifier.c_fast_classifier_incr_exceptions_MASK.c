
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fast_classifier {int lock; int * exceptions; } ;
typedef size_t fast_classifier_exception_t ;


 struct fast_classifier VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(fast_classifier_exception_t VAR_1)
{
 struct fast_classifier *VAR_2 = &VAR_0;

 FUNC_0(&VAR_2->lock);
 VAR_2->exceptions[VAR_1]++;
 FUNC_1(&VAR_2->lock);
}
