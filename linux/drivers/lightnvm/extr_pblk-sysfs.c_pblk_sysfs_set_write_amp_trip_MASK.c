
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int gc_wa; void* gc_rst_wa; int pad_wa; void* pad_rst_wa; int user_wa; void* user_rst_wa; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 size_t FUNC_2 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct pblk *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, "\n");
 if (VAR_4 >= VAR_3)
  return -VAR_0;

 if (FUNC_1(VAR_2, 0, &VAR_5))
  return -VAR_0;

 if (VAR_5 != 0)
  return -VAR_0;

 VAR_1->user_rst_wa = FUNC_0(&VAR_1->user_wa);
 VAR_1->pad_rst_wa = FUNC_0(&VAR_1->pad_wa);
 VAR_1->gc_rst_wa = FUNC_0(&VAR_1->gc_wa);

 return VAR_3;
}
