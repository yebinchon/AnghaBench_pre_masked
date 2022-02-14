
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct index_extension {int extension_size; } ;
typedef int git_filebuf ;
struct TYPE_3__ {int size; struct index_extension* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int *,struct index_extension*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct index_extension*,struct index_extension*,int) ;
 int FUNC_3 (struct index_extension*,int,int) ;

__attribute__((used)) static int FUNC_4(git_filebuf *VAR_0, struct index_extension *VAR_1, git_buf *VAR_2)
{
 struct index_extension VAR_3;

 FUNC_3(&VAR_3, 0x0, sizeof(struct index_extension));
 FUNC_2(&VAR_3, VAR_1, 4);
 VAR_3.extension_size = FUNC_1(VAR_1->extension_size);

 FUNC_0(VAR_0, &VAR_3, sizeof(struct index_extension));
 return FUNC_0(VAR_0, VAR_2->ptr, VAR_2->size);
}
