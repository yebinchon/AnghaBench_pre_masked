
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* params; } ;
struct hidpp_report {TYPE_1__ rap; } ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,int) ;
 int FUNC_1 (struct hidpp_device*,int ,int ,int ,int *,int,struct hidpp_report*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int*,int) ;

__attribute__((used)) static char *FUNC_4(struct hidpp_device *VAR_5)
{
 struct hidpp_report VAR_6;
 int VAR_7;
 u8 VAR_8[1] = { VAR_1 };
 char *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_5,
     VAR_4,
     VAR_2,
     VAR_3,
     VAR_8, 1, &VAR_6);
 if (VAR_7)
  return ((void*)0);

 VAR_10 = VAR_6.rap.params[1];

 if (2 + VAR_10 > sizeof(VAR_6.rap.params))
  return ((void*)0);

 if (VAR_10 < 4)
  return ((void*)0);

 VAR_9 = FUNC_2(VAR_10 + 1, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 FUNC_3(VAR_9, &VAR_6.rap.params[2], VAR_10);


 FUNC_0(&VAR_9, VAR_10 + 1);

 return VAR_9;
}
