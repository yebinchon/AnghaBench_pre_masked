
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int datalen; } ;
struct TYPE_10__ {TYPE_6__ old_file; TYPE_6__ new_file; int contains_data; } ;
struct TYPE_11__ {TYPE_1__ binary; } ;
typedef TYPE_2__ git_patch ;
struct TYPE_12__ {char const* ptr; size_t size; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,char const*,size_t,TYPE_6__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(
 git_buf *VAR_1,
 const char *VAR_2,
 size_t VAR_3,
 git_patch *VAR_4)
{
 git_buf VAR_5 = VAR_0;
 int VAR_6 = 0;

 if (!VAR_4->binary.contains_data) {
  VAR_6 = FUNC_1("patch does not contain binary data");
  goto done;
 }

 if (!VAR_4->binary.old_file.datalen && !VAR_4->binary.new_file.datalen)
  goto done;


 if ((VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3,
   &VAR_4->binary.new_file)) < 0)
  goto done;


 if ((VAR_6 = FUNC_0(&VAR_5, VAR_1->ptr, VAR_1->size,
   &VAR_4->binary.old_file)) < 0)
  goto done;


 if (VAR_3 != VAR_5.size ||
  (VAR_3 && FUNC_3(VAR_2, VAR_5.ptr, VAR_3) != 0)) {
  VAR_6 = FUNC_1("binary patch did not apply cleanly");
  goto done;
 }

done:
 if (VAR_6 < 0)
  FUNC_2(VAR_1);

 FUNC_2(&VAR_5);
 return VAR_6;
}
