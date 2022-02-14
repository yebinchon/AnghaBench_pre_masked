
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
typedef int each_ref_fn ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct strbuf*,char*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int VAR_1 ;

int FUNC_5(each_ref_fn VAR_2, void *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int VAR_5;
 FUNC_3(&VAR_4, "%srefs/", FUNC_1());
 VAR_5 = FUNC_0(FUNC_2(VAR_1),
         VAR_4.buf, VAR_2, 0, 0, VAR_3);
 FUNC_4(&VAR_4);
 return VAR_5;
}
