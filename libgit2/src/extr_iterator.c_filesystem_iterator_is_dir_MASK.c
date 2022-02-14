
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_11__ {int st_mode; } ;
struct TYPE_13__ {int path; TYPE_1__ st; } ;
typedef TYPE_3__ filesystem_iterator_entry ;
struct TYPE_14__ {int root; } ;
typedef TYPE_4__ filesystem_iterator ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_4__ const*) ;
 int FUNC_5 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_6(
 bool *VAR_1,
 const filesystem_iterator *VAR_2,
 const filesystem_iterator_entry *VAR_3)
{
 struct stat VAR_4;
 git_buf VAR_5 = VAR_0;
 int VAR_6 = 0;

 if (FUNC_0(VAR_3->st.st_mode)) {
  *VAR_1 = 1;
  goto done;
 }

 if (!FUNC_4(VAR_2) || !FUNC_1(VAR_3->st.st_mode)) {
  *VAR_1 = 0;
  goto done;
 }

 if ((VAR_6 = FUNC_3(&VAR_5, VAR_2->root, VAR_3->path)) < 0 ||
  (VAR_6 = FUNC_5(VAR_5.ptr, &VAR_4)) < 0)
  goto done;

 *VAR_1 = FUNC_0(VAR_4.st_mode);

done:
 FUNC_2(&VAR_5);
 return VAR_6;
}
