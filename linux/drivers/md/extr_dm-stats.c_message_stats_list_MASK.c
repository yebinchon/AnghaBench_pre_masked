
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mapped_device*) ;
 int FUNC_1 (int ,char const*,char*,unsigned int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct mapped_device *VAR_3,
         unsigned VAR_4, char **VAR_5,
         char *VAR_6, unsigned VAR_7)
{
 int VAR_8;
 const char *VAR_9 = ((void*)0);

 if (VAR_4 < 1 || VAR_4 > 2)
  return -VAR_0;

 if (VAR_4 > 1) {
  VAR_9 = FUNC_3(VAR_5[1], VAR_2);
  if (!VAR_9)
   return -VAR_1;
 }

 VAR_8 = FUNC_1(FUNC_0(VAR_3), VAR_9, VAR_6, VAR_7);

 FUNC_2(VAR_9);

 return VAR_8;
}
