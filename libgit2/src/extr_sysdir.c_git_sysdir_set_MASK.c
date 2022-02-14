
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t git_sysdir_t ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_14__ {char const* ptr; } ;
struct TYPE_15__ {TYPE_2__ buf; int (* guess ) (TYPE_2__*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char const*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,char const*,int) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (char const*,int ) ;
 int FUNC_11 (TYPE_2__*) ;

int FUNC_12(git_sysdir_t VAR_4, const char *VAR_5)
{
 const char *VAR_6 = ((void*)0);
 git_buf VAR_7 = VAR_0;

 FUNC_0(FUNC_8(VAR_4));

 if (VAR_5 != ((void*)0))
  VAR_6 = FUNC_10(VAR_5, VAR_2);


 if (!VAR_5)
  VAR_3[VAR_4].guess(&VAR_3[VAR_4].buf);


 if (!VAR_6) {
  if (VAR_5)
   FUNC_6(&VAR_3[VAR_4].buf, VAR_5);

  goto done;
 }


 if (VAR_6 > VAR_5)
  FUNC_5(&VAR_7, VAR_5, VAR_6 - VAR_5);

 if (FUNC_3(&VAR_3[VAR_4].buf))
  FUNC_2(&VAR_7, VAR_1,
   VAR_7.ptr, VAR_3[VAR_4].buf.ptr);

 VAR_6 += FUNC_9(VAR_2);
 if (*VAR_6)
  FUNC_2(&VAR_7, VAR_1, VAR_7.ptr, VAR_6);

 FUNC_7(&VAR_3[VAR_4].buf, &VAR_7);
 FUNC_1(&VAR_7);

done:
 if (FUNC_4(&VAR_3[VAR_4].buf))
  return -1;

 return 0;
}
