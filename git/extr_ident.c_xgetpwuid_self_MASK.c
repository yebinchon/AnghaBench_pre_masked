
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; char* pw_gecos; } ;


 scalar_t__ VAR_0 ;
 struct passwd* FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static struct passwd *FUNC_2(int *VAR_1)
{
 struct passwd *VAR_2;

 VAR_0 = 0;
 VAR_2 = FUNC_0(FUNC_1());
 if (!VAR_2) {
  static struct passwd VAR_3;
  VAR_3.pw_name = "unknown";

  VAR_3.pw_gecos = "Unknown";

  VAR_2 = &VAR_3;
  if (VAR_1)
   *VAR_1 = 1;
 }
 return VAR_2;
}
