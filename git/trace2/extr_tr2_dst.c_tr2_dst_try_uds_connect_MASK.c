
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;
 struct sockaddr_un VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_3, 0);
 if (VAR_5 == -1)
  return VAR_1;

 VAR_6.sun_family = VAR_0;
 FUNC_3(VAR_6.sun_path, VAR_2, sizeof(VAR_6.sun_path));

 if (FUNC_1(VAR_5, (struct sockaddr *)&VAR_6, sizeof(VAR_6)) == -1) {
  int VAR_7 = VAR_1;
  FUNC_0(VAR_5);
  return VAR_7;
 }

 *VAR_4 = VAR_5;
 return 0;
}
