
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldt_struct {int slot; unsigned int nr_entries; void* entries; } ;
struct desc_struct {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ldt_struct*) ;
 struct ldt_struct* FUNC_3 (int,int ) ;
 void* FUNC_4 (unsigned int) ;

__attribute__((used)) static struct ldt_struct *FUNC_5(unsigned int VAR_4)
{
 struct ldt_struct *VAR_5;
 unsigned int VAR_6;

 if (VAR_4 > VAR_1)
  return ((void*)0);

 VAR_5 = FUNC_3(sizeof(struct ldt_struct), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(VAR_2 != sizeof(struct desc_struct));
 VAR_6 = VAR_4 * VAR_2;







 if (VAR_6 > VAR_3)
  VAR_5->entries = FUNC_4(VAR_6);
 else
  VAR_5->entries = (void *)FUNC_1(VAR_0);

 if (!VAR_5->entries) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }


 VAR_5->slot = -1;

 VAR_5->nr_entries = VAR_4;
 return VAR_5;
}
