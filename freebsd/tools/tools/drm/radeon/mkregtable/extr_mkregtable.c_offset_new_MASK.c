
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct offset {unsigned int offset; int list; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct offset *FUNC_2(unsigned VAR_0)
{
 struct offset *VAR_1;

 VAR_1 = (struct offset *)FUNC_1(sizeof(struct offset));
 if (VAR_1) {
  FUNC_0(&VAR_1->list);
  VAR_1->offset = VAR_0;
 }
 return VAR_1;
}
