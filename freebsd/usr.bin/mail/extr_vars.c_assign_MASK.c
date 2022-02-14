
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var {void* v_value; struct var* v_link; void* v_name; } ;


 struct var* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char const*) ;
 struct var* FUNC_3 (char const*) ;
 struct var** VAR_0 ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (void*) ;

void
FUNC_6(const char *VAR_1, const char *VAR_2)
{
 struct var *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == ((void*)0)) {
  if ((VAR_3 = FUNC_0(1, sizeof(*VAR_3))) == ((void*)0))
   FUNC_1(1, "Out of memory");
  VAR_3->v_name = FUNC_4(VAR_1);
  VAR_3->v_link = VAR_0[VAR_4];
  VAR_0[VAR_4] = VAR_3;
 }
 else
  FUNC_5(VAR_3->v_value);
 VAR_3->v_value = FUNC_4(VAR_2);
}
