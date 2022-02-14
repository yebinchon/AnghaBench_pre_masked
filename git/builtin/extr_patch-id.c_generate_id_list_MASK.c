
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct object_id*,struct object_id*) ;
 int FUNC_2 (struct object_id*,struct object_id*,struct strbuf*,int) ;
 int FUNC_3 (struct object_id*) ;
 int FUNC_4 (struct object_id*,struct object_id*) ;
 int VAR_1 ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(int VAR_2)
{
 struct object_id VAR_3, VAR_4, VAR_5;
 int VAR_6;
 struct strbuf VAR_7 = VAR_0;

 FUNC_3(&VAR_3);
 while (!FUNC_0(VAR_1)) {
  VAR_6 = FUNC_2(&VAR_4, &VAR_5, &VAR_7, VAR_2);
  FUNC_1(VAR_6, &VAR_3, &VAR_5);
  FUNC_4(&VAR_3, &VAR_4);
 }
 FUNC_5(&VAR_7);
}
