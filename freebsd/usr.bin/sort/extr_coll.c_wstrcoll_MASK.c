
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_value {int k; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ,char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct key_value *VAR_2, struct key_value *VAR_3, size_t VAR_4)
{

 if (VAR_0) {
  if (VAR_4)
   FUNC_3("; offset=%d\n", (int) VAR_4);
  FUNC_2(VAR_1, VAR_2->k, "; k1=<", ">");
  FUNC_3("(%zu)", FUNC_0(VAR_2->k));
  FUNC_2(VAR_1, VAR_3->k, ", k2=<", ">");
  FUNC_3("(%zu)", FUNC_0(VAR_3->k));
 }

 return (FUNC_1(VAR_2->k, VAR_3->k, VAR_4));
}
