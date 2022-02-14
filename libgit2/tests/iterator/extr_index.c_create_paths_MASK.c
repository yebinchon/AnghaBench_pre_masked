
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* path; int id; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
struct TYPE_12__ {size_t size; char* ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_2__*,size_t) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_9(git_index *VAR_2, const char *VAR_3, int VAR_4)
{
 git_buf VAR_5 = VAR_0;
 git_index_entry VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (VAR_3) {
  FUNC_0(FUNC_4(&VAR_5, VAR_3));
  FUNC_0(FUNC_3(&VAR_5, '/'));
 }

 VAR_7 = VAR_5.size;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  bool VAR_9 = (VAR_4 == 0 || (VAR_8 % 2) == 0);
  FUNC_5(&VAR_5, VAR_7);
  FUNC_0(FUNC_2(&VAR_5, "item%d", VAR_8));

  if (VAR_9) {
   FUNC_8(&VAR_6, 0, sizeof(git_index_entry));
   VAR_6.path = VAR_5.ptr;
   VAR_6.mode = VAR_1;
   FUNC_7(&VAR_6.id, "d44e18fb93b7107b5cd1b95d601591d77869a1b6");

   FUNC_0(FUNC_6(VAR_2, &VAR_6));
  } else if (VAR_4 > 0) {
   FUNC_9(VAR_2, VAR_5.ptr, (VAR_4 - 1));
  }
 }

 FUNC_1(&VAR_5);
}
