
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int winid; struct vas_instance* vinst; } ;
struct vas_instance {int ida; } ;


 int VAR_0 ;
 struct vas_window* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct vas_window*) ;
 struct vas_window* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct vas_window*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct vas_window*) ;

__attribute__((used)) static struct vas_window *FUNC_7(struct vas_instance *VAR_2)
{
 int VAR_3;
 struct vas_window *VAR_4;

 VAR_3 = FUNC_4(&VAR_2->ida);
 if (VAR_3 < 0)
  return FUNC_0(VAR_3);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto out_free;

 VAR_4->vinst = VAR_2;
 VAR_4->winid = VAR_3;

 if (FUNC_3(VAR_4))
  goto out_free;

 FUNC_6(VAR_4);

 return VAR_4;

out_free:
 FUNC_1(VAR_4);
 FUNC_5(&VAR_2->ida, VAR_3);
 return FUNC_0(-VAR_0);
}
