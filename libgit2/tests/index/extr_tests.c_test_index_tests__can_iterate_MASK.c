
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int snap; } ;
typedef TYPE_2__ git_index_iterator ;
struct TYPE_10__ {size_t seconds; } ;
struct TYPE_12__ {size_t file_size; TYPE_1__ mtime; int path; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;
struct TYPE_13__ {size_t mtime; size_t file_size; int path; int index; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__**,int *) ;
 int FUNC_10 (TYPE_3__ const**,TYPE_2__*) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int *) ;
 TYPE_4__* VAR_2 ;

void FUNC_13(void)
{
 git_index *VAR_3;
 git_index_iterator *VAR_4;
 const git_index_entry *VAR_5;
 size_t VAR_6, VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 FUNC_6(FUNC_11(&VAR_3, VAR_1));
 FUNC_6(FUNC_9(&VAR_4, VAR_3));

 FUNC_1(FUNC_12(&VAR_4->snap));

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {

  do {
   VAR_9 = FUNC_10(&VAR_5, VAR_4);

   if (VAR_9 == VAR_0)
    FUNC_4("iterator did not contain all test entries");

   FUNC_6(VAR_9);
  } while (VAR_7++ < VAR_2[VAR_6].index);

  FUNC_3(VAR_5->path, VAR_2[VAR_6].path);
  FUNC_2(VAR_5->mtime.seconds, VAR_2[VAR_6].mtime);
  FUNC_2(VAR_5->file_size, VAR_2[VAR_6].file_size);
  VAR_8++;
 }

 while ((VAR_9 = FUNC_10(&VAR_5, VAR_4)) == 0)
  ;

 if (VAR_9 != VAR_0)
  FUNC_5(VAR_9);

 FUNC_2(VAR_8, FUNC_0(VAR_2));

 FUNC_8(VAR_4);
 FUNC_7(VAR_3);
}
