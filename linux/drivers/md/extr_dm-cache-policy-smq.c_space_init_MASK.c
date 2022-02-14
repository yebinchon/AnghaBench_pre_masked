
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_space {int * begin; int * end; } ;
struct entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct entry_space *VAR_1, unsigned VAR_2)
{
 if (!VAR_2) {
  VAR_1->begin = VAR_1->end = ((void*)0);
  return 0;
 }

 VAR_1->begin = FUNC_1(FUNC_0(VAR_2, sizeof(struct entry)));
 if (!VAR_1->begin)
  return -VAR_0;

 VAR_1->end = VAR_1->begin + VAR_2;
 return 0;
}
