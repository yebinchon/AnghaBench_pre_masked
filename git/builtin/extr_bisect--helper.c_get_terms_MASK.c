
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct bisect_terms {void* term_good; void* term_bad; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bisect_terms*) ;
 int FUNC_3 () ;
 void* FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(struct bisect_terms *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 FILE *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 VAR_3 = FUNC_1(FUNC_3(), "r");
 if (!VAR_3) {
  VAR_4 = -1;
  goto finish;
 }

 FUNC_2(VAR_1);
 FUNC_5(&VAR_2, VAR_3);
 VAR_1->term_bad = FUNC_4(&VAR_2, ((void*)0));
 FUNC_5(&VAR_2, VAR_3);
 VAR_1->term_good = FUNC_4(&VAR_2, ((void*)0));

finish:
 if (VAR_3)
  FUNC_0(VAR_3);
 FUNC_6(&VAR_2);
 return VAR_4;
}
