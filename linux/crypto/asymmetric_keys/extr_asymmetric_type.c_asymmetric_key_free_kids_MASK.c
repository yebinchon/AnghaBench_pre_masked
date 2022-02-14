
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asymmetric_key_ids {struct asymmetric_key_ids** id; } ;


 int FUNC_0 (struct asymmetric_key_ids**) ;
 int FUNC_1 (struct asymmetric_key_ids*) ;

__attribute__((used)) static void FUNC_2(struct asymmetric_key_ids *VAR_0)
{
 int VAR_1;

 if (VAR_0) {
  for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->id); VAR_1++)
   FUNC_1(VAR_0->id[VAR_1]);
  FUNC_1(VAR_0);
 }
}
