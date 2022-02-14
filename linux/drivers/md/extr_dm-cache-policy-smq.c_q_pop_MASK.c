
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int nr_levels; } ;
struct entry {int dummy; } ;


 int FUNC_0 (struct queue*,struct entry*) ;
 struct entry* FUNC_1 (struct queue*,int ,int) ;

__attribute__((used)) static struct entry *FUNC_2(struct queue *VAR_0)
{
 struct entry *VAR_1 = FUNC_1(VAR_0, VAR_0->nr_levels, 1);

 if (VAR_1)
  FUNC_0(VAR_0, VAR_1);

 return VAR_1;
}
