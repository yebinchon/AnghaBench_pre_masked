
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
typedef int (* each_ref_fn ) (int ,struct object_id*,int,void*) ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct object_id*,int*) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (struct strbuf*) ;

int FUNC_4(each_ref_fn VAR_2, void *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 int VAR_5 = 0;
 struct object_id VAR_6;
 int VAR_7;

 FUNC_2(&VAR_4, "%sHEAD", FUNC_0());
 if (!FUNC_1(VAR_4.buf, VAR_0, &VAR_6, &VAR_7))
  VAR_5 = VAR_2(VAR_4.buf, &VAR_6, VAR_7, VAR_3);
 FUNC_3(&VAR_4);

 return VAR_5;
}
