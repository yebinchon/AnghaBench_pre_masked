
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct index_extension {scalar_t__ extension_size; int signature; } ;
struct TYPE_8__ {int * tree; } ;
typedef TYPE_1__ git_index ;
typedef int git_filebuf ;
struct TYPE_9__ {scalar_t__ size; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct index_extension*,int,int) ;
 int FUNC_4 (int *,struct index_extension*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(git_index *VAR_2, git_filebuf *VAR_3)
{
 struct index_extension VAR_4;
 git_buf VAR_5 = VAR_0;
 int VAR_6;

 if (VAR_2->tree == ((void*)0))
  return 0;

 if ((VAR_6 = FUNC_1(&VAR_5, VAR_2->tree)) < 0)
  return VAR_6;

 FUNC_3(&VAR_4, 0x0, sizeof(struct index_extension));
 FUNC_2(&VAR_4.signature, VAR_1, 4);
 VAR_4.extension_size = (uint32_t)VAR_5.size;

 VAR_6 = FUNC_4(VAR_3, &VAR_4, &VAR_5);

 FUNC_0(&VAR_5);

 return VAR_6;
}
