
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int diffopt; } ;
struct object_id {int dummy; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct rev_info*,char*,struct cache_entry const*,struct object_id const*,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct cache_entry const*,struct object_id const**,unsigned int*,int,int,unsigned int*,int *) ;
 int FUNC_2 (struct object_id const*) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_0,
     const struct cache_entry *VAR_1,
     int VAR_2, int VAR_3)
{
 const struct object_id *VAR_4;
 unsigned int VAR_5;
 unsigned VAR_6 = 0;





 if (FUNC_1(VAR_1, &VAR_4, &VAR_5, VAR_2, VAR_3,
     &VAR_6, &VAR_0->diffopt) < 0)
  return;

 FUNC_0(VAR_0, "+", VAR_1, VAR_4, !FUNC_2(VAR_4), VAR_5, VAR_6);
}
