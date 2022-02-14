
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct _stat64 {int dummy; } ;
typedef int U64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,struct _stat64*) ;
 int FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static U64 FUNC_3(const char* VAR_0)
{
    int VAR_1;




    struct stat VAR_2;
    VAR_1 = FUNC_2(VAR_0, &VAR_2);

    if (VAR_1 || !FUNC_0(VAR_2.st_mode)) return 0;
    return (U64)VAR_2.st_size;
}
