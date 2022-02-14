
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_write_stack {int buf; struct tree_write_stack* next; } ;
struct object_id {int hash; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tree_write_stack*,char const*) ;
 int * FUNC_2 (char const*,char,size_t) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (struct tree_write_stack*) ;
 int FUNC_5 (struct tree_write_stack*,char const*) ;
 int FUNC_6 (int *,unsigned int,char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_7(struct tree_write_stack *VAR_0,
  const char *VAR_1, unsigned int VAR_2,
  const struct object_id *VAR_3)
{
 size_t VAR_4 = FUNC_3(VAR_1);
 unsigned int VAR_5 = 0;
 int VAR_6;


 while (VAR_0 && 3 * VAR_5 < VAR_4 &&
        FUNC_1(VAR_0, VAR_1 + 3 * VAR_5)) {
  VAR_5++;
  VAR_0 = VAR_0->next;
 }


 VAR_6 = FUNC_4(VAR_0);
 if (VAR_6)
  return VAR_6;


 while (3 * VAR_5 + 2 < VAR_4 && VAR_1[3 * VAR_5 + 2] == '/') {
  FUNC_5(VAR_0, VAR_1 + 3 * VAR_5);
  VAR_5++;
  VAR_0 = VAR_0->next;
 }


 FUNC_0(FUNC_2(VAR_1 + 3 * VAR_5, '/', VAR_4 - (3 * VAR_5)) == ((void*)0));


 FUNC_6(&VAR_0->buf, VAR_2, VAR_1 + 3 * VAR_5, VAR_4 - (3 * VAR_5),
    VAR_3->hash);

 return 0;
}
