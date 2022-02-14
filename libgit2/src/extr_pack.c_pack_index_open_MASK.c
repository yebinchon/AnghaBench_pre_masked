
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct git_pack_file {int index_version; char* pack_name; int lock; } ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,size_t) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct git_pack_file*) ;
 size_t FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct git_pack_file *VAR_0)
{
 int VAR_1 = 0;
 size_t VAR_2;
 git_buf VAR_3;

 if (VAR_0->index_version > -1)
  return 0;

 VAR_2 = FUNC_9(VAR_0->pack_name);
 FUNC_0(VAR_2 > FUNC_9(".pack"));

 if (FUNC_2(&VAR_3, VAR_2) < 0)
  return -1;

 FUNC_4(&VAR_3, VAR_0->pack_name, VAR_2 - FUNC_9(".pack"));
 FUNC_5(&VAR_3, ".idx");
 if (FUNC_3(&VAR_3)) {
  FUNC_1(&VAR_3);
  return -1;
 }

 if ((VAR_1 = FUNC_6(&VAR_0->lock)) < 0) {
  FUNC_1(&VAR_3);
  return VAR_1;
 }

 if (VAR_0->index_version == -1)
  VAR_1 = FUNC_8(VAR_3.ptr, VAR_0);

 FUNC_1(&VAR_3);

 FUNC_7(&VAR_0->lock);

 return VAR_1;
}
