
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*,size_t) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(git_buf *VAR_3, const char *VAR_4)
{
 size_t VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 if ((VAR_7 = FUNC_3(VAR_3, '~')) < 0 || (VAR_7 = FUNC_4(VAR_3, VAR_4)) < 0)
  return -1;

 VAR_5 = FUNC_1(VAR_3);

 while (FUNC_7(FUNC_0(VAR_3)) && VAR_6 < VAR_2) {
  FUNC_5(VAR_3, VAR_5);

  if ((VAR_7 = FUNC_3(VAR_3, '_')) < 0 ||
   (VAR_7 = FUNC_2(VAR_3, "%d", VAR_6)) < 0)
   return VAR_7;

  VAR_6++;
 }

 if (VAR_6 == VAR_2) {
  FUNC_5(VAR_3, VAR_5);

  FUNC_6(VAR_1, "could not write '%s': working directory file exists", VAR_3->ptr);
  return VAR_0;
 }

 return 0;
}
