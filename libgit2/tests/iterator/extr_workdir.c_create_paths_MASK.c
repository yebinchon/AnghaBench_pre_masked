
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t size; char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (TYPE_1__*,size_t) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1, int VAR_2)
{
 git_buf VAR_3 = VAR_0;
 size_t VAR_4;
 int VAR_5;

 FUNC_0(FUNC_6(&VAR_3, VAR_1));
 FUNC_0(FUNC_5(&VAR_3, '/'));

 VAR_4 = VAR_3.size;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  bool VAR_6 = (VAR_2 == 0 || (VAR_5 % 2) == 0);
  FUNC_7(&VAR_3, VAR_4);
  FUNC_0(FUNC_4(&VAR_3, "item%d", VAR_5));

  if (VAR_6) {
   FUNC_1(VAR_3.ptr, "This is a file!\n");
  } else {
   FUNC_2(FUNC_8(VAR_3.ptr, 0777));

   if (VAR_2 > 0)
    FUNC_9(VAR_3.ptr, (VAR_2 - 1));
  }
 }

 FUNC_3(&VAR_3);
}
