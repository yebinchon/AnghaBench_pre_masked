
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char**) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,int*,char**) ;

__attribute__((used)) static int FUNC_6(char *VAR_4, char **VAR_5)
{
 int VAR_6, VAR_7;





 VAR_4 = FUNC_1(VAR_4, VAR_1);
 if (VAR_4 == ((void*)0)) {
  *VAR_5 = "Failed to allocate memory";
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_4, &VAR_6, VAR_5);
 if (VAR_7)
  goto err_free;

 if (VAR_6 == -1) {
  VAR_7 = 0;
  goto err_free;
 }

 FUNC_2(&VAR_3);
 VAR_7 = FUNC_4(VAR_6, VAR_5);
 if (VAR_7)
  VAR_2[VAR_6].file = ((void*)0);
 FUNC_3(&VAR_3);

out:
 return VAR_7;

err_free:
 FUNC_0(VAR_4);
 goto out;
}
