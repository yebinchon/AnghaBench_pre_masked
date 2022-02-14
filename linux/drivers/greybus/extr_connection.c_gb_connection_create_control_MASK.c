
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int hd; } ;
struct gb_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gb_connection* FUNC_0 (int ,int,struct gb_interface*,int *,int ,int *,int) ;

struct gb_connection *
FUNC_1(struct gb_interface *VAR_2)
{
 return FUNC_0(VAR_2->hd, -1, VAR_2, ((void*)0), 0, ((void*)0),
         VAR_0 |
         VAR_1);
}
