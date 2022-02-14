
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_key {int key; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_key*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct trace_key*) ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct trace_key *VAR_1, const void *VAR_2, unsigned VAR_3)
{
 if (FUNC_4(FUNC_0(VAR_1), VAR_2, VAR_3) < 0) {
  FUNC_3("unable to write trace for %s: %s",
   VAR_1->key, FUNC_1(VAR_0));
  FUNC_2(VAR_1);
 }
}
