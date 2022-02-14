
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_cache {size_t rc_maxsize; int rc_lock; int rc_all; int * rc_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct replay_cache* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;

struct replay_cache *
FUNC_3(size_t VAR_5)
{
 struct replay_cache *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1, VAR_2|VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_0(&VAR_6->rc_cache[VAR_7]);
 FUNC_0(&VAR_6->rc_all);
 FUNC_2(&VAR_6->rc_lock, "rc_lock", ((void*)0), VAR_0);
 VAR_6->rc_maxsize = VAR_5;

 return (VAR_6);
}
