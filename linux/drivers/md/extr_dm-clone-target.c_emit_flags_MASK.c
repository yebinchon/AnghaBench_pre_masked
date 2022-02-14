
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {int flags; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct clone *VAR_2, char *VAR_3, unsigned int VAR_4,
         ssize_t *VAR_5)
{
 ssize_t VAR_6 = *VAR_5;
 unsigned int VAR_7;

 VAR_7 = !FUNC_1(VAR_1, &VAR_2->flags);
 VAR_7 += !FUNC_1(VAR_0, &VAR_2->flags);

 FUNC_0("%u ", VAR_7);

 if (!FUNC_1(VAR_1, &VAR_2->flags))
  FUNC_0("no_hydration ");

 if (!FUNC_1(VAR_0, &VAR_2->flags))
  FUNC_0("no_discard_passdown ");

 *VAR_5 = VAR_6;
}
