
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_write {int dummy; } ;
struct btree {struct btree_write* writes; } ;


 int FUNC_0 (struct btree*) ;

__attribute__((used)) static inline struct btree_write *FUNC_1(struct btree *VAR_0)
{
 return VAR_0->writes + (FUNC_0(VAR_0) ^ 1);
}
