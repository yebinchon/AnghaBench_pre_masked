
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_7 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*) ;

void FUNC_11(void)
{
 git_iterator *VAR_8;
 git_iterator_options VAR_9 = VAR_2;

 VAR_9.flags |= VAR_1 |
  VAR_0;

 VAR_7 = FUNC_3("icase");


 FUNC_4(FUNC_9("icase/empty", 0777));


 FUNC_4(FUNC_9("icase/all_ignored", 0777));
 FUNC_2("icase/all_ignored/one", "This is ignored\n");
 FUNC_2("icase/all_ignored/two", "This, too, is ignored\n");
 FUNC_2("icase/all_ignored/.gitignore", ".gitignore\none\ntwo\n");


 FUNC_4(FUNC_9("icase/some_ignored", 0777));
 FUNC_2("icase/some_ignored/one", "This is ignored\n");
 FUNC_2("icase/some_ignored/two", "This is not ignored\n");
 FUNC_2("icase/some_ignored/.gitignore", ".gitignore\none\n");


 FUNC_4(FUNC_9("icase/empty_children", 0777));
 FUNC_4(FUNC_9("icase/empty_children/empty1", 0777));
 FUNC_4(FUNC_9("icase/empty_children/empty2", 0777));
 FUNC_4(FUNC_9("icase/empty_children/empty3", 0777));


 FUNC_4(FUNC_9("icase/missing_directory", 0777));

 FUNC_1(FUNC_7(&VAR_8, VAR_7, ((void*)0), ((void*)0), &VAR_9));

 FUNC_4(FUNC_10("icase/missing_directory"));

 FUNC_5(VAR_8, "B", VAR_5);
 FUNC_5(VAR_8, "D", VAR_5);
 FUNC_5(VAR_8, "F", VAR_5);
 FUNC_5(VAR_8, "H", VAR_5);
 FUNC_5(VAR_8, "J", VAR_5);
 FUNC_5(VAR_8, "L/", VAR_5);
 FUNC_5(VAR_8, "a", VAR_5);
 FUNC_5(VAR_8, "all_ignored/", VAR_4);
 FUNC_5(VAR_8, "c", VAR_5);
 FUNC_5(VAR_8, "e", VAR_5);
 FUNC_5(VAR_8, "empty/", VAR_3);
 FUNC_5(VAR_8, "empty_children/", VAR_3);
 FUNC_5(VAR_8, "g", VAR_5);
 FUNC_5(VAR_8, "i", VAR_5);
 FUNC_5(VAR_8, "k/", VAR_5);
 FUNC_5(VAR_8, "missing_directory/", VAR_3);
 FUNC_5(VAR_8, "some_ignored/", VAR_5);

 FUNC_0(VAR_6, FUNC_6(((void*)0), VAR_8));
 FUNC_8(VAR_8);
}
