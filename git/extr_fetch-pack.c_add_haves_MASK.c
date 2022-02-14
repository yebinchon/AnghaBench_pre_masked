
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct object_id {int dummy; } ;
struct fetch_negotiator {struct object_id* (* next ) (struct fetch_negotiator*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct object_id const*) ;
 int FUNC_2 (struct strbuf*,char*,...) ;
 struct object_id* FUNC_3 (struct fetch_negotiator*) ;

__attribute__((used)) static int FUNC_4(struct fetch_negotiator *VAR_1,
       struct strbuf *VAR_2,
       int *VAR_3, int *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 const struct object_id *VAR_7;

 while ((VAR_7 = VAR_1->next(VAR_1))) {
  FUNC_2(VAR_2, "have %s\n", FUNC_1(VAR_7));
  if (++VAR_6 >= *VAR_3)
   break;
 }

 *VAR_4 += VAR_6;
 if (!VAR_6 || *VAR_4 >= VAR_0) {

  FUNC_2(VAR_2, "done\n");
  VAR_5 = 1;
 }


 *VAR_3 = FUNC_0(1, *VAR_3);

 return VAR_5;
}
