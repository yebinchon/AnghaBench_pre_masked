
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {char const* name; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct wakeup_source*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int ) ;
 struct wakeup_source* FUNC_4 (int,int ) ;
 int VAR_1 ;

struct wakeup_source *FUNC_5(const char *VAR_2)
{
 struct wakeup_source *VAR_3;
 const char *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto err_ws;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_4)
  goto err_name;
 VAR_3->name = VAR_4;

 VAR_5 = FUNC_0(&VAR_1, VAR_0);
 if (VAR_5 < 0)
  goto err_id;
 VAR_3->id = VAR_5;

 return VAR_3;

err_id:
 FUNC_2(VAR_3->name);
err_name:
 FUNC_1(VAR_3);
err_ws:
 return ((void*)0);
}
