
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t item_path_offset; int map; int items; int pool; } ;
typedef TYPE_1__ git_sortedcache ;


 void* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*,void*) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;

int FUNC_7(void **VAR_0, git_sortedcache *VAR_1, const char *VAR_2)
{
 size_t VAR_3, VAR_4;
 int VAR_5 = 0;
 char *VAR_6;
 void *VAR_7;

 if ((VAR_7 = FUNC_2(VAR_1->map, VAR_2)) != ((void*)0))
  goto done;

 VAR_3 = FUNC_6(VAR_2);
 VAR_4 = VAR_1->item_path_offset + VAR_3 + 1;
 VAR_4 = (VAR_4 + 7) & ~7;

 if ((VAR_7 = FUNC_0(&VAR_1->pool, VAR_4)) == ((void*)0)) {

  VAR_5 = -1;
  goto done;
 }





 VAR_6 = ((char *)VAR_7) + VAR_1->item_path_offset;
 FUNC_5(VAR_6, VAR_2, VAR_3);

 if ((VAR_5 = FUNC_3(VAR_1->map, VAR_6, VAR_7)) < 0)
  goto done;

 if ((VAR_5 = FUNC_4(&VAR_1->items, VAR_7)) < 0)
  FUNC_1(VAR_1->map, VAR_6);

done:
 if (VAR_0)
  *VAR_0 = !VAR_5 ? VAR_7 : ((void*)0);
 return VAR_5;
}
