
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct testcase_t {TYPE_1__* setup; int (* fn ) (void*) ;} ;
typedef enum outcome { ____Placeholder_outcome } outcome ;
struct TYPE_2__ {scalar_t__ (* cleanup_fn ) (struct testcase_t const*,void*) ;void* (* setup_fn ) (struct testcase_t const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (struct testcase_t const*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct testcase_t const*,void*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct testcase_t const*,void*) ;
 int FUNC_6 () ;

__attribute__((used)) static enum outcome
FUNC_7(const struct testcase_t *VAR_6)
{
 void *VAR_7 = ((void*)0);
 int VAR_8;
 if (VAR_6->setup) {
  VAR_7 = VAR_6->setup->setup_fn(VAR_6);
  if (!VAR_7)
   return VAR_0;
  else if (VAR_7 == (void*)VAR_3)
   return VAR_2;
 }

 VAR_4 = VAR_1;
 {
  if (VAR_5) {



   FUNC_6();
   VAR_6->fn(VAR_7);
   FUNC_4();

  } else {
   VAR_6->fn(VAR_7);
  }
 }
 VAR_8 = VAR_4;

 if (VAR_6->setup) {
  if (VAR_6->setup->cleanup_fn(VAR_6, VAR_7) == 0)
   VAR_8 = VAR_0;
 }

 return VAR_8;
}
