
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct object_id const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 scalar_t__ FUNC_4 (struct stat) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_5(const struct object_id *VAR_4, const char *VAR_5, void *VAR_6)
{
 struct stat VAR_7;

 if (FUNC_3(VAR_5, &VAR_7) || !FUNC_0(VAR_7.st_mode))
  FUNC_2(VAR_5);
 else {
  VAR_1 += FUNC_4(VAR_7);
  VAR_0++;
  if (VAR_3 && FUNC_1(VAR_4))
   VAR_2++;
 }
 return 0;
}
