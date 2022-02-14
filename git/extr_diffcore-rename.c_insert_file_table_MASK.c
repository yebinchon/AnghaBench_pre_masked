
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct hashmap {int dummy; } ;
struct file_similarity {int index; int entry; struct diff_filespec* filespec; } ;
struct diff_filespec {int dummy; } ;


 int FUNC_0 (struct repository*,struct diff_filespec*) ;
 int FUNC_1 (struct hashmap*,int *) ;
 int FUNC_2 (int *,int ) ;
 struct file_similarity* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct repository *VAR_0,
         struct hashmap *VAR_1, int VAR_2,
         struct diff_filespec *VAR_3)
{
 struct file_similarity *VAR_4 = FUNC_3(sizeof(*VAR_4));

 VAR_4->index = VAR_2;
 VAR_4->filespec = VAR_3;

 FUNC_2(&VAR_4->entry, FUNC_0(VAR_0, VAR_3));
 FUNC_1(VAR_1, &VAR_4->entry);
}
