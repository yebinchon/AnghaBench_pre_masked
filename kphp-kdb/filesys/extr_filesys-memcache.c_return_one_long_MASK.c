
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (struct connection*,char const*,char*,int ) ;
 int FUNC_1 (char*,char*,long long) ;

__attribute__((used)) static int FUNC_2 (struct connection *VAR_0, const char *VAR_1, long long VAR_2) {
  static char VAR_3[32];
  return FUNC_0 (VAR_0, VAR_1, VAR_3, FUNC_1 (VAR_3, "%lld", VAR_2));
}
