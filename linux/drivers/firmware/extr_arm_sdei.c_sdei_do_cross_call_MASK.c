
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdei_event {int dummy; } ;
struct sdei_crosscall_args {int first_error; } ;


 int FUNC_0 (struct sdei_crosscall_args,struct sdei_event*) ;
 int FUNC_1 (void*,struct sdei_crosscall_args*,int) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_0, struct sdei_event * VAR_1)
{
 struct sdei_crosscall_args VAR_2;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_0, &VAR_2, 1);

 return VAR_2.first_error;
}
