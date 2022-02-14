
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_interface {TYPE_1__* control; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {struct gb_connection* connection; } ;


 int VAR_0 ;
 int FUNC_0 (struct gb_connection*,int ,int *,int ,void*,size_t) ;

int FUNC_1(struct gb_interface *VAR_1, void *VAR_2,
          size_t VAR_3)
{
 struct gb_connection *VAR_4 = VAR_1->control->connection;

 return FUNC_0(VAR_4, VAR_0,
    ((void*)0), 0, VAR_2, VAR_3);
}
