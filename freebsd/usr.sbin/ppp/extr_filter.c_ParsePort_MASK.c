
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;


 int VAR_0 ;
 struct servent* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, const char *VAR_2)
{
  struct servent *VAR_3;
  char *VAR_4;
  int VAR_5;

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 != ((void*)0))
    return FUNC_2(VAR_3->s_port);

  VAR_5 = FUNC_3(VAR_1, &VAR_4, 0);
  if (VAR_4 == VAR_1) {
    FUNC_1(VAR_0, "ParsePort: %s is not a port name or number.\n",
       VAR_1);
    return 0;
  }
  return VAR_5;
}
