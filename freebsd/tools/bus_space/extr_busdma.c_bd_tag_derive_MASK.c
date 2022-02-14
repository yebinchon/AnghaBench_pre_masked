
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct obj {int oid; int refcnt; int fd; } ;


 int VAR_0 ;
 struct obj* FUNC_0 (struct obj*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct obj* FUNC_1 (int,int ) ;

int
FUNC_2(int VAR_1, u_long VAR_2, u_long VAR_3, u_long VAR_4,
    u_long VAR_5, u_int VAR_6, u_long VAR_7, u_int VAR_8, u_int VAR_9)
{
 struct obj *VAR_10, *VAR_11;

 VAR_10 = FUNC_1(VAR_1, VAR_0);
 if (VAR_10 == ((void*)0))
  return (-1);

 VAR_11 = FUNC_0(VAR_10, VAR_10->fd, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9);
 if (VAR_11 == ((void*)0))
  return (-1);
 VAR_10->refcnt++;
 return (VAR_11->oid);
}
