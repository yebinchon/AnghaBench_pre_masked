
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int len; } ;
struct index_state {int dummy; } ;
struct TYPE_3__ {int ptr; int size; } ;
typedef TYPE_1__ mmfile_t ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct index_state*,char const*,int ,int ,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,int *) ;

__attribute__((used)) static void FUNC_3(mmfile_t *VAR_1, const char *VAR_2, struct index_state *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 if (FUNC_1(VAR_3, VAR_2, VAR_1->ptr, VAR_1->size, &VAR_4)) {
  FUNC_0(VAR_1->ptr);
  VAR_1->size = VAR_4.len;
  VAR_1->ptr = FUNC_2(&VAR_4, ((void*)0));
 }
}
