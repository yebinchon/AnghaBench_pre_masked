
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dax_device {char const* host; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dax_device *VAR_2, const char *VAR_3)
{
 int VAR_4;





 FUNC_0(&VAR_2->list);
 VAR_2->host = VAR_3;
 if (!VAR_3)
  return;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_3(&VAR_1);
 FUNC_2(&VAR_2->list, &VAR_0[VAR_4]);
 FUNC_4(&VAR_1);
}
