
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_4__ {unsigned int gl_pathc; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int gid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_5, char *VAR_6, int VAR_7, uid_t VAR_8, gid_t VAR_9)
{
    glob_t VAR_10;
    char *VAR_11;
    unsigned int VAR_12;

    if (FUNC_3(VAR_6, VAR_2, ((void*)0), &VAR_10) != 0)
 return;
    for (VAR_12 = 0; VAR_12 < VAR_10.gl_pathc; VAR_12++) {
 VAR_11 = VAR_10.gl_pathv[VAR_12];

 if (FUNC_0(VAR_11, 0) && VAR_4 != VAR_0 && VAR_4 != VAR_1)
     FUNC_5(VAR_3, "%s: chflags(%s): %m", VAR_5, VAR_11);
 if (FUNC_1(VAR_11, VAR_7) && VAR_4 != VAR_0)
     FUNC_5(VAR_3, "%s: chmod(%s): %m", VAR_5, VAR_11);
 if (FUNC_2(VAR_11, VAR_8, VAR_9) && VAR_4 != VAR_0)
     FUNC_5(VAR_3, "%s: chown(%s): %m", VAR_5, VAR_11);
    }
    FUNC_4(&VAR_10);
}
