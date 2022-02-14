
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {int active; struct gb_connection* connection; } ;
struct gb_connection {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct gb_operation *VAR_0)
{
 struct gb_connection *VAR_1 = VAR_0->connection;
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_3 = VAR_0->active;
 FUNC_1(&VAR_1->lock, VAR_2);

 return VAR_3;
}
