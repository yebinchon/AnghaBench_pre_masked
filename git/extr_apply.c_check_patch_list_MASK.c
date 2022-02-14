
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {struct patch* next; } ;
struct apply_state {scalar_t__ apply_verbosity; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct apply_state*,struct patch*) ;
 int FUNC_2 (struct apply_state*,struct patch*) ;
 int FUNC_3 (struct apply_state*,struct patch*) ;
 int FUNC_4 (int ,int ,struct patch*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct apply_state *VAR_2, struct patch *VAR_3)
{
 int VAR_4 = 0;

 FUNC_3(VAR_2, VAR_3);
 FUNC_2(VAR_2, VAR_3);
 while (VAR_3) {
  int VAR_5;
  if (VAR_2->apply_verbosity > VAR_1)
   FUNC_4(VAR_0,
           FUNC_0("Checking patch %s..."), VAR_3);
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5 == -128)
   return -128;
  VAR_4 |= VAR_5;
  VAR_3 = VAR_3->next;
 }
 return VAR_4;
}
